#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEHARMONYSIGNALDYNAMICPATTERNMONOSERIALIZATION_METHOD_2_F35845005F9A325E_OFFSET UNITYSDK_OFFSET(0x18E8D910)
#define RPG_GAMECORE_STAGEHARMONYSIGNALDYNAMICPATTERNMONOSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8DA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageHarmonySignalDynamicPatternMonoSerialization_TypeDefinitionIndex = 18231;

	class StageHarmonySignalDynamicPatternMonoSerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Channle; // 0x10
		::System::Int32 SerialID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYSIGNALDYNAMICPATTERNMONOSERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F35845005F9A325E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageHarmonySignalDynamicPatternMonoSerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageHarmonySignalDynamicPatternMonoSerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYSIGNALDYNAMICPATTERNMONOSERIALIZATION_METHOD_2_F35845005F9A325E_OFFSET))(a1, a2);
		}
	};
}
