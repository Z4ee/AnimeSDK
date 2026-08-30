#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_695BA9A73779D495;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D3D3983B9CFA0F3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A483720)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_0670E1DC645EAA78_OFFSET UNITYSDK_OFFSET(0x1A485960)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_0F43B59E3B7133BF_OFFSET UNITYSDK_OFFSET(0x1A484D00)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x1A485510)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A484CC0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_7D4AF0CE269F00BD_OFFSET UNITYSDK_OFFSET(0x1A4843C0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_1_OFFSET UNITYSDK_OFFSET(0x1A483C70)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_2_OFFSET UNITYSDK_OFFSET(0x1A483E30)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_3_OFFSET UNITYSDK_OFFSET(0x1A483FE0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x1A483AB0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0x1A4845B0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_A05539126448CC71_OFFSET UNITYSDK_OFFSET(0x1A484190)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_AB6511803BC7D9DB_OFFSET UNITYSDK_OFFSET(0x1A4856B0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1A484FC0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_C03EE60F4D78A5E2_OFFSET UNITYSDK_OFFSET(0x1A4855A0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_C06D862CBF595DDB_OFFSET UNITYSDK_OFFSET(0x1A484790)
#define CLASS_1_6D3D3983B9CFA0F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A485C30)
#define CLASS_1_6D3D3983B9CFA0F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A483000)

inline static constexpr unsigned int Class_1_6D3D3983B9CFA0F3_TypeDefinitionIndex = 64302;

class Class_1_6D3D3983B9CFA0F3 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_KNMJMOMOPFG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3D3983B9CFA0F3_TypeDefinitionIndex)->GetStaticField(0xDA40);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* GFGBFKPKDDL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3EB6D13BCFBCDBBC*>* BJGMIIELLKH; // 0x18
	::System::Collections::Generic::List_1<::Class_1_695BA9A73779D495*>* GADMAOCHBKN; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* HPGMBOKOGAA; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* FDHOAEDHKCH; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>* GANCEIODDPB; // 0x38
	::System::Int32 LAOKICEOJFB; // 0x40
	::System::UInt32 MFGLBHGCOOJ; // 0x44
	::System::Single IJKFPHAKDEA; // 0x48
	::System::Single DNNNHDAEAHH; // 0x4C
	::System::Int32 CIAJDNHFBKN; // 0x50
	::System::Int32 HEKJKPOBAED; // 0x54
	::System::Single HPCHCEFOKJB; // 0x58
	::System::Boolean CMMCCMBHNJH; // 0x5C
	::System::Boolean MCAPIAKDMAA; // 0x5D
	::System::Boolean FMNEEONAMNO; // 0x5E

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
