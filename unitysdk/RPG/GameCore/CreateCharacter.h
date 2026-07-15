#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CREATECHARACTER_METHOD_3_AFB1AAB8CC21D8DC_OFFSET UNITYSDK_OFFSET(0x1BC39F70)
#define RPG_GAMECORE_CREATECHARACTER_METHOD_3_C76A0B7408ED1B01_OFFSET UNITYSDK_OFFSET(0x1BC39FD0)
#define RPG_GAMECORE_CREATECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC39FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateCharacter_TypeDefinitionIndex = 20033;

	class CreateCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* AvatarID; // 0x20
		::System::Boolean NotLoadOnInit; // 0x28
		::System::Boolean UsePlayerPos; // 0x29
		::System::String* AreaName; // 0x30
		::System::String* AnchorName; // 0x38
		::System::Boolean IsOverrideArtModelOffset; // 0x40
		::RPG::MVector3 OverrideArtModelOffset; // 0x44
		::System::String* NPCAppearancePreset; // 0x50
		::Il2CppArray<::System::String*>* OverrideReplaceMaterialKeyList; // 0x58
		::System::String* AtlasFaceSetKey; // 0x60
		::System::Int32 PropSwitchMaterialIndex; // 0x68
		::System::Boolean IsInitPropState; // 0x6C
		::RPG::GameCore::PropState InitPropState; // 0x70
		::System::Boolean DisableEmoGraph; // 0x74
		::System::Int32 ArtReplaceIndex; // 0x78
		::System::String* FloatingTemplateName; // 0x80
		::System::Boolean EnableStandByBreak; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AFB1AAB8CC21D8DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECHARACTER_METHOD_3_AFB1AAB8CC21D8DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C76A0B7408ED1B01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECHARACTER_METHOD_3_C76A0B7408ED1B01_OFFSET))(a1, a2);
		}
	};
}
