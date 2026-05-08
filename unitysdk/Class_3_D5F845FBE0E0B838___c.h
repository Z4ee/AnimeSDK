#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_59F0E78803D70076;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_D5F845FBE0E0B838___C_METHOD_1_0D679CBC199DE86A_OFFSET UNITYSDK_OFFSET(0x10A29620)
#define CLASS_3_D5F845FBE0E0B838___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A295D0)
#define CLASS_3_D5F845FBE0E0B838___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10A29610)

inline static constexpr unsigned int Class_3_D5F845FBE0E0B838___c_TypeDefinitionIndex = 58279;

class Class_3_D5F845FBE0E0B838___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_59F0E78803D70076*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_3_59F0E78803D70076*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D5F845FBE0E0B838___c_TypeDefinitionIndex)->GetStaticField(0x43A60);
	}
	static ::Class_3_D5F845FBE0E0B838___c** StaticGet___9()
	{
		return (::Class_3_D5F845FBE0E0B838___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D5F845FBE0E0B838___c_TypeDefinitionIndex)->GetStaticField(0x43A68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D5F845FBE0E0B838___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5F845FBE0E0B838___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D679CBC199DE86A(::Class_3_59F0E78803D70076* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_59F0E78803D70076*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_D5F845FBE0E0B838___C_METHOD_1_0D679CBC199DE86A_OFFSET))(this, a1, a2);
	}
};
