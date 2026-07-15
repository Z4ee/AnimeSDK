#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_018D60C88AC1DF44_OFFSET UNITYSDK_OFFSET(0x1BB906C0)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_1B0C78932702C627_OFFSET UNITYSDK_OFFSET(0x1BB90550)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_99FF7D8DDA83262D_OFFSET UNITYSDK_OFFSET(0x1BB90690)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_F8383DC8D947B5EC_OFFSET UNITYSDK_OFFSET(0x1BB90510)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB90540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsTriggeredBlockDamage_TypeDefinitionIndex = 23315;

	class RtByIsTriggeredBlockDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F8383DC8D947B5EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_F8383DC8D947B5EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B0C78932702C627(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_1B0C78932702C627_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_99FF7D8DDA83262D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_99FF7D8DDA83262D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_018D60C88AC1DF44(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_018D60C88AC1DF44_OFFSET))(a1, a2);
		}
	};
}
