#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F3F4476896DB547.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"
#include "unitysdk/System/Object.h"

class Class_1_9610394F487FC231;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_8019128448F0E9D5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF9E4530)
#define CLASS_1_8019128448F0E9D5_METHOD_1_0E2FF1BE1BCE0438_OFFSET UNITYSDK_OFFSET(0xF9E41E0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_109E01AC0BAE1BA6_OFFSET UNITYSDK_OFFSET(0xF9E43D0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xF9E4D90)
#define CLASS_1_8019128448F0E9D5_METHOD_1_189C865264480324_OFFSET UNITYSDK_OFFSET(0xF9E6E10)
#define CLASS_1_8019128448F0E9D5_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xF9E4580)
#define CLASS_1_8019128448F0E9D5_METHOD_1_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0xF9E6B60)
#define CLASS_1_8019128448F0E9D5_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xF9E55C0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_2F8E1DE3FD9E4C4C_OFFSET UNITYSDK_OFFSET(0xF9E5400)
#define CLASS_1_8019128448F0E9D5_METHOD_1_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xF9E4600)
#define CLASS_1_8019128448F0E9D5_METHOD_1_58DA4787E3C0110A_OFFSET UNITYSDK_OFFSET(0xF9E5460)
#define CLASS_1_8019128448F0E9D5_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xF9E5650)
#define CLASS_1_8019128448F0E9D5_METHOD_1_671B1631A0BA5CC8_OFFSET UNITYSDK_OFFSET(0xF9E4DF0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xF9E4BF0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_8EF612C022DFE2F3_OFFSET UNITYSDK_OFFSET(0xF9E4490)
#define CLASS_1_8019128448F0E9D5_METHOD_1_9D2248899D8F6628_OFFSET UNITYSDK_OFFSET(0xF9E6E70)
#define CLASS_1_8019128448F0E9D5_METHOD_1_B991AA5072E9A99A_OFFSET UNITYSDK_OFFSET(0xF9E6BD0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_BC3F978D255D4574_OFFSET UNITYSDK_OFFSET(0xF9E4310)
#define CLASS_1_8019128448F0E9D5_METHOD_1_C051368DFA557B97_OFFSET UNITYSDK_OFFSET(0xF9E4360)
#define CLASS_1_8019128448F0E9D5_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xF9E7090)
#define CLASS_1_8019128448F0E9D5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xF9E4570)
#define CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF9E41A0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xF9E44F0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xF9E4DB0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF9E4160)
#define CLASS_1_8019128448F0E9D5_METHOD_1_E14DB86E62467B4B_OFFSET UNITYSDK_OFFSET(0xF9E42A0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0xF9E7000)
#define CLASS_1_8019128448F0E9D5_METHOD_1_EFF7E77068B02617_OFFSET UNITYSDK_OFFSET(0xF9E4240)
#define CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xF9E6E00)
#define CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xF9E7080)
#define CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF9E5640)
#define CLASS_1_8019128448F0E9D5_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xF9E6FC0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_FC3E433B11C3840B_OFFSET UNITYSDK_OFFSET(0xF9E4430)
#define CLASS_1_8019128448F0E9D5__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E4100)

inline static constexpr unsigned int Class_1_8019128448F0E9D5_TypeDefinitionIndex = 64635;

class Class_1_8019128448F0E9D5 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8019128448F0E9D5_TypeDefinitionIndex)->GetStaticField(0x101D0);
	}
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_10; // 0x10
	::Il2CppArray<::UnityEngine::Material*>* Field_1_7; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_9; // 0x20
	::Class_1_9610394F487FC231* Field_1_3; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Boolean Field_1_8; // 0x32
	::System::Int32 Field_1_1; // 0x34
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean Field_1_4; // 0x39
	::MoleMole::Config::MaterialPropertyType Field_1_11; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_0E2FF1BE1BCE0438(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_0E2FF1BE1BCE0438_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EFF7E77068B02617(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_EFF7E77068B02617_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E14DB86E62467B4B(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_E14DB86E62467B4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC3F978D255D4574(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_BC3F978D255D4574_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C051368DFA557B97(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticColorMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_C051368DFA557B97_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_109E01AC0BAE1BA6(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_109E01AC0BAE1BA6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FC3E433B11C3840B(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_FC3E433B11C3840B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8EF612C022DFE2F3(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_8EF612C022DFE2F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_671B1631A0BA5CC8(::Class_1_9610394F487FC231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_671B1631A0BA5CC8_OFFSET))(this, a1);
	}

	::MoleMole::MonoRenderHandler* Method_1_2F8E1DE3FD9E4C4C()
	{
		return ((::MoleMole::MonoRenderHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_2F8E1DE3FD9E4C4C_OFFSET))(this);
	}

	::System::Int32 Method_1_58DA4787E3C0110A(::System::Collections::Generic::HashSet_1<::Class_1_8019128448F0E9D5*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_8019128448F0E9D5*>*))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_58DA4787E3C0110A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_189C865264480324()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_189C865264480324_OFFSET))(this);
	}

	::System::Int32 Method_1_9D2248899D8F6628(::MoleMole::Config::MaterialPropertyType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_9D2248899D8F6628_OFFSET))(this, a1);
	}

	::Class_1_9610394F487FC231* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_9610394F487FC231*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_1B9CC121BDC8766D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B991AA5072E9A99A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_B991AA5072E9A99A_OFFSET))(this);
	}

	::System::Void Method_1_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_572E53F76E315839_OFFSET))(this);
	}
};
