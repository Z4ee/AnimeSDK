#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5B92B555042394F5___C_METHOD_1_7A5C7C2BA5B5F86D_OFFSET UNITYSDK_OFFSET(0x1A569400)
#define CLASS_1_5B92B555042394F5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5693B0)
#define CLASS_1_5B92B555042394F5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5693F0)

inline static constexpr unsigned int Class_1_5B92B555042394F5___c_TypeDefinitionIndex = 54000;

class Class_1_5B92B555042394F5___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5___c_TypeDefinitionIndex)->GetStaticField(0x4CF30);
	}
	static ::Class_1_5B92B555042394F5___c** StaticGet___9()
	{
		return (::Class_1_5B92B555042394F5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5___c_TypeDefinitionIndex)->GetStaticField(0x4CF38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7A5C7C2BA5B5F86D(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5___C_METHOD_1_7A5C7C2BA5B5F86D_OFFSET))(this, a1);
	}
};
