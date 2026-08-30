#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2F344C4E39EE9840___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9FAE40)
#define CLASS_1_2F344C4E39EE9840___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FAE80)
#define CLASS_1_2F344C4E39EE9840___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB9FAE90)

inline static constexpr unsigned int Class_1_2F344C4E39EE9840___c_TypeDefinitionIndex = 73356;

class Class_1_2F344C4E39EE9840___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Boolean, ::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F344C4E39EE9840___c_TypeDefinitionIndex)->GetStaticField(0x3F010);
	}
	static ::Class_1_2F344C4E39EE9840___c** StaticGet___9()
	{
		return (::Class_1_2F344C4E39EE9840___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F344C4E39EE9840___c_TypeDefinitionIndex)->GetStaticField(0x3F018);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840___C__CTOR_OFFSET))(this);
	}

	::System::String* __ctor_b__0_0(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840___C___CTOR_B__0_0_OFFSET))(this, a1);
	}
};
