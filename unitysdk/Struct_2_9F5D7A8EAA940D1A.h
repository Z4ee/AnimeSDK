#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_6B7536ADF431165D_OFFSET UNITYSDK_OFFSET(0x15947870)
#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x82AD90)
#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x82AEC0)
#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x82AA50)
#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x82AD00)
#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_F3F1A00B2E67355E_1_OFFSET UNITYSDK_OFFSET(0x82AB80)
#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_F3F1A00B2E67355E_2_OFFSET UNITYSDK_OFFSET(0x82AC40)
#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_F3F1A00B2E67355E_OFFSET UNITYSDK_OFFSET(0x82A990)
#define STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_FD1EFD5A6E481F5B_OFFSET UNITYSDK_OFFSET(0x15947B80)
#define STRUCT_2_9F5D7A8EAA940D1A__CCTOR_OFFSET UNITYSDK_OFFSET(0x15947590)

inline static constexpr unsigned int Struct_2_9F5D7A8EAA940D1A_TypeDefinitionIndex = 82571;

struct alignas(8) Struct_2_9F5D7A8EAA940D1A
{
	static ::UnityEngine::Quaternion* StaticGet_Field_2_6()
	{
		return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9F5D7A8EAA940D1A_TypeDefinitionIndex)->GetStaticField(0xC890);
	}
	::MoleMole::HollowChessPieceSizeType Field_2_3; // 0x10
	::UnityEngine::Vector3 Field_2_2; // 0x14
	::UnityEngine::Vector3 Field_2_1; // 0x20
	::UnityEngine::Quaternion Field_2_0; // 0x2C
	::MoleMole::Config::ConfigHollowChessboard_TVModelData Field_2_7; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A__CCTOR_OFFSET))();
	}

	::System::Void Method_2_F3F1A00B2E67355E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_F3F1A00B2E67355E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_2_F3F1A00B2E67355E_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_F3F1A00B2E67355E_1_OFFSET))(this, a1);
	}

	/*
	static ::UnityEngine::Vector3 Method_2_6B7536ADF431165D(::UnityEngine::Vector3 a1, ::UnityEngine::Bounds a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_6B7536ADF431165D_OFFSET))(a1, a2);
	}
	*/

	::System::Void Method_2_F3F1A00B2E67355E_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_F3F1A00B2E67355E_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	static ::System::Single Method_2_FD1EFD5A6E481F5B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_FD1EFD5A6E481F5B_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9F5D7A8EAA940D1A_METHOD_2_D37FAD0A6AA04B25_2_OFFSET))(this);
	}
};
