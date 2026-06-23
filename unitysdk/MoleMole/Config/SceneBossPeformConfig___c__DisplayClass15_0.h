#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_463;
class Class_1_8E6394891B1A4CC4;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneBossPeformConfig; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE9805A0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__1_OFFSET UNITYSDK_OFFSET(0xE980710)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__2_OFFSET UNITYSDK_OFFSET(0xE9809A0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_G__HANDLEENTITYANIMATOR_0_OFFSET UNITYSDK_OFFSET(0xE9805B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneBossPeformConfig___c__DisplayClass15_0_TypeDefinitionIndex = 57317;

	class SceneBossPeformConfig___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_463* node; // 0x10
		::MoleMole::Config::SceneBossPeformConfig* __4__this; // 0x18
		::System::Action_1<::MoleMole::Battle::Entity*>* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_g__HandleEntityAnimator_0(::Class_0_16E4307DCC419505_463* performNode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_463*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_G__HANDLEENTITYANIMATOR_0_OFFSET))(this, performNode);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_b__1(::Class_1_8E6394891B1A4CC4* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8E6394891B1A4CC4*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__1_OFFSET))(this, task);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_b__2(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__2_OFFSET))(this, entity);
		}
	};
}
