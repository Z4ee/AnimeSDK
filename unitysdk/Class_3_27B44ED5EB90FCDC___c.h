#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_3_27B44ED5EB90FCDC___C_METHOD_1_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0x156E50F0)
#define CLASS_3_27B44ED5EB90FCDC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156E50A0)
#define CLASS_3_27B44ED5EB90FCDC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156E50E0)

inline static constexpr unsigned int Class_3_27B44ED5EB90FCDC___c_TypeDefinitionIndex = 52461;

class Class_3_27B44ED5EB90FCDC___c : public ::System::Object
{
public:
	static ::Class_3_27B44ED5EB90FCDC___c** StaticGet___9()
	{
		return (::Class_3_27B44ED5EB90FCDC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27B44ED5EB90FCDC___c_TypeDefinitionIndex)->GetStaticField(0x41E40);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27B44ED5EB90FCDC___c_TypeDefinitionIndex)->GetStaticField(0x41E48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_50CCDD1FE0CC143C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC___C_METHOD_1_50CCDD1FE0CC143C_OFFSET))(this);
	}
};
