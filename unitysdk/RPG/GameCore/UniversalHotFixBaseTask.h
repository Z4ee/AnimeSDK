#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }

#define RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_METHOD_3_3C5BD2870EE0BA88_OFFSET UNITYSDK_OFFSET(0x190E47F0)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_METHOD_3_61A7BDAF4C1DB6F7_OFFSET UNITYSDK_OFFSET(0x190E4AC0)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x190E4A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixBaseTask_TypeDefinitionIndex = 22324;

	class UniversalHotFixBaseTask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::UniversalHotFixTaskConfig* ParamConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SubTaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASETASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3C5BD2870EE0BA88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixBaseTask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixBaseTask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_METHOD_3_3C5BD2870EE0BA88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61A7BDAF4C1DB6F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixBaseTask* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixBaseTask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_METHOD_3_61A7BDAF4C1DB6F7_OFFSET))(a1, a2);
		}
	};
}
