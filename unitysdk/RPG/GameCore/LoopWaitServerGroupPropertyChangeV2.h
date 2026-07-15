#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_METHOD_3_45A7A71E4313E3B4_OFFSET UNITYSDK_OFFSET(0x1BCD4D30)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_METHOD_3_C54611E63662E3E1_OFFSET UNITYSDK_OFFSET(0x1BCD4D70)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD4D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerGroupPropertyChangeV2_TypeDefinitionIndex = 20386;

	class LoopWaitServerGroupPropertyChangeV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_45A7A71E4313E3B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerGroupPropertyChangeV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerGroupPropertyChangeV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_METHOD_3_45A7A71E4313E3B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C54611E63662E3E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerGroupPropertyChangeV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerGroupPropertyChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_METHOD_3_C54611E63662E3E1_OFFSET))(a1, a2);
		}
	};
}
