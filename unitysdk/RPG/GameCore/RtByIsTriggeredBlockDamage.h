#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_175FB0B1D6C5BBB8_OFFSET UNITYSDK_OFFSET(0x19BE2F00)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_1B0C78932702C627_OFFSET UNITYSDK_OFFSET(0x19BE2D40)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_D6628B31A81CF8CD_OFFSET UNITYSDK_OFFSET(0x19BE2C70)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_DB76ACB4179E9670_OFFSET UNITYSDK_OFFSET(0x19BE2E80)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE2CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsTriggeredBlockDamage_TypeDefinitionIndex = 22848;

	class RtByIsTriggeredBlockDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D6628B31A81CF8CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_D6628B31A81CF8CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B0C78932702C627(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_1B0C78932702C627_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB76ACB4179E9670(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_DB76ACB4179E9670_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_175FB0B1D6C5BBB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_175FB0B1D6C5BBB8_OFFSET))(a1, a2);
		}
	};
}
