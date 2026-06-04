#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_RTINSERTSKILL_METHOD_3_060ABBF019720B8D_OFFSET UNITYSDK_OFFSET(0x19BEA9E0)
#define RPG_GAMECORE_RTINSERTSKILL_METHOD_3_94B163D988F9F903_OFFSET UNITYSDK_OFFSET(0x19BEAAB0)
#define RPG_GAMECORE_RTINSERTSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEAA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtInsertSkill_TypeDefinitionIndex = 22896;

	class RtInsertSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillName; // 0x20
		::RPG::GameCore::TargetEvaluator* SkillTargetType; // 0x28
		::RPG::GameCore::JsonEnum* Priority; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInsertAbort; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTINSERTSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_060ABBF019720B8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtInsertSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtInsertSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTINSERTSKILL_METHOD_3_060ABBF019720B8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_94B163D988F9F903(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtInsertSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtInsertSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTINSERTSKILL_METHOD_3_94B163D988F9F903_OFFSET))(a1, a2);
		}
	};
}
