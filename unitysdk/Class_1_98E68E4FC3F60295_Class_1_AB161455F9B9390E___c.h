#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_123;
class Class_0_16E4307DCC419505_150;
class Class_1_52E21E813AA435A9;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_98E68E4FC3F60295_CLASS_1_AB161455F9B9390E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9B0330)
#define CLASS_1_98E68E4FC3F60295_CLASS_1_AB161455F9B9390E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B0370)
#define CLASS_1_98E68E4FC3F60295_CLASS_1_AB161455F9B9390E___C___CREATEPARTNERS_B__12_0_OFFSET UNITYSDK_OFFSET(0xB9B0390)
#define CLASS_1_98E68E4FC3F60295_CLASS_1_AB161455F9B9390E___C___CREATEREQUIREMENTINFOS_B__11_1_OFFSET UNITYSDK_OFFSET(0xB9B0380)

inline static constexpr unsigned int Class_1_98E68E4FC3F60295_Class_1_AB161455F9B9390E___c_TypeDefinitionIndex = 79640;

class Class_1_98E68E4FC3F60295_Class_1_AB161455F9B9390E___c : public ::System::Object
{
public:
	static ::Class_1_98E68E4FC3F60295_Class_1_AB161455F9B9390E___c** StaticGet___9()
	{
		return (::Class_1_98E68E4FC3F60295_Class_1_AB161455F9B9390E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98E68E4FC3F60295_Class_1_AB161455F9B9390E___c_TypeDefinitionIndex)->GetStaticField(0xAD40);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_123*, ::System::Boolean>** StaticGet___9__11_1()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_123*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98E68E4FC3F60295_Class_1_AB161455F9B9390E___c_TypeDefinitionIndex)->GetStaticField(0xAD48);
	}
	static ::System::Func_2<::Class_1_52E21E813AA435A9*, ::Class_0_16E4307DCC419505_150*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::Class_1_52E21E813AA435A9*, ::Class_0_16E4307DCC419505_150*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98E68E4FC3F60295_Class_1_AB161455F9B9390E___c_TypeDefinitionIndex)->GetStaticField(0xAD50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_CLASS_1_AB161455F9B9390E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_CLASS_1_AB161455F9B9390E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateRequirementInfos_b__11_1(::Class_0_16E4307DCC419505_123* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_123*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_CLASS_1_AB161455F9B9390E___C___CREATEREQUIREMENTINFOS_B__11_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_150* __CreatePartners_b__12_0(::Class_1_52E21E813AA435A9* a1)
	{
		return ((::Class_0_16E4307DCC419505_150*(*)(::PVOID, ::Class_1_52E21E813AA435A9*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_CLASS_1_AB161455F9B9390E___C___CREATEPARTNERS_B__12_0_OFFSET))(this, a1);
	}
};
