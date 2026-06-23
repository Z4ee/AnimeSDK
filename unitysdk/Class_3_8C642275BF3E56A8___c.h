#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_41605D8FFAF51822;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_8C642275BF3E56A8___C_METHOD_1_2066B693D3D0F431_OFFSET UNITYSDK_OFFSET(0xFBF4F80)
#define CLASS_3_8C642275BF3E56A8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFBF4F30)
#define CLASS_3_8C642275BF3E56A8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFBF4F70)

inline static constexpr unsigned int Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex = 82332;

class Class_3_8C642275BF3E56A8___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_41605D8FFAF51822*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_41605D8FFAF51822*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex)->GetStaticField(0x4C380);
	}
	static ::Class_3_8C642275BF3E56A8___c** StaticGet___9()
	{
		return (::Class_3_8C642275BF3E56A8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex)->GetStaticField(0x4C388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2066B693D3D0F431(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_41605D8FFAF51822* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_41605D8FFAF51822*))((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C_METHOD_1_2066B693D3D0F431_OFFSET))(this, a1, a2);
	}
};
