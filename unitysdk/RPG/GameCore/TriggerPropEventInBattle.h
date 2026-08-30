#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }

#define RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_METHOD_3_8691D61D7079393C_OFFSET UNITYSDK_OFFSET(0x1D293400)
#define RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_METHOD_3_A2D28BC1335A8B57_OFFSET UNITYSDK_OFFSET(0x1D293440)
#define RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D293430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPropEventInBattle_TypeDefinitionIndex = 22871;

	class TriggerPropEventInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* Event; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8691D61D7079393C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPropEventInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPropEventInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_METHOD_3_8691D61D7079393C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2D28BC1335A8B57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPropEventInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPropEventInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_METHOD_3_A2D28BC1335A8B57_OFFSET))(a1, a2);
		}
	};
}
