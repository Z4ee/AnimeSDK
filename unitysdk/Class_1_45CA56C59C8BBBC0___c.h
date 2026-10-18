#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_107;
class Class_1_1ABDF1855FCDB08F;
class Class_1_7B5BC5F7531D3B01;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_45CA56C59C8BBBC0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C51B1F0)
#define CLASS_1_45CA56C59C8BBBC0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51B230)
#define CLASS_1_45CA56C59C8BBBC0___C__DESTROYALLCHIPPIECES_B__41_0_OFFSET UNITYSDK_OFFSET(0x1C51B290)
#define CLASS_1_45CA56C59C8BBBC0___C__INITPROGRESS_B__35_0_OFFSET UNITYSDK_OFFSET(0x1C51B240)
#define CLASS_1_45CA56C59C8BBBC0___C__INITPROGRESS_B__35_1_OFFSET UNITYSDK_OFFSET(0x1C51B270)

inline static constexpr unsigned int Class_1_45CA56C59C8BBBC0___c_TypeDefinitionIndex = 41791;

class Class_1_45CA56C59C8BBBC0___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_1ABDF1855FCDB08F*, ::System::Boolean>** StaticGet___9__41_0()
	{
		return (::System::Func_2<::Class_1_1ABDF1855FCDB08F*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45CA56C59C8BBBC0___c_TypeDefinitionIndex)->GetStaticField(0x1FD00);
	}
	static ::System::Func_2<::Class_1_7B5BC5F7531D3B01*, ::System::Boolean>** StaticGet___9__35_0()
	{
		return (::System::Func_2<::Class_1_7B5BC5F7531D3B01*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45CA56C59C8BBBC0___c_TypeDefinitionIndex)->GetStaticField(0x1FD08);
	}
	static ::System::Func_2<::Class_1_7B5BC5F7531D3B01*, ::Class_0_16E4307DCC419505_107*>** StaticGet___9__35_1()
	{
		return (::System::Func_2<::Class_1_7B5BC5F7531D3B01*, ::Class_0_16E4307DCC419505_107*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45CA56C59C8BBBC0___c_TypeDefinitionIndex)->GetStaticField(0x1FD10);
	}
	static ::Class_1_45CA56C59C8BBBC0___c** StaticGet___9()
	{
		return (::Class_1_45CA56C59C8BBBC0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45CA56C59C8BBBC0___c_TypeDefinitionIndex)->GetStaticField(0x1FD18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _InitProgress_b__35_0(::Class_1_7B5BC5F7531D3B01* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7B5BC5F7531D3B01*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0___C__INITPROGRESS_B__35_0_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_107* _InitProgress_b__35_1(::Class_1_7B5BC5F7531D3B01* a1)
	{
		return ((::Class_0_16E4307DCC419505_107*(*)(::PVOID, ::Class_1_7B5BC5F7531D3B01*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0___C__INITPROGRESS_B__35_1_OFFSET))(this, a1);
	}

	::System::Boolean _DestroyAllChipPieces_b__41_0(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0___C__DESTROYALLCHIPPIECES_B__41_0_OFFSET))(this, a1);
	}
};
