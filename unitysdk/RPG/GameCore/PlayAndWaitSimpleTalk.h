#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SimpleTalkBackground; }
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }

#define RPG_GAMECORE_PLAYANDWAITSIMPLETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19A23320)
#define RPG_GAMECORE_PLAYANDWAITSIMPLETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A232A0)
#define RPG_GAMECORE_PLAYANDWAITSIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A232F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAndWaitSimpleTalk_TypeDefinitionIndex = 19956;

	class PlayAndWaitSimpleTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Boolean KeepDisplay; // 0x20
		::System::Boolean BlackMask; // 0x21
		::System::Boolean NeedFadeBlackMask; // 0x22
		::System::Boolean UseBackground; // 0x23
		::System::Boolean SkipFirstTalkBgFadeIn; // 0x24
		::Il2CppArray<::RPG::GameCore::SimpleTalkBackground*>* Backgrounds; // 0x28
		::System::Boolean UseTargetBehavior; // 0x30
		::Il2CppArray<::RPG::GameCore::SimpleTalkTargetBehavior*>* TargetBehaviors; // 0x38
		::System::Boolean ChangeStyle; // 0x40
		::Il2CppArray<::RPG::GameCore::SimpleTalkStyle*>* StyleList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITSIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAndWaitSimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAndWaitSimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITSIMPLETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAndWaitSimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAndWaitSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITSIMPLETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
