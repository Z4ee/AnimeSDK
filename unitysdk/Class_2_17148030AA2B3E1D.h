#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_5EBE290801EA4DF2;
class Class_1_E105E8A7A7654142;
class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_17148030AA2B3E1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8633E0)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0xA863690)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA864510)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xA864420)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_A4FC9423DE081646_OFFSET UNITYSDK_OFFSET(0xA864220)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA8644C0)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xA864140)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA864500)
#define CLASS_2_17148030AA2B3E1D_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xA864040)
#define CLASS_2_17148030AA2B3E1D_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA8640C0)
#define CLASS_2_17148030AA2B3E1D_TICK_OFFSET UNITYSDK_OFFSET(0xA863A20)
#define CLASS_2_17148030AA2B3E1D__CCTOR_OFFSET UNITYSDK_OFFSET(0xA864580)
#define CLASS_2_17148030AA2B3E1D__CTOR_OFFSET UNITYSDK_OFFSET(0xA864520)
#define CLASS_2_17148030AA2B3E1D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA8645A0)

inline static constexpr unsigned int Class_2_17148030AA2B3E1D_TypeDefinitionIndex = 48711;

class Class_2_17148030AA2B3E1D : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17148030AA2B3E1D_TypeDefinitionIndex)->GetStaticField(0x13C20);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17148030AA2B3E1D_TypeDefinitionIndex)->GetStaticField(0x13C24);
	}
	::Class_2_9D4DD2F4235F8658* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5EBE290801EA4DF2*>* Field_2_3; // 0x20
	::Class_1_E105E8A7A7654142* Field_2_4; // 0x28
	::RPG::GameCore::TransformComponent* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_E105E8A7A7654142*>* Field_2_6; // 0x38
	::System::Boolean Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x41
	::System::Boolean Field_2_9; // 0x42

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_5EBE290801EA4DF2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EBE290801EA4DF2*))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A4FC9423DE081646(::Class_1_5EBE290801EA4DF2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5EBE290801EA4DF2*))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_A4FC9423DE081646_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_E105E8A7A7654142* Method_2_24748FC20F375725()
	{
		return ((::Class_1_E105E8A7A7654142*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
