#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERFACEEXPRESSIONCONFIG_METHOD_2_AC854EA64A62D4D2_OFFSET UNITYSDK_OFFSET(0x1960D760)
#define RPG_GAMECORE_CHARACTERFACEEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1960DA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterFaceExpressionConfig_TypeDefinitionIndex = 16590;

	class CharacterFaceExpressionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ExCheekIntensity; // 0x10
		::System::Single ExShyIntensity; // 0x14
		::System::Single ExShadowIntensity; // 0x18
		::System::Boolean ChangeStaticProperty; // 0x1C
		::System::String* CheekColor; // 0x20
		::System::Single MapThreshold; // 0x28
		::System::Single SpecularIntensity; // 0x2C
		::System::String* ShyColor; // 0x30
		::System::String* ShadowColor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFACEEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AC854EA64A62D4D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterFaceExpressionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterFaceExpressionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFACEEXPRESSIONCONFIG_METHOD_2_AC854EA64A62D4D2_OFFSET))(a1, a2);
		}
	};
}
