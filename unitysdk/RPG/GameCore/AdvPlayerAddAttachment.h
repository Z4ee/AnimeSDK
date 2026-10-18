#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT_METHOD_3_11A28E4C71F808C7_OFFSET UNITYSDK_OFFSET(0x1D37CBD0)
#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT_METHOD_3_9FB537FCCDD5CBFE_OFFSET UNITYSDK_OFFSET(0x1D37CB90)
#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37CBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerAddAttachment_TypeDefinitionIndex = 21049;

	class AdvPlayerAddAttachment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BindTargetType; // 0x18
		::RPG::GameCore::DynamicString* PrefabPath; // 0x20
		::RPG::GameCore::DynamicString* UniqueName; // 0x28
		::RPG::GameCore::DynamicString* AttachPoint; // 0x30
		::RPG::MVector3 AttachOffset; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FB537FCCDD5CBFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerAddAttachment*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerAddAttachment*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT_METHOD_3_9FB537FCCDD5CBFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11A28E4C71F808C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerAddAttachment* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerAddAttachment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT_METHOD_3_11A28E4C71F808C7_OFFSET))(a1, a2);
		}
	};
}
