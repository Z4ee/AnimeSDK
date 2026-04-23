#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS126_0__CREATEPROPENTITYCOMPONENTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x956B330)
#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS126_0__CREATEPROPENTITYCOMPONENTCONTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x956B360)
#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS126_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9564480)

inline static constexpr unsigned int Class_3_D6E9A038FA23103A___c__DisplayClass126_0_TypeDefinitionIndex = 70444;

class Class_3_D6E9A038FA23103A___c__DisplayClass126_0 : public ::System::Object
{
public:
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* __9__1; // 0x10
	::Class_3_D6E9A038FA23103A* __4__this; // 0x18
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* __9__0; // 0x20
	::Class_2_0C58AD91B0F4D809* propEntity; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS126_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreatePropEntityComponentContext_b__0(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS126_0__CREATEPROPENTITYCOMPONENTCONTEXT_B__0_OFFSET))(this, guestEntity);
	}

	::System::Void _CreatePropEntityComponentContext_b__1(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS126_0__CREATEPROPENTITYCOMPONENTCONTEXT_B__1_OFFSET))(this, guestEntity);
	}
};
