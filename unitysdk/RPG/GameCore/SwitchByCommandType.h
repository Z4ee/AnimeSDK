#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchCommandType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHBYCOMMANDTYPE_METHOD_3_296DC11BD55C494E_OFFSET UNITYSDK_OFFSET(0x1CB16910)
#define RPG_GAMECORE_SWITCHBYCOMMANDTYPE_METHOD_3_64C9BF67FA9880A1_OFFSET UNITYSDK_OFFSET(0x1CB16870)
#define RPG_GAMECORE_SWITCHBYCOMMANDTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB168D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchByCommandType_TypeDefinitionIndex = 23398;

	class SwitchByCommandType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SwitchCommandType SwitchType; // 0x20
		::System::Boolean SwitchOn; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBYCOMMANDTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_64C9BF67FA9880A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchByCommandType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchByCommandType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBYCOMMANDTYPE_METHOD_3_64C9BF67FA9880A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_296DC11BD55C494E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchByCommandType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchByCommandType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBYCOMMANDTYPE_METHOD_3_296DC11BD55C494E_OFFSET))(a1, a2);
		}
	};
}
