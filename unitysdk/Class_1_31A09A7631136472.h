#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_31A09A7631136472_METHOD_1_8BB49121CE46D15D_OFFSET UNITYSDK_OFFSET(0x17FE2DB0)
#define CLASS_1_31A09A7631136472__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE2DA0)

inline static constexpr unsigned int Class_1_31A09A7631136472_TypeDefinitionIndex = 69294;

class Class_1_31A09A7631136472 : public ::System::Object
{
public:
	::Struct_2_085541A9CFF64383 GAKAHECPNDF; // 0x10
	::Struct_2_085541A9CFF64383 GCHIGPEHCAL; // 0x18

	::System::Void _ctor(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_31A09A7631136472__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::ValueTuple_2<::Class_1_31A09A7631136472*, ::Class_1_31A09A7631136472*> Method_1_8BB49121CE46D15D(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::ValueTuple_2<::Class_1_31A09A7631136472*, ::Class_1_31A09A7631136472*>(*)(::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_31A09A7631136472_METHOD_1_8BB49121CE46D15D_OFFSET))(a1, a2);
	}
};
