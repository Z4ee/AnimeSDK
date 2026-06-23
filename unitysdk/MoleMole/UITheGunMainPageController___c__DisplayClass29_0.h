#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6F9C507D2BC133_Class_2_B57A8ED4EE569CA0;

#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x122BFDB0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__DISPLAYCLASS29_0__TRACKQUESTGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x122BFDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunMainPageController___c__DisplayClass29_0_TypeDefinitionIndex = 58511;

	class UITheGunMainPageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::Class_1_0D6F9C507D2BC133_Class_2_B57A8ED4EE569CA0* runningParas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrackQuestGroup_b__0(::System::Boolean succ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__DISPLAYCLASS29_0__TRACKQUESTGROUP_B__0_OFFSET))(this, succ);
		}
	};
}
