#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_695BA9A73779D495;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D3D3983B9CFA0F3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DAF430)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_0670E1DC645EAA78_OFFSET UNITYSDK_OFFSET(0x18DB1680)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_0F43B59E3B7133BF_OFFSET UNITYSDK_OFFSET(0x18DB0A20)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x18DB1230)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18DB09E0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_7D4AF0CE269F00BD_OFFSET UNITYSDK_OFFSET(0x18DB00E0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_1_OFFSET UNITYSDK_OFFSET(0x18DAF990)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_2_OFFSET UNITYSDK_OFFSET(0x18DAFB50)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_3_OFFSET UNITYSDK_OFFSET(0x18DAFD00)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x18DAF7D0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0x18DB02D0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_A05539126448CC71_OFFSET UNITYSDK_OFFSET(0x18DAFEB0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_AB6511803BC7D9DB_OFFSET UNITYSDK_OFFSET(0x18DB13D0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x18DB0CE0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_C03EE60F4D78A5E2_OFFSET UNITYSDK_OFFSET(0x18DB12C0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_C06D862CBF595DDB_OFFSET UNITYSDK_OFFSET(0x18DB04B0)
#define CLASS_1_6D3D3983B9CFA0F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DB1950)
#define CLASS_1_6D3D3983B9CFA0F3__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAED10)

inline static constexpr unsigned int Class_1_6D3D3983B9CFA0F3_TypeDefinitionIndex = 61321;

class Class_1_6D3D3983B9CFA0F3 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3D3983B9CFA0F3_TypeDefinitionIndex)->GetStaticField(0x12680);
	}
	::System::Collections::Generic::List_1<::Class_1_695BA9A73779D495*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3EB6D13BCFBCDBBC*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x38
	::System::Int32 Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Boolean Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x49
	::System::Boolean Field_1_11; // 0x4A
	::System::UInt32 Field_1_12; // 0x4C
	::System::Single Field_1_13; // 0x50
	::System::Single Field_1_14; // 0x54
	::System::Int32 Field_1_15; // 0x58
	::System::Int32 Field_1_16; // 0x5C

	::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Single a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_OFFSET))(this);
	}

	::System::Void Method_1_94C81405F83348DF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_1_OFFSET))(this);
	}

	::System::Void Method_1_94C81405F83348DF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_2_OFFSET))(this);
	}

	::System::Void Method_1_94C81405F83348DF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_3_OFFSET))(this);
	}

	::System::Void Method_1_A05539126448CC71(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_A05539126448CC71_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D4AF0CE269F00BD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_7D4AF0CE269F00BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C844AB9164FA35A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_9C844AB9164FA35A_OFFSET))(this);
	}

	::System::Void Method_1_C06D862CBF595DDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_C06D862CBF595DDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F43B59E3B7133BF(::Class_1_3EB6D13BCFBCDBBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EB6D13BCFBCDBBC*))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_0F43B59E3B7133BF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C03EE60F4D78A5E2(::System::Single a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_C03EE60F4D78A5E2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AB6511803BC7D9DB(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_AB6511803BC7D9DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0670E1DC645EAA78(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_0670E1DC645EAA78_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
