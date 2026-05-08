#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"

#define STRUCT_2_0E3F30CCF139806D_GET_NAME_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define STRUCT_2_0E3F30CCF139806D_METHOD_2_329F495A6D802E35_OFFSET UNITYSDK_OFFSET(0x70D700)
#define STRUCT_2_0E3F30CCF139806D_METHOD_2_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0x28D960)
#define STRUCT_2_0E3F30CCF139806D_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x319030)
#define STRUCT_2_0E3F30CCF139806D_METHOD_2_44B7EB6A5793BF37_OFFSET UNITYSDK_OFFSET(0x70D740)
#define STRUCT_2_0E3F30CCF139806D_METHOD_2_5F5AB34D1A1802E5_OFFSET UNITYSDK_OFFSET(0x70D610)
#define STRUCT_2_0E3F30CCF139806D_METHOD_2_9B3A9909E0F54E31_OFFSET UNITYSDK_OFFSET(0x70D5D0)
#define STRUCT_2_0E3F30CCF139806D_METHOD_2_9CAEE6EBAA10B39F_OFFSET UNITYSDK_OFFSET(0x70D5B0)
#define STRUCT_2_0E3F30CCF139806D_METHOD_2_EDD32FA4283FE3F2_OFFSET UNITYSDK_OFFSET(0x70D530)
#define STRUCT_2_0E3F30CCF139806D_RESET_OFFSET UNITYSDK_OFFSET(0x70D4C0)
#define STRUCT_2_0E3F30CCF139806D__CCTOR_OFFSET UNITYSDK_OFFSET(0x111FDCE0)

inline static constexpr unsigned int Struct_2_0E3F30CCF139806D_TypeDefinitionIndex = 39268;

struct alignas(4) Struct_2_0E3F30CCF139806D
{
	static ::Struct_2_0E3F30CCF139806D* StaticGet_Field_2_4()
	{
		return (::Struct_2_0E3F30CCF139806D*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0E3F30CCF139806D_TypeDefinitionIndex)->GetStaticField(0xF290);
	}
	::Foundation::Unreal::FName Field_2_0; // 0x10
	::UnityEngine::Animations::TransformStreamHandle Field_2_1; // 0x18
	::Struct_2_6402D4A3EAB8BDC8 Field_2_2; // 0x24
	::Struct_2_6402D4A3EAB8BDC8 Field_2_3; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D__CCTOR_OFFSET))();
	}

	::Foundation::Unreal::FName get_Name()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_GET_NAME_OFFSET))(this);
	}

	::System::Void Reset(::Foundation::Unreal::FName a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_RESET_OFFSET))(this, a1);
	}

	::Struct_2_6402D4A3EAB8BDC8 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::Struct_2_6402D4A3EAB8BDC8 Method_2_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_METHOD_2_3D78D2E0F9F95F07_1_OFFSET))(this);
	}

	/*
	::System::Void Method_2_EDD32FA4283FE3F2(::UnityEngine::Animations::AnimationStream a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_METHOD_2_EDD32FA4283FE3F2_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	::System::Void Method_2_9CAEE6EBAA10B39F(::UnityEngine::Animations::TransformStreamHandle a1, ::Struct_2_6402D4A3EAB8BDC8 a2, ::Struct_2_6402D4A3EAB8BDC8 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::TransformStreamHandle, ::Struct_2_6402D4A3EAB8BDC8, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_METHOD_2_9CAEE6EBAA10B39F_OFFSET))(this, a1, a2, a3);
	}

	/*
	::System::Void Method_2_9B3A9909E0F54E31(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_METHOD_2_9B3A9909E0F54E31_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_5F5AB34D1A1802E5(::UnityEngine::Animations::AnimationStream a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_METHOD_2_5F5AB34D1A1802E5_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	/*
	::System::Boolean Method_2_329F495A6D802E35(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_METHOD_2_329F495A6D802E35_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_44B7EB6A5793BF37(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_0E3F30CCF139806D_METHOD_2_44B7EB6A5793BF37_OFFSET))(this, a1);
	}
	*/
};
