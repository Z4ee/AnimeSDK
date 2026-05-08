#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C655AF28A19D750E;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_8C642275BF3E56A8___C_METHOD_1_2066B693D3D0F431_OFFSET UNITYSDK_OFFSET(0x14AC5620)
#define CLASS_3_8C642275BF3E56A8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AC55D0)
#define CLASS_3_8C642275BF3E56A8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC5610)

inline static constexpr unsigned int Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex = 62088;

class Class_3_8C642275BF3E56A8___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_C655AF28A19D750E*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_C655AF28A19D750E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex)->GetStaticField(0x3B650);
	}
	static ::Class_3_8C642275BF3E56A8___c** StaticGet___9()
	{
		return (::Class_3_8C642275BF3E56A8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex)->GetStaticField(0x3B658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2066B693D3D0F431(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_C655AF28A19D750E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_C655AF28A19D750E*))((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C_METHOD_1_2066B693D3D0F431_OFFSET))(this, a1, a2);
	}
};
