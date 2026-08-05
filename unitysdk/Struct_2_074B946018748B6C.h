#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_074B946018748B6C_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x70D3F0)
#define STRUCT_2_074B946018748B6C_METHOD_2_340237F7579E924C_OFFSET UNITYSDK_OFFSET(0x70D3E0)
#define STRUCT_2_074B946018748B6C_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x70D410)
#define STRUCT_2_074B946018748B6C_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x70D3A0)
#define STRUCT_2_074B946018748B6C_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x70D320)
#define STRUCT_2_074B946018748B6C_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x70D360)
#define STRUCT_2_074B946018748B6C__CTOR_OFFSET UNITYSDK_OFFSET(0x70D2E0)

inline static constexpr unsigned int Struct_2_074B946018748B6C_TypeDefinitionIndex = 72172;

struct alignas(8) Struct_2_074B946018748B6C
{
	// static const ::System::Int32 Field_2_1 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_0 = 0x1; // 0x0
	::Struct_2_ACD0EF80A5330786 Field_2_7; // 0x10

	::System::Void _ctor(::Struct_2_ACD0EF80A5330786 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786))((::PBYTE)hIl2Cpp + STRUCT_2_074B946018748B6C__CTOR_OFFSET))(this, a1);
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_074B946018748B6C_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_074B946018748B6C_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_074B946018748B6C_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_340237F7579E924C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_074B946018748B6C_METHOD_2_340237F7579E924C_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_074B946018748B6C_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_074B946018748B6C_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/
};
