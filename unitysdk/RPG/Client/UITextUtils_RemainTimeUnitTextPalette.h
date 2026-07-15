#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_DAY_OFFSET UNITYSDK_OFFSET(0x18317600)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x18317610)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x18317620)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x18317630)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18317670)
#define RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18317640)

namespace RPG::Client
{
	inline static constexpr unsigned int UITextUtils_RemainTimeUnitTextPalette_TypeDefinitionIndex = 69831;

	class UITextUtils_RemainTimeUnitTextPalette : public ::System::Object
	{
	public:
		static ::RPG::Client::UITextUtils_RemainTimeUnitTextPalette** StaticGet_FullName()
		{
			return (::RPG::Client::UITextUtils_RemainTimeUnitTextPalette**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_RemainTimeUnitTextPalette_TypeDefinitionIndex)->GetStaticField(0x4F6D0);
		}
		::RPG::Client::TextID _Day_k__BackingField; // 0x10
		::RPG::Client::TextID _Hour_k__BackingField; // 0x20
		::RPG::Client::TextID _Second_k__BackingField; // 0x30
		::RPG::Client::TextID _Minute_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_REMAINTIMEUNITTEXTPALETTE__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
