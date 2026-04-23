#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALORIGINPROPERTY_METHOD_2_3D5246C2ACE76D4A_OFFSET UNITYSDK_OFFSET(0x187D6D80)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALORIGINPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x187D6F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialOriginProperty_TypeDefinitionIndex = 16551;

	class CharacterReplaceMaterialOriginProperty : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* Property2D; // 0x10
		::Il2CppArray<::System::String*>* PropertyColor; // 0x18
		::Il2CppArray<::System::String*>* PropertyInt; // 0x20
		::Il2CppArray<::System::String*>* PropertyFloat; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALORIGINPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3D5246C2ACE76D4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALORIGINPROPERTY_METHOD_2_3D5246C2ACE76D4A_OFFSET))(a1, a2);
		}
	};
}
