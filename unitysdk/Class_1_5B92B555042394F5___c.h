#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5B92B555042394F5___C_METHOD_1_428DEC61BE1E3C16_OFFSET UNITYSDK_OFFSET(0x140FDF70)
#define CLASS_1_5B92B555042394F5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140FDF20)
#define CLASS_1_5B92B555042394F5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140FDF60)

inline static constexpr unsigned int Class_1_5B92B555042394F5___c_TypeDefinitionIndex = 77889;

class Class_1_5B92B555042394F5___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5___c_TypeDefinitionIndex)->GetStaticField(0x428C0);
	}
	static ::Class_1_5B92B555042394F5___c** StaticGet___9()
	{
		return (::Class_1_5B92B555042394F5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5___c_TypeDefinitionIndex)->GetStaticField(0x428C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_428DEC61BE1E3C16(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5___C_METHOD_1_428DEC61BE1E3C16_OFFSET))(this, a1);
	}
};
