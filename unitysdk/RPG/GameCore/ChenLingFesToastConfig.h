#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESTOASTCONFIG_METHOD_2_F62BCDFB8497939B_OFFSET UNITYSDK_OFFSET(0x1C386360)
#define RPG_GAMECORE_CHENLINGFESTOASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C387000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesToastConfig_TypeDefinitionIndex = 17720;

	class ChenLingFesToastConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Text; // 0x10
		::System::String* TextID; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::GameCore::ChenLingFesToastStyleType StyleType; // 0x28
		::System::Single Duration; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTOASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F62BCDFB8497939B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesToastConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesToastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTOASTCONFIG_METHOD_2_F62BCDFB8497939B_OFFSET))(a1, a2);
		}
	};
}
