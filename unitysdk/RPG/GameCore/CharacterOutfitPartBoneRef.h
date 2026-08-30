#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEROUTFITPARTBONEREF_METHOD_2_8C665782797D5D25_OFFSET UNITYSDK_OFFSET(0x1D124B30)
#define RPG_GAMECORE_CHARACTEROUTFITPARTBONEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D124C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPartBoneRef_TypeDefinitionIndex = 17285;

	class CharacterOutfitPartBoneRef : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BoneName; // 0x10
		::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>* ChildBones; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPARTBONEREF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8C665782797D5D25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOutfitPartBoneRef*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOutfitPartBoneRef*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPARTBONEREF_METHOD_2_8C665782797D5D25_OFFSET))(a1, a2);
		}
	};
}
