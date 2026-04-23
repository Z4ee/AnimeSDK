#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA3A4AC0)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0xA3A4B60)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_ISINFINITYENERGY_OFFSET UNITYSDK_OFFSET(0xA3A4B20)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA3A4B00)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_TOTALENERGY_OFFSET UNITYSDK_OFFSET(0xA3A4B40)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0xA3A4B70)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_ISINFINITYENERGY_OFFSET UNITYSDK_OFFSET(0xA3A4B30)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA3A4B10)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_TOTALENERGY_OFFSET UNITYSDK_OFFSET(0xA3A4B50)
#define RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3A4AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimJumpDisplayInfo_TypeDefinitionIndex = 59081;

	class FiveDimJumpDisplayInfo : public ::System::Object
	{
	public:
		::System::UInt32 _TotalEnergy_k__BackingField; // 0x10
		::System::UInt32 _CurrentEnergy_k__BackingField; // 0x14
		::System::Boolean _IsInfinityEnergy_k__BackingField; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x19

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

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_ISVALID_OFFSET))(this, value);
		}

		::System::Boolean get_IsInfinityEnergy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_ISINFINITYENERGY_OFFSET))(this);
		}

		::System::Void set_IsInfinityEnergy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_ISINFINITYENERGY_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_TOTALENERGY_OFFSET))(this);
		}

		::System::Void set_TotalEnergy(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_TOTALENERGY_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_GET_CURRENTENERGY_OFFSET))(this);
		}

		::System::Void set_CurrentEnergy(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMJUMPDISPLAYINFO_SET_CURRENTENERGY_OFFSET))(this, value);
		}
	};
}
