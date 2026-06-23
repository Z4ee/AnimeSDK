#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MovingWallConfig; }
namespace System { class Action; }

#define MOLEMOLE_MOVINGWALLCONFIG___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD74B0)
#define MOLEMOLE_MOVINGWALLCONFIG___C__DISPLAYCLASS2_0__RELOADFROMFILE_G__LOADCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x12BD74C0)

namespace MoleMole
{
	inline static constexpr unsigned int MovingWallConfig___c__DisplayClass2_0_TypeDefinitionIndex = 76513;

	class MovingWallConfig___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLCONFIG___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_g__LoadCallback_0(::MoleMole::MovingWallConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MovingWallConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLCONFIG___C__DISPLAYCLASS2_0__RELOADFROMFILE_G__LOADCALLBACK_0_OFFSET))(this, config);
		}
	};
}
