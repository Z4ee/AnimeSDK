#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ST_CHESS_BYDISTANCETOTARGET_METHOD_4_9EB16729F58746DE_OFFSET UNITYSDK_OFFSET(0x17694D50)
#define RPG_GAMECORE_ST_CHESS_BYDISTANCETOTARGET_METHOD_4_BBC1299154D70B2A_OFFSET UNITYSDK_OFFSET(0x17694C80)
#define RPG_GAMECORE_ST_CHESS_BYDISTANCETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17694D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_ByDistanceToTarget_TypeDefinitionIndex = 22005;

	class ST_Chess_ByDistanceToTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Boolean UseVariable; // 0x2C
		::System::String* VariableName; // 0x30
		::RPG::GameCore::FixPoint CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYDISTANCETOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BBC1299154D70B2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByDistanceToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByDistanceToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYDISTANCETOTARGET_METHOD_4_BBC1299154D70B2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EB16729F58746DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYDISTANCETOTARGET_METHOD_4_9EB16729F58746DE_OFFSET))(a1, a2);
		}
	};
}
