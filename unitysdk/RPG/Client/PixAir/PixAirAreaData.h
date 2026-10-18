#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PixAirAreaRow; }

#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xDB24990)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xDB24AB0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET_NODEIDLIST_OFFSET UNITYSDK_OFFSET(0xDB24A10)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xDB249B0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xDB249A0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xDB24AC0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xDB24AD0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB24B60)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirAreaData_TypeDefinitionIndex = 79298;

	class PixAirAreaData : public ::System::Object
	{
	public:
		::System::UInt32 _AreaID_k__BackingField; // 0x10
		::System::Boolean _IsUnlock_k__BackingField; // 0x14

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
