#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_82C28B72EAFB6A77;
class Class_3_846182BC37DE078E_1;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_CA81D245E0A8983D___C_METHOD_1_FA28F5D6D87D9470_OFFSET UNITYSDK_OFFSET(0x154DBA50)
#define CLASS_3_CA81D245E0A8983D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154DBA00)
#define CLASS_3_CA81D245E0A8983D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154DBA40)

inline static constexpr unsigned int Class_3_CA81D245E0A8983D___c_TypeDefinitionIndex = 68131;

class Class_3_CA81D245E0A8983D___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_82C28B72EAFB6A77*, ::Class_3_846182BC37DE078E_1*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_82C28B72EAFB6A77*, ::Class_3_846182BC37DE078E_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CA81D245E0A8983D___c_TypeDefinitionIndex)->GetStaticField(0x3DBA0);
	}
	static ::Class_3_CA81D245E0A8983D___c** StaticGet___9()
	{
		return (::Class_3_CA81D245E0A8983D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CA81D245E0A8983D___c_TypeDefinitionIndex)->GetStaticField(0x3DBA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA28F5D6D87D9470(::Class_3_82C28B72EAFB6A77* a1, ::Class_3_846182BC37DE078E_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_82C28B72EAFB6A77*, ::Class_3_846182BC37DE078E_1*))((::PBYTE)hIl2Cpp + CLASS_3_CA81D245E0A8983D___C_METHOD_1_FA28F5D6D87D9470_OFFSET))(this, a1, a2);
	}
};
