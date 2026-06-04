#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_1F0F222EF76CBE2E_OFFSET UNITYSDK_OFFSET(0x19BF85C0)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_2CC13B44D3C4319C_OFFSET UNITYSDK_OFFSET(0x19BF84B0)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_6D2B772FEB132862_OFFSET UNITYSDK_OFFSET(0x19BF8420)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_76710D1B3C837200_OFFSET UNITYSDK_OFFSET(0x19BF8630)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF8490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapTargetInTrigger_TypeDefinitionIndex = 22924;

	class RtTargetMapTargetInTrigger : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x10
		::System::String* TriggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D2B772FEB132862(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapTargetInTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_6D2B772FEB132862_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2CC13B44D3C4319C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_2CC13B44D3C4319C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F0F222EF76CBE2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_1F0F222EF76CBE2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76710D1B3C837200(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_76710D1B3C837200_OFFSET))(a1, a2);
		}
	};
}
