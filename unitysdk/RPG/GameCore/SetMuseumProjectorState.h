#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_METHOD_3_75F680D02EF0C8C2_OFFSET UNITYSDK_OFFSET(0x1C6037E0)
#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_METHOD_3_DCD786DC07DEC433_OFFSET UNITYSDK_OFFSET(0x1C603830)
#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C603820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMuseumProjectorState_TypeDefinitionIndex = 21388;

	class SetMuseumProjectorState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 ThemeNum; // 0x20
		::System::Single SwitchSpeed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSEUMPROJECTORSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75F680D02EF0C8C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMuseumProjectorState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMuseumProjectorState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_METHOD_3_75F680D02EF0C8C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCD786DC07DEC433(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMuseumProjectorState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMuseumProjectorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_METHOD_3_DCD786DC07DEC433_OFFSET))(a1, a2);
		}
	};
}
