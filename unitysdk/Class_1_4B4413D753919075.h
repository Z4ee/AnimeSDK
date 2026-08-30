#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_7EC3ECF7D604F64D;
class Class_1_8A6989C352B0F0F0;
class Class_2_4346854BFC7E4C60;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { template <typename T> class LinkedNodeInstancePool_1; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B4413D753919075_METHOD_1_009AE7772C206756_OFFSET UNITYSDK_OFFSET(0xED6D080)
#define CLASS_1_4B4413D753919075_METHOD_1_1F6182100767BE0D_OFFSET UNITYSDK_OFFSET(0xED6DC70)
#define CLASS_1_4B4413D753919075_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0xED6D130)
#define CLASS_1_4B4413D753919075_METHOD_1_341ADB940EA251D7_OFFSET UNITYSDK_OFFSET(0xED6C9E0)
#define CLASS_1_4B4413D753919075_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xED6DFD0)
#define CLASS_1_4B4413D753919075_METHOD_1_5AE155640BE85A22_OFFSET UNITYSDK_OFFSET(0xED6E2F0)
#define CLASS_1_4B4413D753919075_METHOD_1_6B13A04D4995E40F_OFFSET UNITYSDK_OFFSET(0xED6CCE0)
#define CLASS_1_4B4413D753919075_METHOD_1_73BBF288E84F41B7_OFFSET UNITYSDK_OFFSET(0xED6C8C0)
#define CLASS_1_4B4413D753919075_METHOD_1_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0xED6DB40)
#define CLASS_1_4B4413D753919075_METHOD_1_B67408574BF18406_OFFSET UNITYSDK_OFFSET(0xED6E130)
#define CLASS_1_4B4413D753919075_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xED6E0E0)
#define CLASS_1_4B4413D753919075_METHOD_1_CF3C24A8060C2F99_OFFSET UNITYSDK_OFFSET(0xED6CF40)
#define CLASS_1_4B4413D753919075_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0xED6D3C0)
#define CLASS_1_4B4413D753919075_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xED6E090)
#define CLASS_1_4B4413D753919075_METHOD_1_FDC75E773C3424A0_OFFSET UNITYSDK_OFFSET(0xED6CBD0)
#define CLASS_1_4B4413D753919075__CCTOR_OFFSET UNITYSDK_OFFSET(0xED6E3E0)
#define CLASS_1_4B4413D753919075__CTOR_OFFSET UNITYSDK_OFFSET(0xED6C750)

inline static constexpr unsigned int Class_1_4B4413D753919075_TypeDefinitionIndex = 73731;

class Class_1_4B4413D753919075 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMKHFGKHPA()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4413D753919075_TypeDefinitionIndex)->GetStaticField(0xB960);
	}
	static ::System::Int32* StaticGet_BHCOGGFLBCP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4413D753919075_TypeDefinitionIndex)->GetStaticField(0x2780);
	}
	// static const ::System::Int32 MHBACHLLFFA = 0xF; // 0x0
	// static const ::System::Int32 GKJFFHAABLK = 0x1; // 0x0
	::Class_1_7EC3ECF7D604F64D* OOFIFJJMNJM; // 0x10
	::System::Collections::Generic::LinkedList_1<::Class_1_8A6989C352B0F0F0*>* BAFPJNKHFFB; // 0x18
	::RPG::Client::LinkedNodeInstancePool_1<::Class_1_8A6989C352B0F0F0*>* LBHDLGPCFFF; // 0x20
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* GMBIOLIAPDD; // 0x28
	::Class_2_4346854BFC7E4C60* CBLNBBGKEFM; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*>* MKFLEJIFBLL; // 0x38
	::Class_1_303D5A33D1401D59* KDLDKNBOFBN; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*>* KIBMLJBELJB; // 0x48
	::System::Int32 KAADDOOHILP; // 0x50

	::System::Void _ctor(::Class_2_4346854BFC7E4C60* a1, ::Class_1_7EC3ECF7D604F64D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*, ::Class_1_7EC3ECF7D604F64D*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_73BBF288E84F41B7(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_73BBF288E84F41B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_341ADB940EA251D7(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_341ADB940EA251D7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6B13A04D4995E40F(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_6B13A04D4995E40F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_1_1F6182100767BE0D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_1F6182100767BE0D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_B67408574BF18406(::Class_1_303D5A33D1401D59* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_B67408574BF18406_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5AE155640BE85A22(::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>* a1, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_5AE155640BE85A22_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FDC75E773C3424A0(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_FDC75E773C3424A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF3C24A8060C2F99(::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_CF3C24A8060C2F99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_009AE7772C206756(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_009AE7772C206756_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_814B2B0F621DA493()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_814B2B0F621DA493_OFFSET))();
	}
};
