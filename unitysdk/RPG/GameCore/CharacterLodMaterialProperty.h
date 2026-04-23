#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERLODMATERIALPROPERTY_METHOD_2_C47006A955B21D68_OFFSET UNITYSDK_OFFSET(0x187D2A70)
#define RPG_GAMECORE_CHARACTERLODMATERIALPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x187D2C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterLodMaterialProperty_TypeDefinitionIndex = 18092;

	class CharacterLodMaterialProperty : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PropertyName; // 0x10
		::Il2CppArray<::System::Single>* Floats; // 0x18
		::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* Vectors; // 0x20
		::Il2CppArray<::RPG::MColor>* Colors; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODMATERIALPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C47006A955B21D68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterLodMaterialProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterLodMaterialProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODMATERIALPROPERTY_METHOD_2_C47006A955B21D68_OFFSET))(a1, a2);
		}
	};
}
