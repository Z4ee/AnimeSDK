#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_5D361FB2D8795035___C_METHOD_1_AA8E801C06607E15_OFFSET UNITYSDK_OFFSET(0x114BB7A0)
#define CLASS_2_5D361FB2D8795035___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114BB750)
#define CLASS_2_5D361FB2D8795035___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114BB790)

inline static constexpr unsigned int Class_2_5D361FB2D8795035___c_TypeDefinitionIndex = 63652;

class Class_2_5D361FB2D8795035___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D361FB2D8795035___c_TypeDefinitionIndex)->GetStaticField(0x3B680);
	}
	static ::Class_2_5D361FB2D8795035___c** StaticGet___9()
	{
		return (::Class_2_5D361FB2D8795035___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D361FB2D8795035___c_TypeDefinitionIndex)->GetStaticField(0x3B688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5D361FB2D8795035___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D361FB2D8795035___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AA8E801C06607E15()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D361FB2D8795035___C_METHOD_1_AA8E801C06607E15_OFFSET))(this);
	}
};
