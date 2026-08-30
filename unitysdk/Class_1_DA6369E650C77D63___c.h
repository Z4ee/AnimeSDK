#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_152140BAFD2DB102;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_DA6369E650C77D63___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB93EE00)
#define CLASS_1_DA6369E650C77D63___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB93EE30)
#define CLASS_1_DA6369E650C77D63___C___GETFIRSTULTRASKILLITEM_B__25_0_OFFSET UNITYSDK_OFFSET(0xB93EE40)

inline static constexpr unsigned int Class_1_DA6369E650C77D63___c_TypeDefinitionIndex = 71271;

class Class_1_DA6369E650C77D63___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_152140BAFD2DB102*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::Class_1_152140BAFD2DB102*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA6369E650C77D63___c_TypeDefinitionIndex)->GetStaticField(0x286B0);
	}
	static ::Class_1_DA6369E650C77D63___c** StaticGet___9()
	{
		return (::Class_1_DA6369E650C77D63___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA6369E650C77D63___c_TypeDefinitionIndex)->GetStaticField(0x286B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA6369E650C77D63___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA6369E650C77D63___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetFirstUltraSkillItem_b__25_0(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_DA6369E650C77D63___C___GETFIRSTULTRASKILLITEM_B__25_0_OFFSET))(this, a1);
	}
};
