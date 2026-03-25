#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_DAY_OFFSET UNITYSDK_OFFSET(0xA73A4B0)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_HOUR_OFFSET UNITYSDK_OFFSET(0xA73A4C0)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0xA73A4D0)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_SECOND_OFFSET UNITYSDK_OFFSET(0xA73A4E0)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA73A520)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE__CTOR_OFFSET UNITYSDK_OFFSET(0xA73A4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UITextUtils_RemainTimeUnitTextPalette_TypeDefinitionIndex = 59992;

	class UITextUtils_RemainTimeUnitTextPalette : public ::System::Object
	{
	public:
		static ::RPG::Client::UITextUtils_RemainTimeUnitTextPalette** StaticGet_FullName()
		{
			return (::RPG::Client::UITextUtils_RemainTimeUnitTextPalette**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_RemainTimeUnitTextPalette_TypeDefinitionIndex)->GetStaticField(0x36B80);
		}
		::RPG::Client::TextID _Second_k__BackingField; // 0x10
		::RPG::Client::TextID _Minute_k__BackingField; // 0x20
		::RPG::Client::TextID _Day_k__BackingField; // 0x30
		::RPG::Client::TextID _Hour_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::Client::TextID day, ::RPG::Client::TextID hour, ::RPG::Client::TextID minute, ::RPG::Client::TextID second)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE__CTOR_OFFSET))(this, day, hour, minute, second);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE__CCTOR_OFFSET))();
		}

		::RPG::Client::TextID get_Day()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_DAY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Hour()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_HOUR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Minute()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_MINUTE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Second()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_SECOND_OFFSET))(this);
		}
	};
}
