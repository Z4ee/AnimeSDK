#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_340C6DF7E45D1BAB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBEC0370)
#define CLASS_1_340C6DF7E45D1BAB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC03A0)
#define CLASS_1_340C6DF7E45D1BAB___C__INITIAL_B__63_0_OFFSET UNITYSDK_OFFSET(0xBEC03B0)

inline static constexpr unsigned int Class_1_340C6DF7E45D1BAB___c_TypeDefinitionIndex = 74000;

class Class_1_340C6DF7E45D1BAB___c : public ::System::Object
{
public:
	static ::Class_1_340C6DF7E45D1BAB___c** StaticGet___9()
	{
		return (::Class_1_340C6DF7E45D1BAB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_340C6DF7E45D1BAB___c_TypeDefinitionIndex)->GetStaticField(0x5C3B0);
	}
	static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__63_0()
	{
		return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_340C6DF7E45D1BAB___c_TypeDefinitionIndex)->GetStaticField(0x5C3B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _initial_b__63_0(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB___C__INITIAL_B__63_0_OFFSET))(this, a1);
	}
};
