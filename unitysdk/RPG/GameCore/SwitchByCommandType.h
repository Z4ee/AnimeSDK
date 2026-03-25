#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchCommandType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHBYCOMMANDTYPE_METHOD_3_2AB071769F677ED7_OFFSET UNITYSDK_OFFSET(0x17792070)
#define RPG_GAMECORE_SWITCHBYCOMMANDTYPE_METHOD_3_443C1CFFFEC9E913_OFFSET UNITYSDK_OFFSET(0x17791F90)
#define RPG_GAMECORE_SWITCHBYCOMMANDTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17792010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchByCommandType_TypeDefinitionIndex = 21920;

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

		static ::System::Void Method_3_443C1CFFFEC9E913(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchByCommandType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchByCommandType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBYCOMMANDTYPE_METHOD_3_443C1CFFFEC9E913_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2AB071769F677ED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchByCommandType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchByCommandType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBYCOMMANDTYPE_METHOD_3_2AB071769F677ED7_OFFSET))(a1, a2);
		}
	};
}
