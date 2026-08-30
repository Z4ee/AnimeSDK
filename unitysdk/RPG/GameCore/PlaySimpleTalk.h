#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SimpleTalkBackground; }
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }

#define RPG_GAMECORE_PLAYSIMPLETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D34C820)
#define RPG_GAMECORE_PLAYSIMPLETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D34C7D0)
#define RPG_GAMECORE_PLAYSIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34C810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySimpleTalk_TypeDefinitionIndex = 20605;

	class PlaySimpleTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Boolean KeepDisplay; // 0x20
		::System::Boolean BlackMask; // 0x21
		::RPG::GameCore::SimpleTalkBlackMaskColor BlackMaskColor; // 0x24
		::System::Boolean NeedFadeBlackMask; // 0x28
		::System::Single BlackMaskFadeDuration; // 0x2C
		::System::Boolean UseBackground; // 0x30
		::System::Boolean SkipFirstTalkBgFadeIn; // 0x31
		::Il2CppArray<::RPG::GameCore::SimpleTalkBackground*>* Backgrounds; // 0x38
		::System::Boolean UseTargetBehavior; // 0x40
		::Il2CppArray<::RPG::GameCore::SimpleTalkTargetBehavior*>* TargetBehaviors; // 0x48
		::System::Boolean ChangeStyle; // 0x50
		::Il2CppArray<::RPG::GameCore::SimpleTalkStyle*>* StyleList; // 0x58
		::System::Boolean IsFromTimeline; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlaySimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlaySimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSIMPLETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlaySimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlaySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSIMPLETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
