#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESDIALOGCONFIG_METHOD_2_84D5EF0C94C88A96_OFFSET UNITYSDK_OFFSET(0x1CFB2610)
#define RPG_GAMECORE_CHENLINGFESDIALOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB2820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesDialogConfig_TypeDefinitionIndex = 18239;

	class ChenLingFesDialogConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Text; // 0x10
		::System::String* TextID; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::GameCore::ChenLingFesProperty Property; // 0x28
		::RPG::GameCore::ChenLingFesDialogStyleType StyleType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESDIALOGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_84D5EF0C94C88A96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesDialogConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesDialogConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESDIALOGCONFIG_METHOD_2_84D5EF0C94C88A96_OFFSET))(a1, a2);
		}
	};
}
