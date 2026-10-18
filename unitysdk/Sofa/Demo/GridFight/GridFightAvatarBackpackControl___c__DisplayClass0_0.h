#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_486;
class Class_0_16E4307DCC419505_487;

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE976380)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS0_0___BINDING_B__2_OFFSET UNITYSDK_OFFSET(0xE978980)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightAvatarBackpackControl___c__DisplayClass0_0_TypeDefinitionIndex = 49702;

	class GridFightAvatarBackpackControl___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_487* __Binding_b__2(::Class_0_16E4307DCC419505_486* a1)
		{
			return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID, ::Class_0_16E4307DCC419505_486*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS0_0___BINDING_B__2_OFFSET))(this, a1);
		}
	};
}
