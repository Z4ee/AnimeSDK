#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_62E9700EAC81114C_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x744BA0)
#define STRUCT_2_62E9700EAC81114C_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x744AD0)
#define STRUCT_2_62E9700EAC81114C_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x744B80)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_1_OFFSET UNITYSDK_OFFSET(0x744BC0)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_2_OFFSET UNITYSDK_OFFSET(0x744BD0)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_3_OFFSET UNITYSDK_OFFSET(0x744BE0)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_4_OFFSET UNITYSDK_OFFSET(0x744C00)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_5_OFFSET UNITYSDK_OFFSET(0x744C20)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_OFFSET UNITYSDK_OFFSET(0x744BB0)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x58C170)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x744BF0)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_9EC8BD4457552264_OFFSET UNITYSDK_OFFSET(0x120E9E80)
#define STRUCT_2_62E9700EAC81114C_METHOD_2_AE1DBF470C0EAB7F_OFFSET UNITYSDK_OFFSET(0x744C10)
#define STRUCT_2_62E9700EAC81114C__CTOR_OFFSET UNITYSDK_OFFSET(0x744A00)

inline static constexpr unsigned int Struct_2_62E9700EAC81114C_TypeDefinitionIndex = 58313;

struct alignas(8) Struct_2_62E9700EAC81114C
{
	::Foundation::Variable_1<::Foundation::Unreal::FTransform> Field_2_0; // 0x10
	::Foundation::Clamped_1<::System::Single> Field_2_1; // 0x48
	::Foundation::Clamped_1<::System::Single> Field_2_2; // 0x60
	::Foundation::Clamped_1<::System::Single> Field_2_3; // 0x78
	::System::Nullable_1<::UnityEngine::Quaternion> Field_2_4; // 0x90
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_5; // 0xA4
	::System::Int32 Field_2_6; // 0xB4
	::System::Single Field_2_7; // 0xB8

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

	::System::Single Method_2_4D7DFC2B81CF3B63(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_OFFSET))(this, a1);
	}

	::System::Single Method_2_4D7DFC2B81CF3B63_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_4D7DFC2B81CF3B63_2(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_2_OFFSET))(this, a1);
	}

	::System::Single Method_2_4D7DFC2B81CF3B63_3(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_3_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_4D7DFC2B81CF3B63_4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_4_OFFSET))(this, a1);
	}

	static ::Struct_2_62E9700EAC81114C Method_2_9EC8BD4457552264(::Foundation::Variable_1<::Foundation::Unreal::FTransform> a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::Struct_2_62E9700EAC81114C(*)(::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_9EC8BD4457552264_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_AE1DBF470C0EAB7F(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_AE1DBF470C0EAB7F_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_4D7DFC2B81CF3B63_5(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62E9700EAC81114C_METHOD_2_4D7DFC2B81CF3B63_5_OFFSET))(this, a1);
	}
};
