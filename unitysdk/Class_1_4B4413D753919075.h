#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_8A6989C352B0F0F0;
class Class_1_DFE5C4375A557449;
class Class_2_DD25755736E2A226;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { template <typename T> class LinkedNodeInstancePool_1; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B4413D753919075_METHOD_1_009AE7772C206756_OFFSET UNITYSDK_OFFSET(0xD3BA2B0)
#define CLASS_1_4B4413D753919075_METHOD_1_341ADB940EA251D7_OFFSET UNITYSDK_OFFSET(0xD3B9BA0)
#define CLASS_1_4B4413D753919075_METHOD_1_415939020A7F0A6E_OFFSET UNITYSDK_OFFSET(0xD3BB0F0)
#define CLASS_1_4B4413D753919075_METHOD_1_45253D035BE70691_OFFSET UNITYSDK_OFFSET(0xD3BA130)
#define CLASS_1_4B4413D753919075_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xD3BAFB0)
#define CLASS_1_4B4413D753919075_METHOD_1_5AE155640BE85A22_OFFSET UNITYSDK_OFFSET(0xD3BB2B0)
#define CLASS_1_4B4413D753919075_METHOD_1_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0xD3BABB0)
#define CLASS_1_4B4413D753919075_METHOD_1_931925FA561F1B13_OFFSET UNITYSDK_OFFSET(0xD3BACE0)
#define CLASS_1_4B4413D753919075_METHOD_1_9E0E24EF40974DEE_OFFSET UNITYSDK_OFFSET(0xD3B9A80)
#define CLASS_1_4B4413D753919075_METHOD_1_AA9368B26B643FC9_OFFSET UNITYSDK_OFFSET(0xD3BA360)
#define CLASS_1_4B4413D753919075_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xD3BA570)
#define CLASS_1_4B4413D753919075_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD3BB0A0)
#define CLASS_1_4B4413D753919075_METHOD_1_D662E2F91B6AC052_OFFSET UNITYSDK_OFFSET(0xD3B9E80)
#define CLASS_1_4B4413D753919075_METHOD_1_E411BCC5E73CE129_OFFSET UNITYSDK_OFFSET(0xD3B9D70)
#define CLASS_1_4B4413D753919075_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xD3BB050)
#define CLASS_1_4B4413D753919075__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3BB3A0)
#define CLASS_1_4B4413D753919075__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B9910)

inline static constexpr unsigned int Class_1_4B4413D753919075_TypeDefinitionIndex = 67963;

class Class_1_4B4413D753919075 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_8()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4413D753919075_TypeDefinitionIndex)->GetStaticField(0x6B380);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4413D753919075_TypeDefinitionIndex)->GetStaticField(0x11CC0);
	}
	// static const ::System::Int32 Field_1_10 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x1; // 0x0
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_1_4; // 0x10
	::System::Collections::Generic::LinkedList_1<::Class_1_8A6989C352B0F0F0*>* Field_1_3; // 0x18
	::Class_1_303D5A33D1401D59* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*>* Field_1_2; // 0x28
	::RPG::Client::LinkedNodeInstancePool_1<::Class_1_8A6989C352B0F0F0*>* Field_1_5; // 0x30
	::Class_1_DFE5C4375A557449* Field_1_1; // 0x38
	::Class_2_DD25755736E2A226* Field_1_0; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*>* Field_1_6; // 0x48
	::System::Int32 Field_1_11; // 0x50

	::System::Void _ctor(::Class_2_DD25755736E2A226* a1, ::Class_1_DFE5C4375A557449* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*, ::Class_1_DFE5C4375A557449*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_9E0E24EF40974DEE(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_9E0E24EF40974DEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_341ADB940EA251D7(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_341ADB940EA251D7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D662E2F91B6AC052(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_D662E2F91B6AC052_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA9368B26B643FC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_AA9368B26B643FC9_OFFSET))(this);
	}

	::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_1_931925FA561F1B13(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_931925FA561F1B13_OFFSET))(this, a1);
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

	::System::Int32 Method_1_415939020A7F0A6E(::Class_1_303D5A33D1401D59* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_415939020A7F0A6E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5AE155640BE85A22(::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>* a1, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_5AE155640BE85A22_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E411BCC5E73CE129(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_E411BCC5E73CE129_OFFSET))(this, a1);
	}

	::System::Void Method_1_45253D035BE70691(::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::Class_1_8A6989C352B0F0F0*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B4413D753919075_METHOD_1_45253D035BE70691_OFFSET))(this, a1, a2);
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
