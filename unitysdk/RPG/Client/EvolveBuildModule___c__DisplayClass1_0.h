#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildStage; }

#define RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3000C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS1_0__GETSEASONSTAGESWITHOUTTUTORIAL_B__0_OFFSET UNITYSDK_OFFSET(0xA3000D0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildModule___c__DisplayClass1_0_TypeDefinitionIndex = 58795;

	class EvolveBuildModule___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 tutorialStageID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSeasonStagesWithoutTutorial_b__0(::RPG::Client::EvolveBuildStage* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS1_0__GETSEASONSTAGESWITHOUTTUTORIAL_B__0_OFFSET))(this, a);
		}
	};
}
