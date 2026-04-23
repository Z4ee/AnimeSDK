#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterLodMaterialProperty; }

#define RPG_GAMECORE_CHARACTERLODMATERIALPROPERTYLIST_METHOD_2_6B3E5357623F442A_OFFSET UNITYSDK_OFFSET(0x187D2C60)
#define RPG_GAMECORE_CHARACTERLODMATERIALPROPERTYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x187D2D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterLodMaterialPropertyList_TypeDefinitionIndex = 18093;

	class CharacterLodMaterialPropertyList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterLodMaterialProperty*>* Properties; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODMATERIALPROPERTYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6B3E5357623F442A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterLodMaterialPropertyList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterLodMaterialPropertyList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODMATERIALPROPERTYLIST_METHOD_2_6B3E5357623F442A_OFFSET))(a1, a2);
		}
	};
}
