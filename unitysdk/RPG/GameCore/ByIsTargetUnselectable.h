#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_1E496DCCA55219CF_OFFSET UNITYSDK_OFFSET(0x18758B40)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_35CA86ACD372C84B_OFFSET UNITYSDK_OFFSET(0x18758A70)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18758AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetUnselectable_TypeDefinitionIndex = 22494;

	class ByIsTargetUnselectable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_35CA86ACD372C84B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_35CA86ACD372C84B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E496DCCA55219CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_1E496DCCA55219CF_OFFSET))(a1, a2);
		}
	};
}
