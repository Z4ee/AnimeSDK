#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_2CC13B44D3C4319C_OFFSET UNITYSDK_OFFSET(0x1D4B8820)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_83563DFB91ADE1CB_OFFSET UNITYSDK_OFFSET(0x1D4B8980)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_EEC81788D4BB93E6_OFFSET UNITYSDK_OFFSET(0x1D4B8930)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_FBEB54ABF1B3B8F4_OFFSET UNITYSDK_OFFSET(0x1D4B87C0)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B8810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapTargetInTrigger_TypeDefinitionIndex = 23971;

	class RtTargetMapTargetInTrigger : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x10
		::System::String* TriggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FBEB54ABF1B3B8F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapTargetInTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_FBEB54ABF1B3B8F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2CC13B44D3C4319C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_2CC13B44D3C4319C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EEC81788D4BB93E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_EEC81788D4BB93E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83563DFB91ADE1CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_83563DFB91ADE1CB_OFFSET))(a1, a2);
		}
	};
}
