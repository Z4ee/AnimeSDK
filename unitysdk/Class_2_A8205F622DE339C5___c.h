#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A8205F622DE339C5___C_METHOD_1_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0xF612190)
#define CLASS_2_A8205F622DE339C5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF612140)
#define CLASS_2_A8205F622DE339C5___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF612180)

inline static constexpr unsigned int Class_2_A8205F622DE339C5___c_TypeDefinitionIndex = 44713;

class Class_2_A8205F622DE339C5___c : public ::System::Object
{
public:
	static ::System::Func_2<::Struct_2_2F8FC043285F98CD_1, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Struct_2_2F8FC043285F98CD_1, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8205F622DE339C5___c_TypeDefinitionIndex)->GetStaticField(0x31490);
	}
	static ::Class_2_A8205F622DE339C5___c** StaticGet___9()
	{
		return (::Class_2_A8205F622DE339C5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8205F622DE339C5___c_TypeDefinitionIndex)->GetStaticField(0x31498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A8205F622DE339C5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8205F622DE339C5___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3DFFEA8885EDBFF0(::Struct_2_2F8FC043285F98CD_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F8FC043285F98CD_1))((::PBYTE)hIl2Cpp + CLASS_2_A8205F622DE339C5___C_METHOD_1_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}
};
