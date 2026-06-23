#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_63DDC2FA7A3D55CD.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BF5775DA40138049_1_METHOD_2_1BD71C0E8C126251_OFFSET UNITYSDK_OFFSET(0x7BF090)
#define STRUCT_2_BF5775DA40138049_1_METHOD_2_1F8314262457963A_1_OFFSET UNITYSDK_OFFSET(0x7BF130)
#define STRUCT_2_BF5775DA40138049_1_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x7BF0A0)
#define STRUCT_2_BF5775DA40138049_1_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x7BF100)
#define STRUCT_2_BF5775DA40138049_1_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x7BF0C0)
#define STRUCT_2_BF5775DA40138049_1_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x7BF010)
#define STRUCT_2_BF5775DA40138049_1_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x7BF050)
#define STRUCT_2_BF5775DA40138049_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A466F0)
#define STRUCT_2_BF5775DA40138049_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7BEFB0)

inline static constexpr unsigned int Struct_2_BF5775DA40138049_1_TypeDefinitionIndex = 80953;

struct alignas(8) Struct_2_BF5775DA40138049_1
{
	static ::Struct_2_BF5775DA40138049_1* StaticGet_Field_2_2()
	{
		return (::Struct_2_BF5775DA40138049_1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_BF5775DA40138049_1_TypeDefinitionIndex)->GetStaticField(0xDB30);
	}
	::Struct_2_ACD0EF80A5330786 Field_2_0; // 0x10
	::Struct_2_63DDC2FA7A3D55CD Field_2_1; // 0xA0

	::System::Void _ctor(::Struct_2_ACD0EF80A5330786 a1, ::Struct_2_63DDC2FA7A3D55CD a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786, ::Struct_2_63DDC2FA7A3D55CD))((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1__CCTOR_OFFSET))();
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_1BD71C0E8C126251()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1_METHOD_2_1BD71C0E8C126251_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	/*
	::Struct_2_2BF3DCBD364A6BA8 Method_2_1F8314262457963A_1()
	{
		return ((::Struct_2_2BF3DCBD364A6BA8(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BF5775DA40138049_1_METHOD_2_1F8314262457963A_1_OFFSET))(this);
	}
	*/
};
