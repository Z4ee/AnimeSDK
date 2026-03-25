#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_METHOD_4_1AD51B6D16981189_OFFSET UNITYSDK_OFFSET(0x1768AF40)
#define RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_METHOD_4_32AE290085295DE6_OFFSET UNITYSDK_OFFSET(0x17698B10)
#define RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1768AEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_EnableInteractionTrigger_TypeDefinitionIndex = 18423;

	class ST_Side_EnableInteractionTrigger : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_32AE290085295DE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_EnableInteractionTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_EnableInteractionTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_METHOD_4_32AE290085295DE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1AD51B6D16981189(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_EnableInteractionTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_EnableInteractionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_METHOD_4_1AD51B6D16981189_OFFSET))(a1, a2);
		}
	};
}
