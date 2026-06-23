#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0CD9C8B4E929AC08;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_1B23E08E4A53BC40___C_METHOD_1_6186AF329D176E9F_OFFSET UNITYSDK_OFFSET(0x16810E90)
#define CLASS_3_1B23E08E4A53BC40___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16810E40)
#define CLASS_3_1B23E08E4A53BC40___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16810E80)

inline static constexpr unsigned int Class_3_1B23E08E4A53BC40___c_TypeDefinitionIndex = 39605;

class Class_3_1B23E08E4A53BC40___c : public ::System::Object
{
public:
	static ::Class_3_1B23E08E4A53BC40___c** StaticGet___9()
	{
		return (::Class_3_1B23E08E4A53BC40___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1B23E08E4A53BC40___c_TypeDefinitionIndex)->GetStaticField(0x41D30);
	}
	static ::System::Action_1<::Class_3_0CD9C8B4E929AC08*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_0CD9C8B4E929AC08*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1B23E08E4A53BC40___c_TypeDefinitionIndex)->GetStaticField(0x41D38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1B23E08E4A53BC40___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B23E08E4A53BC40___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6186AF329D176E9F(::Class_3_0CD9C8B4E929AC08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0CD9C8B4E929AC08*))((::PBYTE)hIl2Cpp + CLASS_3_1B23E08E4A53BC40___C_METHOD_1_6186AF329D176E9F_OFFSET))(this, a1);
	}
};
