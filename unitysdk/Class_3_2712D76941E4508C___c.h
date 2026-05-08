#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_FFD0045B4597F294;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_2712D76941E4508C___C_METHOD_1_4263C87A55338108_OFFSET UNITYSDK_OFFSET(0x18CB8110)
#define CLASS_3_2712D76941E4508C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CB80C0)
#define CLASS_3_2712D76941E4508C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB8100)

inline static constexpr unsigned int Class_3_2712D76941E4508C___c_TypeDefinitionIndex = 74616;

class Class_3_2712D76941E4508C___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*>** StaticGet___9__12_0()
	{
		return (::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2712D76941E4508C___c_TypeDefinitionIndex)->GetStaticField(0x43CC0);
	}
	static ::Class_3_2712D76941E4508C___c** StaticGet___9()
	{
		return (::Class_3_2712D76941E4508C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2712D76941E4508C___c_TypeDefinitionIndex)->GetStaticField(0x43CC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4263C87A55338108(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C___C_METHOD_1_4263C87A55338108_OFFSET))(this, a1, a2);
	}
};
