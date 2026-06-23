#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_5_FCAF801AC482D3B5;

#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_21CA59C7565AE3F8_OFFSET UNITYSDK_OFFSET(0x17925FD0)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_2A3D7611009C51F4_OFFSET UNITYSDK_OFFSET(0x82F250)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_6B7536ADF431165D_OFFSET UNITYSDK_OFFSET(0x17925EA0)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x82F4C0)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x6F80C0)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x6F8400)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x6F7F90)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x82F720)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x82F590)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_F3F1A00B2E67355E_1_OFFSET UNITYSDK_OFFSET(0x82F660)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_F3F1A00B2E67355E_2_OFFSET UNITYSDK_OFFSET(0x82F7B0)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_F3F1A00B2E67355E_OFFSET UNITYSDK_OFFSET(0x82F400)
#define STRUCT_2_FD11E06FCEBA5113_METHOD_2_FD1EFD5A6E481F5B_OFFSET UNITYSDK_OFFSET(0x17925AF0)
#define STRUCT_2_FD11E06FCEBA5113__CCTOR_OFFSET UNITYSDK_OFFSET(0x17925610)

inline static constexpr unsigned int Struct_2_FD11E06FCEBA5113_TypeDefinitionIndex = 49416;

struct alignas(8) Struct_2_FD11E06FCEBA5113
{
	static ::UnityEngine::Quaternion* StaticGet_Field_2_7()
	{
		return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FD11E06FCEBA5113_TypeDefinitionIndex)->GetStaticField(0x12830);
	}
	::MoleMole::HollowChessPieceSizeType Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::UnityEngine::Quaternion Field_2_3; // 0x2C
	::UnityEngine::Bounds Field_2_4; // 0x3C
	::MoleMole::Config::ConfigHollowChessboard_TVModelData Field_2_5; // 0x58
	::System::Single Field_2_6; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113__CCTOR_OFFSET))();
	}

	/*
	::Struct_2_395B739A1AC58399 Method_2_2A3D7611009C51F4()
	{
		return ((::Struct_2_395B739A1AC58399(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_2A3D7611009C51F4_OFFSET))(this);
	}
	*/

	::System::Void Method_2_F3F1A00B2E67355E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_F3F1A00B2E67355E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	/*
	::Struct_2_3BFB14B0511B64BC_1 Method_2_BA80D36BDA3B5115()
	{
		return ((::Struct_2_3BFB14B0511B64BC_1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_BA80D36BDA3B5115_OFFSET))(this);
	}
	*/

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	static ::System::Single Method_2_FD1EFD5A6E481F5B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_FD1EFD5A6E481F5B_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_2_F3F1A00B2E67355E_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_F3F1A00B2E67355E_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_6B7536ADF431165D(::UnityEngine::Vector3 a1, ::UnityEngine::Bounds a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_6B7536ADF431165D_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	/*
	static ::Struct_2_FD11E06FCEBA5113 Method_2_21CA59C7565AE3F8(::Struct_2_9F5D7A8EAA940D1A a1, ::Class_5_FCAF801AC482D3B5* a2)
	{
		return ((::Struct_2_FD11E06FCEBA5113(*)(::Struct_2_9F5D7A8EAA940D1A, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_21CA59C7565AE3F8_OFFSET))(a1, a2);
	}
	*/

	::System::Void Method_2_F3F1A00B2E67355E_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_FD11E06FCEBA5113_METHOD_2_F3F1A00B2E67355E_2_OFFSET))(this, a1);
	}
};
