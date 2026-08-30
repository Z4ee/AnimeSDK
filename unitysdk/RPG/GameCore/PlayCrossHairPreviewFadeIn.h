#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_METHOD_3_4AC6202B640AA10A_OFFSET UNITYSDK_OFFSET(0x1D347EC0)
#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_METHOD_3_E2BFE323D00A3487_OFFSET UNITYSDK_OFFSET(0x1D347E80)
#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D347EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayCrossHairPreviewFadeIn_TypeDefinitionIndex = 22687;

	class PlayCrossHairPreviewFadeIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single FadeInOverrideTime; // 0x18
		::System::Boolean PlayOnAllTarget; // 0x1C
		::System::String* FadeInOverrideAnimName; // 0x20
		::System::String* LoopOverrideAnimName; // 0x28
		::System::Boolean RefreshTargetInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2BFE323D00A3487(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_METHOD_3_E2BFE323D00A3487_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AC6202B640AA10A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayCrossHairPreviewFadeIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_METHOD_3_4AC6202B640AA10A_OFFSET))(a1, a2);
		}
	};
}
