#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IntersectionPhaseSerialization; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEHARMONYTRAFFICLIGHTMONOSERIALIZATION_METHOD_2_3D0A5585FC21E325_OFFSET UNITYSDK_OFFSET(0x18E8DA70)
#define RPG_GAMECORE_STAGEHARMONYTRAFFICLIGHTMONOSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8DB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoSerialization_TypeDefinitionIndex = 18228;

	class StageHarmonyTrafficLightMonoSerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Channle; // 0x10
		::Il2CppArray<::RPG::GameCore::IntersectionPhaseSerialization*>* IntersectionPhaseList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYTRAFFICLIGHTMONOSERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3D0A5585FC21E325(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageHarmonyTrafficLightMonoSerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageHarmonyTrafficLightMonoSerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYTRAFFICLIGHTMONOSERIALIZATION_METHOD_2_3D0A5585FC21E325_OFFSET))(a1, a2);
		}
	};
}
