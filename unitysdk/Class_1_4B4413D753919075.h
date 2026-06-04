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

#define CLASS_1_4B4413D753919075_METHOD_1_009AE7772C206756_OFFSET UNITYSDK_OFFSET(0xD18DCD0)
#define CLASS_1_4B4413D753919075_METHOD_1_1F6182100767BE0D_OFFSET UNITYSDK_OFFSET(0xD18E770)
#define CLASS_1_4B4413D753919075_METHOD_1_341ADB940EA251D7_OFFSET UNITYSDK_OFFSET(0xD18D6C0)
#define CLASS_1_4B4413D753919075_METHOD_1_44D231E3049B81BE_OFFSET UNITYSDK_OFFSET(0xD18D9A0)
#define CLASS_1_4B4413D753919075_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xD18EAE0)
#define CLASS_1_4B4413D753919075_METHOD_1_5AE155640BE85A22_OFFSET UNITYSDK_OFFSET(0xD18EDD0)
#define CLASS_1_4B4413D753919075_METHOD_1_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0xD18DD80)
#define CLASS_1_4B4413D753919075_METHOD_1_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0xD18E640)
#define CLASS_1_4B4413D753919075_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD18EBF0)
#define CLASS_1_4B4413D753919075_METHOD_1_CF3C24A8060C2F99_OFFSET UNITYSDK_OFFSET(0xD18DBA0)
#define CLASS_1_4B4413D753919075_METHOD_1_D8BB56F70869B7AC_OFFSET UNITYSDK_OFFSET(0xD18EC40)
#define CLASS_1_4B4413D753919075_METHOD_1_DF7A044676A513C8_OFFSET UNITYSDK_OFFSET(0xD18D530)
#define CLASS_1_4B4413D753919075_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0xD18DFA0)
#define CLASS_1_4B4413D753919075_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xD18EBA0)
#define CLASS_1_4B4413D753919075_METHOD_1_FDC75E773C3424A0_OFFSET UNITYSDK_OFFSET(0xD18D890)
#define CLASS_1_4B4413D753919075__CCTOR_OFFSET UNITYSDK_OFFSET(0xD18EEC0)
#define CLASS_1_4B4413D753919075__CTOR_OFFSET UNITYSDK_OFFSET(0xD18D3C0)

inline static constexpr unsigned int Class_1_4B4413D753919075_TypeDefinitionIndex = 68921;

class Class_1_4B4413D753919075 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4413D753919075_TypeDefinitionIndex)->GetStaticField(0x68DA0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4413D753919075_TypeDefinitionIndex)->GetStaticField(0x14290);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Class_1_303D5A33D1401D59* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*>* Field_1_5; // 0x18
	::System::Collections::Generic::LinkedList_1<::Class_1_8A6989C352B0F0F0*>* Field_1_6; // 0x20
	::RPG::Client::LinkedNodeInstancePool_1<::Class_1_8A6989C352B0F0F0*>* Field_1_7; // 0x28
	::Class_2_4346854BFC7E4C60* Field_1_8; // 0x30
	::Class_1_7EC3ECF7D604F64D* Field_1_9; // 0x38
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_1_10; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*>* Field_1_11; // 0x48
	::System::Int32 Field_1_12; // 0x50

	::System::Void _ctor(::Class_2_4346854BFC7E4C60* a1, ::Class_1_7EC3ECF7D604F64D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*, ::Class_1_7EC3ECF7D604F64D*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_DF7A044676A513C8(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_DF7A044676A513C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_341ADB940EA251D7(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_341ADB940EA251D7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_44D231E3049B81BE(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_44D231E3049B81BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D008406A3311600()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_7D008406A3311600_OFFSET))(this);
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

	::System::Int32 Method_1_D8BB56F70869B7AC(::Class_1_303D5A33D1401D59* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_D8BB56F70869B7AC_OFFSET))(this, a1, a2);
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
