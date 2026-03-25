#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEPLAYVIDEO_METHOD_3_487D95CFE253E73E_OFFSET UNITYSDK_OFFSET(0x16FDEB40)
#define RPG_GAMECORE_BATTLEPLAYVIDEO_METHOD_3_ABD4ACD0D79C73EC_OFFSET UNITYSDK_OFFSET(0x16FDEA90)
#define RPG_GAMECORE_BATTLEPLAYVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDEB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePlayVideo_TypeDefinitionIndex = 21607;

	class BattlePlayVideo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 VideoID; // 0x18
		::System::Boolean IsMuteBGM; // 0x1C
		::System::Boolean MuteBGMWithFadeOut; // 0x1D
		::System::Boolean CanSkip; // 0x1E
		::System::Boolean WithoutChangeAudio; // 0x1F
		::RPG::GameCore::ScreenTransferMode EndTransferMode; // 0x20
		::RPG::GameCore::StoryBlackType StartBlack; // 0x24
		::RPG::GameCore::ScreenTransferType StartBlackColor; // 0x28
		::RPG::GameCore::StoryBlackType EndBlack; // 0x2C
		::RPG::GameCore::ScreenTransferType EndBlackColor; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeginPlay; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNearlyEnd; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayEnd; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYVIDEO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABD4ACD0D79C73EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePlayVideo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePlayVideo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYVIDEO_METHOD_3_ABD4ACD0D79C73EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_487D95CFE253E73E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePlayVideo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePlayVideo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYVIDEO_METHOD_3_487D95CFE253E73E_OFFSET))(a1, a2);
		}
	};
}
