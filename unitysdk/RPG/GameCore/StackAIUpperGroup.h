#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STACKAIUPPERGROUP_METHOD_3_3A0B447AEBA0AFFF_OFFSET UNITYSDK_OFFSET(0x18E85820)
#define RPG_GAMECORE_STACKAIUPPERGROUP_METHOD_3_A3E141CDEEADBA8B_OFFSET UNITYSDK_OFFSET(0x18E858C0)
#define RPG_GAMECORE_STACKAIUPPERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18E85880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackAIUpperGroup_TypeDefinitionIndex = 22709;

	class StackAIUpperGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AIUpperGroupPriority; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A0B447AEBA0AFFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackAIUpperGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackAIUpperGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUP_METHOD_3_3A0B447AEBA0AFFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3E141CDEEADBA8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackAIUpperGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackAIUpperGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUP_METHOD_3_A3E141CDEEADBA8B_OFFSET))(a1, a2);
		}
	};
}
