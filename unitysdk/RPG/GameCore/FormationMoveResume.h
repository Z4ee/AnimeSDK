#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONMOVERESUME_METHOD_3_01813456843B9B69_OFFSET UNITYSDK_OFFSET(0x1BEC12A0)
#define RPG_GAMECORE_FORMATIONMOVERESUME_METHOD_3_93E7DFA72A06626A_OFFSET UNITYSDK_OFFSET(0x1BEC1260)
#define RPG_GAMECORE_FORMATIONMOVERESUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC1290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveResume_TypeDefinitionIndex = 20460;

	class FormationMoveResume : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVERESUME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93E7DFA72A06626A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveResume*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveResume*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVERESUME_METHOD_3_93E7DFA72A06626A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01813456843B9B69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveResume* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveResume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVERESUME_METHOD_3_01813456843B9B69_OFFSET))(a1, a2);
		}
	};
}
