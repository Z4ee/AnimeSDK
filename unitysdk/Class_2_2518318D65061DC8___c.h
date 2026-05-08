#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_2518318D65061DC8___C_METHOD_1_AB4F6345C3E840D3_OFFSET UNITYSDK_OFFSET(0xDB20B30)
#define CLASS_2_2518318D65061DC8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB20AE0)
#define CLASS_2_2518318D65061DC8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDB20B20)

inline static constexpr unsigned int Class_2_2518318D65061DC8___c_TypeDefinitionIndex = 40432;

class Class_2_2518318D65061DC8___c : public ::System::Object
{
public:
	static ::Class_2_2518318D65061DC8___c** StaticGet___9()
	{
		return (::Class_2_2518318D65061DC8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2518318D65061DC8___c_TypeDefinitionIndex)->GetStaticField(0x44380);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__9_7()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2518318D65061DC8___c_TypeDefinitionIndex)->GetStaticField(0x44388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2518318D65061DC8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2518318D65061DC8___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AB4F6345C3E840D3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2518318D65061DC8___C_METHOD_1_AB4F6345C3E840D3_OFFSET))(this);
	}
};
