#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_AF37D287A7DA5B72;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184BC590)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__SETMINISCAPEQUESTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x184BC5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass67_0_TypeDefinitionIndex = 52592;

	class UILineupSelectContext___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::Class_2_AF37D287A7DA5B72* questTemp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetMiniscapeQuestContext_b__0(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__SETMINISCAPEQUESTCONTEXT_B__0_OFFSET))(this, data);
		}
	};
}
