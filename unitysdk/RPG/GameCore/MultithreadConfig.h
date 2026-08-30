#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ThreadTaskConfig; }

#define RPG_GAMECORE_MULTITHREADCONFIG_METHOD_2_994D32FD8876D21E_OFFSET UNITYSDK_OFFSET(0x1D2DD800)
#define RPG_GAMECORE_MULTITHREADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DD8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultithreadConfig_TypeDefinitionIndex = 24124;

	class MultithreadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ThreadTaskConfig*>* ThreadTaskList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTITHREADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_994D32FD8876D21E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MultithreadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MultithreadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTITHREADCONFIG_METHOD_2_994D32FD8876D21E_OFFSET))(a1, a2);
		}
	};
}
