#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PixAirAreaRow; }

#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x19EBCD70)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x19EBCE90)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_NODEIDLIST_OFFSET UNITYSDK_OFFSET(0x19EBCDF0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x19EBCD90)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x19EBCD80)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x19EBCEA0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x19EBCEB0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19EBCF40)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirAreaData_TypeDefinitionIndex = 75270;

	class PixAirAreaData : public ::System::Object
	{
	public:
		::System::Boolean _IsUnlock_k__BackingField; // 0x10
		::System::UInt32 _AreaID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREADATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREADATA_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirAreaRow* get__Row()
		{
			return ((::RPG::GameCore::PixAirAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET__ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_NodeIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_NODEIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREADATA_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirAreaData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirAreaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREADATA_TRYCREATE_OFFSET))(a1);
		}
	};
}
