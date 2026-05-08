#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_7ABEC7C42BCB7058___C_METHOD_1_AA8E801C06607E15_OFFSET UNITYSDK_OFFSET(0x15060A60)
#define CLASS_2_7ABEC7C42BCB7058___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15060A10)
#define CLASS_2_7ABEC7C42BCB7058___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15060A50)

inline static constexpr unsigned int Class_2_7ABEC7C42BCB7058___c_TypeDefinitionIndex = 82513;

class Class_2_7ABEC7C42BCB7058___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7ABEC7C42BCB7058___c_TypeDefinitionIndex)->GetStaticField(0x3F650);
	}
	static ::Class_2_7ABEC7C42BCB7058___c** StaticGet___9()
	{
		return (::Class_2_7ABEC7C42BCB7058___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7ABEC7C42BCB7058___c_TypeDefinitionIndex)->GetStaticField(0x3F658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7ABEC7C42BCB7058___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7ABEC7C42BCB7058___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AA8E801C06607E15()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7ABEC7C42BCB7058___C_METHOD_1_AA8E801C06607E15_OFFSET))(this);
	}
};
