#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B6937A9C521D32AC_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x6D4E70)
#define STRUCT_2_B6937A9C521D32AC_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x6D4DF0)
#define STRUCT_2_B6937A9C521D32AC_METHOD_2_5A219A4F5451E01D_OFFSET UNITYSDK_OFFSET(0x6D4E60)
#define STRUCT_2_B6937A9C521D32AC_METHOD_2_77E6E3DA1F0E9CCC_1_OFFSET UNITYSDK_OFFSET(0x6D4EB0)
#define STRUCT_2_B6937A9C521D32AC_METHOD_2_77E6E3DA1F0E9CCC_2_OFFSET UNITYSDK_OFFSET(0x6D4ED0)
#define STRUCT_2_B6937A9C521D32AC_METHOD_2_77E6E3DA1F0E9CCC_OFFSET UNITYSDK_OFFSET(0x6D4E90)
#define STRUCT_2_B6937A9C521D32AC_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x6D4E20)
#define STRUCT_2_B6937A9C521D32AC_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x6D4D70)
#define STRUCT_2_B6937A9C521D32AC_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x6D4DB0)
#define STRUCT_2_B6937A9C521D32AC__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE716C0)
#define STRUCT_2_B6937A9C521D32AC__CTOR_OFFSET UNITYSDK_OFFSET(0x6D4CB0)

inline static constexpr unsigned int Struct_2_B6937A9C521D32AC_TypeDefinitionIndex = 57441;

struct alignas(8) Struct_2_B6937A9C521D32AC
{
	static ::Struct_2_B6937A9C521D32AC* StaticGet_Field_2_11()
	{
		return (::Struct_2_B6937A9C521D32AC*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B6937A9C521D32AC_TypeDefinitionIndex)->GetStaticField(0xBEE0);
	}
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::Single Field_2_10; // 0x0
	::Struct_2_6402D4A3EAB8BDC8 Field_2_0; // 0x10
	::Struct_2_6402D4A3EAB8BDC8 Field_2_1; // 0x14
	::Struct_2_6402D4A3EAB8BDC8 Field_2_2; // 0x18
	::Struct_2_ACD0EF80A5330786 Field_2_3; // 0x20
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> Field_2_4; // 0xB0
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> Field_2_5; // 0xC0
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> Field_2_6; // 0xD0
	::Foundation::Unreal::FName Field_2_7; // 0xE0
	::Foundation::Unreal::FName Field_2_8; // 0xE8

	::System::Void _ctor(::Struct_2_6402D4A3EAB8BDC8 a1, ::Struct_2_6402D4A3EAB8BDC8 a2, ::Struct_2_ACD0EF80A5330786 a3, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> a4, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> a5, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> a6, ::Foundation::Unreal::FName a7, ::Foundation::Unreal::FName a8)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8, ::Struct_2_6402D4A3EAB8BDC8, ::Struct_2_ACD0EF80A5330786, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC__CCTOR_OFFSET))();
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_5A219A4F5451E01D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_METHOD_2_5A219A4F5451E01D_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> Method_2_77E6E3DA1F0E9CCC()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_METHOD_2_77E6E3DA1F0E9CCC_OFFSET))(this);
	}
	*/

	/*
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> Method_2_77E6E3DA1F0E9CCC_1()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_METHOD_2_77E6E3DA1F0E9CCC_1_OFFSET))(this);
	}
	*/

	/*
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> Method_2_77E6E3DA1F0E9CCC_2()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B6937A9C521D32AC_METHOD_2_77E6E3DA1F0E9CCC_2_OFFSET))(this);
	}
	*/
};
