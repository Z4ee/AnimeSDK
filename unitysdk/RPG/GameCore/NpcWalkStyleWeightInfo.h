#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCWALKSTYLEWEIGHTINFO_METHOD_2_CB63EBF37B56651E_OFFSET UNITYSDK_OFFSET(0x17479050)
#define RPG_GAMECORE_NPCWALKSTYLEWEIGHTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x174791F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcWalkStyleWeightInfo_TypeDefinitionIndex = 15484;

	class NpcWalkStyleWeightInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::NPCBodySize NpcBodySize; // 0x10
		::Il2CppArray<::System::Single>* Weights; // 0x18
		::System::Single RandomStyleTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCWALKSTYLEWEIGHTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB63EBF37B56651E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcWalkStyleWeightInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcWalkStyleWeightInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCWALKSTYLEWEIGHTINFO_METHOD_2_CB63EBF37B56651E_OFFSET))(a1, a2);
		}
	};
}
