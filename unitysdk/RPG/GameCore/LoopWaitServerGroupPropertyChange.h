#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_METHOD_3_67604A541838EFF1_OFFSET UNITYSDK_OFFSET(0x17371290)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_METHOD_3_8B0B849A61AA5001_OFFSET UNITYSDK_OFFSET(0x17371200)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17371260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerGroupPropertyChange_TypeDefinitionIndex = 19480;

	class LoopWaitServerGroupPropertyChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B0B849A61AA5001(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerGroupPropertyChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerGroupPropertyChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_METHOD_3_8B0B849A61AA5001_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67604A541838EFF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_METHOD_3_67604A541838EFF1_OFFSET))(a1, a2);
		}
	};
}
