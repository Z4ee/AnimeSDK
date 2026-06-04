#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_634284739E90CAFA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_81619BFC54116B08___C__APPLY_B__1_0_OFFSET UNITYSDK_OFFSET(0xE462C50)
#define CLASS_1_81619BFC54116B08___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE462C00)
#define CLASS_1_81619BFC54116B08___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE462C40)

inline static constexpr unsigned int Class_1_81619BFC54116B08___c_TypeDefinitionIndex = 72369;

class Class_1_81619BFC54116B08___c : public ::System::Object
{
public:
	static ::Class_1_81619BFC54116B08___c** StaticGet___9()
	{
		return (::Class_1_81619BFC54116B08___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81619BFC54116B08___c_TypeDefinitionIndex)->GetStaticField(0x27990);
	}
	static ::System::Func_2<::Class_1_634284739E90CAFA*, ::System::Single>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_634284739E90CAFA*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81619BFC54116B08___c_TypeDefinitionIndex)->GetStaticField(0x27998);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81619BFC54116B08___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81619BFC54116B08___C__CTOR_OFFSET))(this);
	}

	::System::Single _Apply_b__1_0(::Class_1_634284739E90CAFA* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_81619BFC54116B08___C__APPLY_B__1_0_OFFSET))(this, a1);
	}
};
