#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTARGETVALID_METHOD_4_2635CD2D74F81B0C_OFFSET UNITYSDK_OFFSET(0x17034240)
#define RPG_GAMECORE_BYISTARGETVALID_METHOD_4_69E3722AB084A21C_OFFSET UNITYSDK_OFFSET(0x17034310)
#define RPG_GAMECORE_BYISTARGETVALID__CTOR_OFFSET UNITYSDK_OFFSET(0x170342C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetValid_TypeDefinitionIndex = 22077;

	class ByIsTargetValid : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2635CD2D74F81B0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetValid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetValid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_METHOD_4_2635CD2D74F81B0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_69E3722AB084A21C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_METHOD_4_69E3722AB084A21C_OFFSET))(a1, a2);
		}
	};
}
