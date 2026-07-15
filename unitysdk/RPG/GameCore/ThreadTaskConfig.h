#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_THREADTASKCONFIG_METHOD_2_183B1B91442726DB_OFFSET UNITYSDK_OFFSET(0x1C14F870)
#define RPG_GAMECORE_THREADTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14FA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ThreadTaskConfig_TypeDefinitionIndex = 23538;

	class ThreadTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ThreadTaskType Type; // 0x10
		::System::Boolean RunInMainThread; // 0x14
		::System::Int32 InnerloopBatchCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_THREADTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_183B1B91442726DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ThreadTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ThreadTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_THREADTASKCONFIG_METHOD_2_183B1B91442726DB_OFFSET))(a1, a2);
		}
	};
}
