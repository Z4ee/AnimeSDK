#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::LevelPerform { class LevelPerformConfig; }
namespace System { class Action; }

#define MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E5C6E0)
#define MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG___C__DISPLAYCLASS5_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x16E5C6F0)

namespace MoleMole::LevelPerform
{
	inline static constexpr unsigned int LevelPerformConfig___c__DisplayClass5_0_TypeDefinitionIndex = 68503;

	class LevelPerformConfig___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_b__0(::MoleMole::LevelPerform::LevelPerformConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LevelPerform::LevelPerformConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG___C__DISPLAYCLASS5_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
		}
	};
}
