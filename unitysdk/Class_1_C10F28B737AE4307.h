#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_943;
class Class_1_54EA20401A112EC2;
class Class_1_87CC187FAC1625A9;
class Class_1_C10F28B737AE4307_Class_1_602C5E9B089F019F;
class Class_1_C10F28B737AE4307_Class_1_F9C28C868945EBAC;

#define CLASS_1_C10F28B737AE4307_METHOD_1_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x12483C60)
#define CLASS_1_C10F28B737AE4307_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x124837A0)
#define CLASS_1_C10F28B737AE4307_METHOD_1_682FA2F0C959D8A1_OFFSET UNITYSDK_OFFSET(0x12483E60)
#define CLASS_1_C10F28B737AE4307_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x12483D70)
#define CLASS_1_C10F28B737AE4307_METHOD_1_F260119752D94D1A_OFFSET UNITYSDK_OFFSET(0x12483830)
#define CLASS_1_C10F28B737AE4307_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x12483B40)
#define CLASS_1_C10F28B737AE4307__CCTOR_OFFSET UNITYSDK_OFFSET(0x12483F10)
#define CLASS_1_C10F28B737AE4307__CTOR_OFFSET UNITYSDK_OFFSET(0x12483820)

inline static constexpr unsigned int Class_1_C10F28B737AE4307_TypeDefinitionIndex = 65906;

class Class_1_C10F28B737AE4307 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_943*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_943*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C10F28B737AE4307_TypeDefinitionIndex)->GetStaticField(0xC870);
	}
	static ::Class_1_C10F28B737AE4307_Class_1_F9C28C868945EBAC** StaticGet_Field_1_2()
	{
		return (::Class_1_C10F28B737AE4307_Class_1_F9C28C868945EBAC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C10F28B737AE4307_TypeDefinitionIndex)->GetStaticField(0xC878);
	}
	static ::Class_1_54EA20401A112EC2** StaticGet_Field_1_5()
	{
		return (::Class_1_54EA20401A112EC2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C10F28B737AE4307_TypeDefinitionIndex)->GetStaticField(0xC880);
	}
	static ::Class_1_C10F28B737AE4307_Class_1_602C5E9B089F019F** StaticGet_Field_1_3()
	{
		return (::Class_1_C10F28B737AE4307_Class_1_602C5E9B089F019F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C10F28B737AE4307_TypeDefinitionIndex)->GetStaticField(0xC888);
	}
	::Class_0_16E4307DCC419505_943* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_943* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C10F28B737AE4307__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C10F28B737AE4307__CCTOR_OFFSET))();
	}

	static ::Class_1_C10F28B737AE4307* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_C10F28B737AE4307*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C10F28B737AE4307_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Void Method_1_F260119752D94D1A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C10F28B737AE4307_METHOD_1_F260119752D94D1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C10F28B737AE4307_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_05679872695EE5DE(::Class_1_87CC187FAC1625A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87CC187FAC1625A9*))((::PBYTE)hIl2Cpp + CLASS_1_C10F28B737AE4307_METHOD_1_05679872695EE5DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C10F28B737AE4307_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Single Method_1_682FA2F0C959D8A1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C10F28B737AE4307_METHOD_1_682FA2F0C959D8A1_OFFSET))(this);
	}
};
