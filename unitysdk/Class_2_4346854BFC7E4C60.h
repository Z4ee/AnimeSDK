#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E05E7A6D9DE9138B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_7EC3ECF7D604F64D;
class Class_1_8A6989C352B0F0F0;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4346854BFC7E4C60_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA3E8050)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_1FA700D56B10D5A5_OFFSET UNITYSDK_OFFSET(0xA3E80C0)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_4DD01EABCC3A969D_OFFSET UNITYSDK_OFFSET(0xA3E7730)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xA3E7FA0)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_521D9643AEDB06BF_OFFSET UNITYSDK_OFFSET(0xA3E7410)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_57895804C36F21C5_OFFSET UNITYSDK_OFFSET(0xA3E7C40)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xA3E7BC0)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_67200D9E2F02CE1C_OFFSET UNITYSDK_OFFSET(0xA3E7D20)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0xA3E7EE0)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA3E7850)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_B7A86801961FA76E_OFFSET UNITYSDK_OFFSET(0xA3E7F30)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_DCB1C6CDC61D91E8_OFFSET UNITYSDK_OFFSET(0xA3E7E30)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_E975629435F9C6D4_OFFSET UNITYSDK_OFFSET(0xA3E7E80)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_F049CC894CC78CD1_OFFSET UNITYSDK_OFFSET(0xA3E7900)
#define CLASS_2_4346854BFC7E4C60_METHOD_2_F8244935488678D1_OFFSET UNITYSDK_OFFSET(0xA3E73A0)
#define CLASS_2_4346854BFC7E4C60__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3E80B0)
#define CLASS_2_4346854BFC7E4C60__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E7280)

inline static constexpr unsigned int Class_2_4346854BFC7E4C60_TypeDefinitionIndex = 68923;

class Class_2_4346854BFC7E4C60 : public ::Class_1_E05E7A6D9DE9138B
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4346854BFC7E4C60_TypeDefinitionIndex)->GetStaticField(0xC400);
	}
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4346854BFC7E4C60_TypeDefinitionIndex)->GetStaticField(0xC401);
	}
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_2_2; // 0x40
	::Class_1_7EC3ECF7D604F64D* Field_2_3; // 0x48
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* Field_2_4; // 0x50
	::System::Int32 Field_2_5; // 0x58
	::System::Boolean Field_2_6; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60__CCTOR_OFFSET))();
	}

	::System::Void Method_2_F8244935488678D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_F8244935488678D1_OFFSET))(this);
	}

	::System::Void Method_2_521D9643AEDB06BF(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_521D9643AEDB06BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4DD01EABCC3A969D(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_4DD01EABCC3A969D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F049CC894CC78CD1(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_F049CC894CC78CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_57895804C36F21C5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_57895804C36F21C5_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_67200D9E2F02CE1C(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Int32(*)(::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_67200D9E2F02CE1C_OFFSET))(a1);
	}

	::System::Boolean Method_2_DCB1C6CDC61D91E8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_DCB1C6CDC61D91E8_OFFSET))(this);
	}

	::System::Void Method_2_E975629435F9C6D4(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_E975629435F9C6D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_2_B7A86801961FA76E(::Class_1_303D5A33D1401D59* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_B7A86801961FA76E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_1FA700D56B10D5A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4346854BFC7E4C60_METHOD_2_1FA700D56B10D5A5_OFFSET))(this);
	}
};
