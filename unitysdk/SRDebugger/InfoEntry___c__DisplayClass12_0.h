#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRDEBUGGER_INFOENTRY___C__DISPLAYCLASS12_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x19E6C340)
#define SRDEBUGGER_INFOENTRY___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6C330)

namespace SRDebugger
{
	inline static constexpr unsigned int InfoEntry___c__DisplayClass12_0_TypeDefinitionIndex = 35335;

	class InfoEntry___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Object* value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Object* _Create_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY___C__DISPLAYCLASS12_0__CREATE_B__0_OFFSET))(this);
		}
	};
}
