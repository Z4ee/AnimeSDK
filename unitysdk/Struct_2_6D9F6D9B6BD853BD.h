#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABBDBB7B60DE9902.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6D9F6D9B6BD853BD_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x73C430)
#define STRUCT_2_6D9F6D9B6BD853BD_METHOD_2_340237F7579E924C_OFFSET UNITYSDK_OFFSET(0x73C420)
#define STRUCT_2_6D9F6D9B6BD853BD_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x73C3B0)
#define STRUCT_2_6D9F6D9B6BD853BD_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x73C3E0)
#define STRUCT_2_6D9F6D9B6BD853BD_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x73C330)
#define STRUCT_2_6D9F6D9B6BD853BD_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x73C370)
#define STRUCT_2_6D9F6D9B6BD853BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1157CDB0)
#define STRUCT_2_6D9F6D9B6BD853BD__CTOR_OFFSET UNITYSDK_OFFSET(0x73C2B0)

inline static constexpr unsigned int Struct_2_6D9F6D9B6BD853BD_TypeDefinitionIndex = 47723;

struct alignas(8) Struct_2_6D9F6D9B6BD853BD
{
	static ::Struct_2_6D9F6D9B6BD853BD* StaticGet_Field_2_4()
	{
		return (::Struct_2_6D9F6D9B6BD853BD*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6D9F6D9B6BD853BD_TypeDefinitionIndex)->GetStaticField(0xC7A0);
	}
	::Struct_2_ABBDBB7B60DE9902 Field_2_1; // 0x10
	::System::Double Field_2_0; // 0x20
	::System::Byte Field_2_7; // 0x28
	::System::Double Field_2_6; // 0x30
	::Struct_2_ACD0EF80A5330786 Field_2_5; // 0x38

	::System::Void _ctor(::Struct_2_ACD0EF80A5330786 a1, ::Struct_2_ABBDBB7B60DE9902 a2, ::System::Double a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786, ::Struct_2_ABBDBB7B60DE9902, ::System::Double, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6D9F6D9B6BD853BD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6D9F6D9B6BD853BD__CCTOR_OFFSET))();
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_6D9F6D9B6BD853BD_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_6D9F6D9B6BD853BD_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_6D9F6D9B6BD853BD_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_6D9F6D9B6BD853BD_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_340237F7579E924C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6D9F6D9B6BD853BD_METHOD_2_340237F7579E924C_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6D9F6D9B6BD853BD_METHOD_2_1F8314262457963A_OFFSET))(this);
	}
};
