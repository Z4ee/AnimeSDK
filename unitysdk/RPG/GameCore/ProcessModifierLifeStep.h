#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROCESSMODIFIERLIFESTEP_METHOD_3_CE0C45CEF9D53DCE_OFFSET UNITYSDK_OFFSET(0x18C62770)
#define RPG_GAMECORE_PROCESSMODIFIERLIFESTEP_METHOD_3_E9CF12DB9E7C261F_OFFSET UNITYSDK_OFFSET(0x18C626F0)
#define RPG_GAMECORE_PROCESSMODIFIERLIFESTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x18C62740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProcessModifierLifeStep_TypeDefinitionIndex = 21602;

	class ProcessModifierLifeStep : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSMODIFIERLIFESTEP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E9CF12DB9E7C261F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProcessModifierLifeStep*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProcessModifierLifeStep*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSMODIFIERLIFESTEP_METHOD_3_E9CF12DB9E7C261F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE0C45CEF9D53DCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProcessModifierLifeStep* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProcessModifierLifeStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSMODIFIERLIFESTEP_METHOD_3_CE0C45CEF9D53DCE_OFFSET))(a1, a2);
		}
	};
}
