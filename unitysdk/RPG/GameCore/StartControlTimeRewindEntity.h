#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_METHOD_3_BA2C253F875455E6_OFFSET UNITYSDK_OFFSET(0x19CB7180)
#define RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_METHOD_3_F95DEC57BCB7621C_OFFSET UNITYSDK_OFFSET(0x19CB7100)
#define RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB7150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartControlTimeRewindEntity_TypeDefinitionIndex = 19498;

	class StartControlTimeRewindEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Control; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F95DEC57BCB7621C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartControlTimeRewindEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartControlTimeRewindEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_METHOD_3_F95DEC57BCB7621C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA2C253F875455E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartControlTimeRewindEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartControlTimeRewindEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_METHOD_3_BA2C253F875455E6_OFFSET))(a1, a2);
		}
	};
}
