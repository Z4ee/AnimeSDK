#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEHARMONYPLAYERPOSSIGNALMONOSERIALIZATION_METHOD_2_BA59B3F76F4302B7_OFFSET UNITYSDK_OFFSET(0x177679D0)
#define RPG_GAMECORE_STAGEHARMONYPLAYERPOSSIGNALMONOSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17767AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageHarmonyPlayerPosSignalMonoSerialization_TypeDefinitionIndex = 17617;

	class StageHarmonyPlayerPosSignalMonoSerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Range; // 0x10
		::System::String* Channle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYPLAYERPOSSIGNALMONOSERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BA59B3F76F4302B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageHarmonyPlayerPosSignalMonoSerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageHarmonyPlayerPosSignalMonoSerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYPLAYERPOSSIGNALMONOSERIALIZATION_METHOD_2_BA59B3F76F4302B7_OFFSET))(a1, a2);
		}
	};
}
