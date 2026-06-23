#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A8205F622DE339C5___C_METHOD_1_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x133A8DF0)
#define CLASS_2_A8205F622DE339C5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x133A8DA0)
#define CLASS_2_A8205F622DE339C5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x133A8DE0)

inline static constexpr unsigned int Class_2_A8205F622DE339C5___c_TypeDefinitionIndex = 51768;

class Class_2_A8205F622DE339C5___c : public ::System::Object
{
public:
	static ::Class_2_A8205F622DE339C5___c** StaticGet___9()
	{
		return (::Class_2_A8205F622DE339C5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8205F622DE339C5___c_TypeDefinitionIndex)->GetStaticField(0x40350);
	}
	static ::System::Func_2<::Struct_2_2F8FC043285F98CD_2, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Struct_2_2F8FC043285F98CD_2, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8205F622DE339C5___c_TypeDefinitionIndex)->GetStaticField(0x40358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A8205F622DE339C5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8205F622DE339C5___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3DFFEA8885EDBFF0(::Struct_2_2F8FC043285F98CD_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F8FC043285F98CD_2))((::PBYTE)hIl2Cpp + CLASS_2_A8205F622DE339C5___C_METHOD_1_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}
};
