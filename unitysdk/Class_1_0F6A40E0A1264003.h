#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
class Class_1_0F6A40E0A1264003_Class_1_602C5E9B089F019F;
class Class_1_0F6A40E0A1264003_Class_1_F9C28C868945EBAC;
class Class_1_54EA20401A112EC2;
class Class_1_87CC187FAC1625A9;

#define CLASS_1_0F6A40E0A1264003_METHOD_1_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x8A25F60)
#define CLASS_1_0F6A40E0A1264003_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x8A25AA0)
#define CLASS_1_0F6A40E0A1264003_METHOD_1_682FA2F0C959D8A1_OFFSET UNITYSDK_OFFSET(0x8A26160)
#define CLASS_1_0F6A40E0A1264003_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x8A26070)
#define CLASS_1_0F6A40E0A1264003_METHOD_1_F260119752D94D1A_OFFSET UNITYSDK_OFFSET(0x8A25B30)
#define CLASS_1_0F6A40E0A1264003_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x8A25E40)
#define CLASS_1_0F6A40E0A1264003__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A26210)
#define CLASS_1_0F6A40E0A1264003__CTOR_OFFSET UNITYSDK_OFFSET(0x8A25B20)

inline static constexpr unsigned int Class_1_0F6A40E0A1264003_TypeDefinitionIndex = 58589;

class Class_1_0F6A40E0A1264003 : public ::System::Object
{
public:
	static ::Class_1_0F6A40E0A1264003_Class_1_602C5E9B089F019F** StaticGet_Field_1_3()
	{
		return (::Class_1_0F6A40E0A1264003_Class_1_602C5E9B089F019F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6A40E0A1264003_TypeDefinitionIndex)->GetStaticField(0x45870);
	}
	static ::Class_1_0F6A40E0A1264003_Class_1_F9C28C868945EBAC** StaticGet_Field_1_2()
	{
		return (::Class_1_0F6A40E0A1264003_Class_1_F9C28C868945EBAC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6A40E0A1264003_TypeDefinitionIndex)->GetStaticField(0x45878);
	}
	static ::Class_1_54EA20401A112EC2** StaticGet_Field_1_5()
	{
		return (::Class_1_54EA20401A112EC2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6A40E0A1264003_TypeDefinitionIndex)->GetStaticField(0x45880);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_836*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_836*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6A40E0A1264003_TypeDefinitionIndex)->GetStaticField(0x45888);
	}
	::Class_0_16E4307DCC419505_836* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_836* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6A40E0A1264003__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6A40E0A1264003__CCTOR_OFFSET))();
	}

	static ::Class_1_0F6A40E0A1264003* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_0F6A40E0A1264003*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6A40E0A1264003_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Void Method_1_F260119752D94D1A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0F6A40E0A1264003_METHOD_1_F260119752D94D1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6A40E0A1264003_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_05679872695EE5DE(::Class_1_87CC187FAC1625A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87CC187FAC1625A9*))((::PBYTE)hIl2Cpp + CLASS_1_0F6A40E0A1264003_METHOD_1_05679872695EE5DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6A40E0A1264003_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Single Method_1_682FA2F0C959D8A1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6A40E0A1264003_METHOD_1_682FA2F0C959D8A1_OFFSET))(this);
	}
};
