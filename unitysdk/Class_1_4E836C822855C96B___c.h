#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4E836C822855C96B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0E9680)
#define CLASS_1_4E836C822855C96B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E96C0)
#define CLASS_1_4E836C822855C96B___C___DISPATCHTITLES_B__25_0_OFFSET UNITYSDK_OFFSET(0x1C0E96D0)

inline static constexpr unsigned int Class_1_4E836C822855C96B___c_TypeDefinitionIndex = 35842;

class Class_1_4E836C822855C96B___c : public ::System::Object
{
public:
	static ::Class_1_4E836C822855C96B___c** StaticGet___9()
	{
		return (::Class_1_4E836C822855C96B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E836C822855C96B___c_TypeDefinitionIndex)->GetStaticField(0xAA20);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E836C822855C96B___c_TypeDefinitionIndex)->GetStaticField(0xAA28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E836C822855C96B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E836C822855C96B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __DispatchTitles_b__25_0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4E836C822855C96B___C___DISPATCHTITLES_B__25_0_OFFSET))(this, a1);
	}
};
