#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_463;
class Class_1_8E6394891B1A4CC4;
namespace MoleMole::Config { class CutScenePerformConfig; }

#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3D710)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__0_OFFSET UNITYSDK_OFFSET(0x18F3D720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutScenePerformConfig___c__DisplayClass12_0_TypeDefinitionIndex = 57850;

	class CutScenePerformConfig___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::CutScenePerformConfig* __4__this; // 0x10
		::Class_0_16E4307DCC419505_463* node; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_b__0(::Class_1_8E6394891B1A4CC4* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8E6394891B1A4CC4*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__0_OFFSET))(this, task);
		}
	};
}
