#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NullableBool.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE_METHOD_3_38A8DAE9353BCB01_OFFSET UNITYSDK_OFFSET(0x1BB18630)
#define RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE_METHOD_3_F5270914EC530F14_OFFSET UNITYSDK_OFFSET(0x1BB18670)
#define RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB18660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableHeadLookAtOverride_TypeDefinitionIndex = 22636;

	class DisableHeadLookAtOverride : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NullableBool State; // 0x20
		::System::Boolean DisableRootYawMapping; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38A8DAE9353BCB01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableHeadLookAtOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableHeadLookAtOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE_METHOD_3_38A8DAE9353BCB01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5270914EC530F14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableHeadLookAtOverride* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableHeadLookAtOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE_METHOD_3_F5270914EC530F14_OFFSET))(a1, a2);
		}
	};
}
