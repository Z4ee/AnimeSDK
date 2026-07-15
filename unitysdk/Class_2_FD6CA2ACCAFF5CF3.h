#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_0F19373B970769FA;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FD6CA2ACCAFF5CF3_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18BCFB80)
#define CLASS_2_FD6CA2ACCAFF5CF3_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18BCFBA0)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x18BD0400)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x18BD05F0)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18BD0450)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x18BD00F0)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x18BD0520)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18BD06E0)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x18BD01D0)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_8B62520A41D6C02C_OFFSET UNITYSDK_OFFSET(0x18BCFDA0)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x18BD0280)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_ABAF2DCAD651CD1D_OFFSET UNITYSDK_OFFSET(0x18BCFCE0)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x18BCFC00)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x18BD0660)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x18BCFEE0)
#define CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18BCFEA0)
#define CLASS_2_FD6CA2ACCAFF5CF3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x18BCFC50)
#define CLASS_2_FD6CA2ACCAFF5CF3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18BCFD50)
#define CLASS_2_FD6CA2ACCAFF5CF3_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18BCFB90)
#define CLASS_2_FD6CA2ACCAFF5CF3__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD0740)
#define CLASS_2_FD6CA2ACCAFF5CF3__ONBIND_OFFSET UNITYSDK_OFFSET(0x18BCFAC0)
#define CLASS_2_FD6CA2ACCAFF5CF3__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18BD03A0)

inline static constexpr unsigned int Class_2_FD6CA2ACCAFF5CF3_TypeDefinitionIndex = 68512;

class Class_2_FD6CA2ACCAFF5CF3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::GameEntity* Field_2_3; // 0x60
	::UnityEngine::RectTransform* Field_2_4; // 0x68
	::Class_2_0F19373B970769FA* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78
	::UnityEngine::Animation* Field_2_7; // 0x80
	::UnityEngine::Color Field_2_8; // 0x88
	::UnityEngine::Color Field_2_9; // 0x98
	::System::Int32 _Index_k__BackingField; // 0xA8
	::System::Boolean Field_2_11; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_8B62520A41D6C02C(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_8B62520A41D6C02C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_ABAF2DCAD651CD1D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_ABAF2DCAD651CD1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6CA2ACCAFF5CF3_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
