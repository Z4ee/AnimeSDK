#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_METHOD_3_09B73AFC20059162_OFFSET UNITYSDK_OFFSET(0x19A24160)
#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_METHOD_3_451166C79BD9E8E9_OFFSET UNITYSDK_OFFSET(0x19A241E0)
#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19A241B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayCrossHairPreviewFadeIn_TypeDefinitionIndex = 21691;

	class PlayCrossHairPreviewFadeIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single FadeInOverrideTime; // 0x18
		::System::Boolean PlayOnAllTarget; // 0x1C
		::System::String* FadeInOverrideAnimName; // 0x20
		::System::String* LoopOverrideAnimName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_09B73AFC20059162(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_METHOD_3_09B73AFC20059162_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_451166C79BD9E8E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayCrossHairPreviewFadeIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_METHOD_3_451166C79BD9E8E9_OFFSET))(a1, a2);
		}
	};
}
