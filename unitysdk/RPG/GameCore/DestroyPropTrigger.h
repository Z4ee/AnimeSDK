#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYPROPTRIGGER_METHOD_3_158F3463F1147C5C_OFFSET UNITYSDK_OFFSET(0x1C1041D0)
#define RPG_GAMECORE_DESTROYPROPTRIGGER_METHOD_3_AF52E6EEB6CAF9B6_OFFSET UNITYSDK_OFFSET(0x1C104250)
#define RPG_GAMECORE_DESTROYPROPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C104220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyPropTrigger_TypeDefinitionIndex = 20781;

	class DestroyPropTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean DoOnExit; // 0x20
		::System::String* TriggerPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROPTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_158F3463F1147C5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyPropTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyPropTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROPTRIGGER_METHOD_3_158F3463F1147C5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF52E6EEB6CAF9B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyPropTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyPropTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROPTRIGGER_METHOD_3_AF52E6EEB6CAF9B6_OFFSET))(a1, a2);
		}
	};
}
