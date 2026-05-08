#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_0FFD957D5C10AA0F_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x74B9C0)
#define STRUCT_2_0FFD957D5C10AA0F_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x74B940)
#define STRUCT_2_0FFD957D5C10AA0F_METHOD_2_77E6E3DA1F0E9CCC_OFFSET UNITYSDK_OFFSET(0x74BA00)
#define STRUCT_2_0FFD957D5C10AA0F_METHOD_2_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x74B9B0)
#define STRUCT_2_0FFD957D5C10AA0F_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x74B970)
#define STRUCT_2_0FFD957D5C10AA0F_METHOD_2_F088209CA8D65638_OFFSET UNITYSDK_OFFSET(0x74B9E0)
#define STRUCT_2_0FFD957D5C10AA0F_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x74B8C0)
#define STRUCT_2_0FFD957D5C10AA0F_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x74B900)
#define STRUCT_2_0FFD957D5C10AA0F__CCTOR_OFFSET UNITYSDK_OFFSET(0x12548FA0)
#define STRUCT_2_0FFD957D5C10AA0F__CTOR_OFFSET UNITYSDK_OFFSET(0x74B830)

inline static constexpr unsigned int Struct_2_0FFD957D5C10AA0F_TypeDefinitionIndex = 45616;

struct alignas(8) Struct_2_0FFD957D5C10AA0F
{
	static ::Struct_2_0FFD957D5C10AA0F* StaticGet_Field_2_6()
	{
		return (::Struct_2_0FFD957D5C10AA0F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0FFD957D5C10AA0F_TypeDefinitionIndex)->GetStaticField(0xA250);
	}
	::Struct_2_6402D4A3EAB8BDC8 Field_2_0; // 0x10
	::Struct_2_6402D4A3EAB8BDC8 Field_2_1; // 0x14
	::Struct_2_6402D4A3EAB8BDC8 Field_2_2; // 0x18
	::Struct_2_ACD0EF80A5330786 Field_2_3; // 0x20
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> Field_2_4; // 0xB0
	::Foundation::NativeVariable_1<::UnityEngine::Vector3> Field_2_5; // 0xC0

	::System::Void _ctor(::Struct_2_6402D4A3EAB8BDC8 a1, ::Struct_2_6402D4A3EAB8BDC8 a2, ::Struct_2_6402D4A3EAB8BDC8 a3, ::Struct_2_ACD0EF80A5330786 a4, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> a5, ::Foundation::NativeVariable_1<::UnityEngine::Vector3> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8, ::Struct_2_6402D4A3EAB8BDC8, ::Struct_2_6402D4A3EAB8BDC8, ::Struct_2_ACD0EF80A5330786, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::NativeVariable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F__CCTOR_OFFSET))();
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F_METHOD_2_9C72894CB5D45A5A_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> Method_2_F088209CA8D65638()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F_METHOD_2_F088209CA8D65638_OFFSET))(this);
	}
	*/

	/*
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> Method_2_77E6E3DA1F0E9CCC()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0FFD957D5C10AA0F_METHOD_2_77E6E3DA1F0E9CCC_OFFSET))(this);
	}
	*/
};
