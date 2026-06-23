#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_7D61104C59A2F8F6;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1783BF20)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS69_0__SETMINISCAPETASKCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x1783BF30)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass69_0_TypeDefinitionIndex = 60182;

	class UILineupSelectContext___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::Class_2_7D61104C59A2F8F6* questTemp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetMiniscapeTaskContext_b__0(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS69_0__SETMINISCAPETASKCONTEXT_B__0_OFFSET))(this, data);
		}
	};
}
