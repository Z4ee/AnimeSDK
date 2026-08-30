#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_METHOD_3_8D227BC6D7933C1A_OFFSET UNITYSDK_OFFSET(0x1D0B7CE0)
#define RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_METHOD_3_F73BD7498157E9C3_OFFSET UNITYSDK_OFFSET(0x1D0B7C90)
#define RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B7CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackAIUpperGroupForSpecified_TypeDefinitionIndex = 23445;

	class StackAIUpperGroupForSpecified : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SpecifiedAIOwner; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* AIUpperGroupPriority; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F73BD7498157E9C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackAIUpperGroupForSpecified*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackAIUpperGroupForSpecified*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_METHOD_3_F73BD7498157E9C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D227BC6D7933C1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackAIUpperGroupForSpecified* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackAIUpperGroupForSpecified*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_METHOD_3_8D227BC6D7933C1A_OFFSET))(a1, a2);
		}
	};
}
