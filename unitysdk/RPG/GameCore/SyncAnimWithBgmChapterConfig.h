#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SyncAnimWithBgmPhaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SYNCANIMWITHBGMCHAPTERCONFIG_METHOD_2_C3F83F803B4B404F_OFFSET UNITYSDK_OFFSET(0x1E15C780)
#define RPG_GAMECORE_SYNCANIMWITHBGMCHAPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15C920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncAnimWithBgmChapterConfig_TypeDefinitionIndex = 22143;

	class SyncAnimWithBgmChapterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ChapterCueEvent; // 0x10
		::Il2CppArray<::RPG::GameCore::SyncAnimWithBgmPhaseConfig*>* PhaseConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::SyncAnimWithBgmPhaseConfig*>* x2PhaseConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGMCHAPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C3F83F803B4B404F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncAnimWithBgmChapterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncAnimWithBgmChapterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGMCHAPTERCONFIG_METHOD_2_C3F83F803B4B404F_OFFSET))(a1, a2);
		}
	};
}
