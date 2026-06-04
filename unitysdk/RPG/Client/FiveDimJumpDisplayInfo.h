#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xBA40610)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0xBA406B0)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_ISINFINITYENERGY_OFFSET UNITYSDK_OFFSET(0xBA40670)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xBA40650)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_TOTALENERGY_OFFSET UNITYSDK_OFFSET(0xBA40690)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0xBA406C0)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_ISINFINITYENERGY_OFFSET UNITYSDK_OFFSET(0xBA40680)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xBA40660)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_TOTALENERGY_OFFSET UNITYSDK_OFFSET(0xBA406A0)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBA40600)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimJumpDisplayInfo_TypeDefinitionIndex = 60011;

	class FiveDimJumpDisplayInfo : public ::System::Object
	{
	public:
		::System::UInt32 _CurrentEnergy_k__BackingField; // 0x10
		::System::UInt32 _TotalEnergy_k__BackingField; // 0x14
		::System::Boolean _IsValid_k__BackingField; // 0x18
		::System::Boolean _IsInfinityEnergy_k__BackingField; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FiveDimJumpDisplayInfo* Create()
		{
			return ((::RPG::Client::FiveDimJumpDisplayInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_CREATE_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInfinityEnergy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_ISINFINITYENERGY_OFFSET))(this);
		}

		::System::Void set_IsInfinityEnergy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_ISINFINITYENERGY_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_TOTALENERGY_OFFSET))(this);
		}

		::System::Void set_TotalEnergy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_TOTALENERGY_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_CURRENTENERGY_OFFSET))(this);
		}

		::System::Void set_CurrentEnergy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_CURRENTENERGY_OFFSET))(this, a1);
		}
	};
}
