#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_62E9700EAC81114C_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x9E5B10)
#define STRUCT_2_62E9700EAC81114C_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x9E5A40)
#define STRUCT_2_62E9700EAC81114C_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9E5AF0)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x66AB70)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x9E5B60)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_9EC8BD4457552264_OFFSET UNITYSDK_OFFSET(0x1DE86AC0)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_AE1DBF470C0EAB7F_OFFSET UNITYSDK_OFFSET(0x9E5B80)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_1_OFFSET UNITYSDK_OFFSET(0x9E5B30)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_2_OFFSET UNITYSDK_OFFSET(0x9E5B40)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_3_OFFSET UNITYSDK_OFFSET(0x9E5B50)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_4_OFFSET UNITYSDK_OFFSET(0x9E5B70)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_5_OFFSET UNITYSDK_OFFSET(0x9E5B90)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_OFFSET UNITYSDK_OFFSET(0x9E5B20)
#define STRUCT_2_62E9700EAC81114C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5970)

inline static constexpr unsigned int Struct_2_62E9700EAC81114C_TypeDefinitionIndex = 58509;

struct alignas(8) Struct_2_62E9700EAC81114C
{
	::Foundation::Variable_1<::Foundation::Unreal::FTransform> Field_2_3; // 0x10
	::Foundation::Clamped_1<::System::Single> Field_2_2; // 0x48
	::Foundation::Clamped_1<::System::Single> Field_2_1; // 0x60
	::Foundation::Clamped_1<::System::Single> Field_2_0; // 0x78
	::System::Nullable_1<::UnityEngine::Quaternion> Field_2_7; // 0x90
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_6; // 0xA4
	::System::Int32 Field_2_5; // 0xB4
	::System::Single Field_2_4; // 0xB8

	::System::Void _ctor(::Foundation::Variable_1<::Foundation::Unreal::FTransform> a1, ::Foundation::Clamped_1<::System::Single> a2, ::Foundation::Clamped_1<::System::Single> a3, ::Foundation::Clamped_1<::System::Single> a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::Foundation::Clamped_1<::System::Single>, ::Foundation::Clamped_1<::System::Single>, ::Foundation::Clamped_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 get_Location()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_GET_LOCATION_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_GET_ROTATION_OFFSET))(this);
	}

	::System::Single get_FieldOfView()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_GET_FIELDOFVIEW_OFFSET))(this);
	}

	::System::Single Method_2_D58F2C276690F166(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_OFFSET))(this, a1);
	}

	::System::Single Method_2_D58F2C276690F166_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_D58F2C276690F166_2(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_2_OFFSET))(this, a1);
	}

	static ::Struct_2_62E9700EAC81114C Method_2_9EC8BD4457552264(::Foundation::Variable_1<::Foundation::Unreal::FTransform> a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::Struct_2_62E9700EAC81114C(*)(::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_9EC8BD4457552264_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Single Method_2_D58F2C276690F166_3(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_3_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_2_D58F2C276690F166_4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE1DBF470C0EAB7F(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_AE1DBF470C0EAB7F_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D58F2C276690F166_5(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_D58F2C276690F166_5_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}
};
