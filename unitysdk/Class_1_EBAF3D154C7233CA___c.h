#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3810BE455E7DF21;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_EBAF3D154C7233CA___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0xE7F3F00)
#define CLASS_1_EBAF3D154C7233CA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE7F3EB0)
#define CLASS_1_EBAF3D154C7233CA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE7F3EF0)

inline static constexpr unsigned int Class_1_EBAF3D154C7233CA___c_TypeDefinitionIndex = 53912;

class Class_1_EBAF3D154C7233CA___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_B3810BE455E7DF21*>** StaticGet___9__18_0()
	{
		return (::System::Predicate_1<::Class_1_B3810BE455E7DF21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBAF3D154C7233CA___c_TypeDefinitionIndex)->GetStaticField(0x36960);
	}
	static ::Class_1_EBAF3D154C7233CA___c** StaticGet___9()
	{
		return (::Class_1_EBAF3D154C7233CA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBAF3D154C7233CA___c_TypeDefinitionIndex)->GetStaticField(0x36968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBAF3D154C7233CA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBAF3D154C7233CA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_B3810BE455E7DF21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B3810BE455E7DF21*))((::PBYTE)hIl2Cpp + CLASS_1_EBAF3D154C7233CA___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
