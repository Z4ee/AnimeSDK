#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_938BD03463F13CE8_OFFSET UNITYSDK_OFFSET(0x18DDB8E0)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_F2FF496F310F6856_OFFSET UNITYSDK_OFFSET(0x18DDB970)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDB950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapTargetInTrigger_TypeDefinitionIndex = 23256;

	class RtTargetMapTargetInTrigger : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x10
		::System::String* TriggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_938BD03463F13CE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapTargetInTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_938BD03463F13CE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2FF496F310F6856(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_METHOD_3_F2FF496F310F6856_OFFSET))(a1, a2);
		}
	};
}
