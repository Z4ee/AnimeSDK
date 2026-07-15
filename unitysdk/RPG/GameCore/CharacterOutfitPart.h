#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterOutfitPartBoneRef; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEROUTFITPART_METHOD_2_5154CF1CFCE610A0_OFFSET UNITYSDK_OFFSET(0x1B726840)
#define RPG_GAMECORE_CHARACTEROUTFITPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7269D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPart_TypeDefinitionIndex = 16784;

	class CharacterOutfitPart : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RenderName; // 0x10
		::System::String* RenderMeshPath; // 0x18
		::RPG::GameCore::CharacterOutfitPartBoneRef* RootBoneRef; // 0x20
		::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>* BoneRefArray; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5154CF1CFCE610A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOutfitPart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOutfitPart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPART_METHOD_2_5154CF1CFCE610A0_OFFSET))(a1, a2);
		}
	};
}
