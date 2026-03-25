#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEHARMONYSIGNALDEMODULATORMONOSERIALIZATION_METHOD_2_01BAD194C541D1AE_OFFSET UNITYSDK_OFFSET(0x17767AF0)
#define RPG_GAMECORE_STAGEHARMONYSIGNALDEMODULATORMONOSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17767C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorMonoSerialization_TypeDefinitionIndex = 17616;

	class StageHarmonySignalDemodulatorMonoSerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Channle; // 0x10
		::System::Int32 SerialID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYSIGNALDEMODULATORMONOSERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_01BAD194C541D1AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageHarmonySignalDemodulatorMonoSerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageHarmonySignalDemodulatorMonoSerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYSIGNALDEMODULATORMONOSERIALIZATION_METHOD_2_01BAD194C541D1AE_OFFSET))(a1, a2);
		}
	};
}
