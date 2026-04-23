#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_METHOD_3_361FD9F4B46FD620_OFFSET UNITYSDK_OFFSET(0x18E3C5A0)
#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_METHOD_3_DCD786DC07DEC433_OFFSET UNITYSDK_OFFSET(0x18E3C630)
#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3C600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMuseumProjectorState_TypeDefinitionIndex = 21066;

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

		static ::System::Void Method_3_361FD9F4B46FD620(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMuseumProjectorState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMuseumProjectorState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_METHOD_3_361FD9F4B46FD620_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCD786DC07DEC433(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMuseumProjectorState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMuseumProjectorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_METHOD_3_DCD786DC07DEC433_OFFSET))(a1, a2);
		}
	};
}
