#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVMODIFYMAXMAZEMP_METHOD_3_58125755B265973B_OFFSET UNITYSDK_OFFSET(0x16F33950)
#define RPG_GAMECORE_ADVMODIFYMAXMAZEMP_METHOD_3_F4FBEBCC4B349CF3_OFFSET UNITYSDK_OFFSET(0x16F33A70)
#define RPG_GAMECORE_ADVMODIFYMAXMAZEMP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F339F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvModifyMaxMazeMP_TypeDefinitionIndex = 19989;

	class AdvModifyMaxMazeMP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFYMAXMAZEMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_58125755B265973B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvModifyMaxMazeMP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvModifyMaxMazeMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFYMAXMAZEMP_METHOD_3_58125755B265973B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4FBEBCC4B349CF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvModifyMaxMazeMP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvModifyMaxMazeMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFYMAXMAZEMP_METHOD_3_F4FBEBCC4B349CF3_OFFSET))(a1, a2);
		}
	};
}
