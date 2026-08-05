#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_6D212096371432EC___C_METHOD_1_080D5667375425D8_OFFSET UNITYSDK_OFFSET(0x142F6F90)
#define CLASS_2_6D212096371432EC___C_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x142F7110)
#define CLASS_2_6D212096371432EC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142F6F40)
#define CLASS_2_6D212096371432EC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142F6F80)

inline static constexpr unsigned int Class_2_6D212096371432EC___c_TypeDefinitionIndex = 73464;

class Class_2_6D212096371432EC___c : public ::System::Object
{
public:
	static ::Class_2_6D212096371432EC___c** StaticGet___9()
	{
		return (::Class_2_6D212096371432EC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D212096371432EC___c_TypeDefinitionIndex)->GetStaticField(0x43460);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__29_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D212096371432EC___c_TypeDefinitionIndex)->GetStaticField(0x43468);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__30_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D212096371432EC___c_TypeDefinitionIndex)->GetStaticField(0x43470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_080D5667375425D8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC___C_METHOD_1_080D5667375425D8_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC___C_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
