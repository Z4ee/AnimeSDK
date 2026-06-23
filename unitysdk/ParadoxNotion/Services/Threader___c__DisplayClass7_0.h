#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PARADOXNOTION_SERVICES_THREADER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC50750)
#define PARADOXNOTION_SERVICES_THREADER___C__DISPLAYCLASS7_0__STARTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1CC50760)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass7_0_TypeDefinitionIndex = 30822;

	class Threader___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* function; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER___C__DISPLAYCLASS7_0__STARTACTION_B__0_OFFSET))(this);
		}
	};
}
