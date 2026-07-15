#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_9CC9BA8044EDE678_Class_1_61A89E2AE773A3FD;
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class AnimatorStateZoneDescConfig; }
namespace RPG::GameCore { class AnimatorZoneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_9CC9BA8044EDE678_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FC8720)
#define CLASS_1_9CC9BA8044EDE678_GET_ANIM_ZONE_COUNT_OFFSET UNITYSDK_OFFSET(0x15FC7F80)
#define CLASS_1_9CC9BA8044EDE678_METHOD_1_1F9359FAC8A554CC_OFFSET UNITYSDK_OFFSET(0x15FC9C00)
#define CLASS_1_9CC9BA8044EDE678_METHOD_1_2BDA50E6F19F67DA_OFFSET UNITYSDK_OFFSET(0x15FC9BB0)
#define CLASS_1_9CC9BA8044EDE678_METHOD_1_6AF9C7651676324C_OFFSET UNITYSDK_OFFSET(0x15FCA250)
#define CLASS_1_9CC9BA8044EDE678_METHOD_1_838967795CC17088_OFFSET UNITYSDK_OFFSET(0x15FC8150)
#define CLASS_1_9CC9BA8044EDE678_METHOD_1_9CAC2D8970A62E0B_OFFSET UNITYSDK_OFFSET(0x15FC87C0)
#define CLASS_1_9CC9BA8044EDE678_METHOD_1_B9E4FF8A8372F418_OFFSET UNITYSDK_OFFSET(0x15FC88A0)
#define CLASS_1_9CC9BA8044EDE678_METHOD_1_C293B57FB12CB007_OFFSET UNITYSDK_OFFSET(0x15FC99F0)
#define CLASS_1_9CC9BA8044EDE678_METHOD_1_E0B178C02E9C6113_OFFSET UNITYSDK_OFFSET(0x15FC9190)
#define CLASS_1_9CC9BA8044EDE678__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FCA2D0)
#define CLASS_1_9CC9BA8044EDE678__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC7FB0)

inline static constexpr unsigned int Class_1_9CC9BA8044EDE678_TypeDefinitionIndex = 53390;

class Class_1_9CC9BA8044EDE678 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__ANIM_ZONE_COUNT_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CC9BA8044EDE678_TypeDefinitionIndex)->GetStaticField(0xA060);
	}
	// static const ::System::Int32 Field_1_1 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x22; // 0x0
	::Il2CppArray<::System::String*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>* Field_1_4; // 0x18
	::Il2CppArray<::Class_1_9CC9BA8044EDE678_Class_1_61A89E2AE773A3FD*>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>* Field_1_6; // 0x28
	::System::Int32 Field_1_7; // 0x30

	::System::Void _ctor(::RPG::GameCore::AnimatorZoneConfig* a1, ::RPG::GameCore::AnimatorZoneConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678__CCTOR_OFFSET))();
	}

	static ::System::Int32 get_ANIM_ZONE_COUNT()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_GET_ANIM_ZONE_COUNT_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_9CAC2D8970A62E0B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_METHOD_1_9CAC2D8970A62E0B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9E4FF8A8372F418(::UnityEngine::Animator* a1, ::Il2CppArray<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_METHOD_1_B9E4FF8A8372F418_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E0B178C02E9C6113(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Boolean a3, ::Il2CppArray<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Boolean, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_METHOD_1_E0B178C02E9C6113_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C293B57FB12CB007(::Il2CppArray<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_METHOD_1_C293B57FB12CB007_OFFSET))(this, a1);
	}

	::System::Void Method_1_838967795CC17088(::RPG::GameCore::AnimatorZoneConfig* a1, ::RPG::GameCore::AnimatorZoneConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_METHOD_1_838967795CC17088_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>* Method_1_1F9359FAC8A554CC(::RPG::GameCore::AnimatorZoneConfig* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>*(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_METHOD_1_1F9359FAC8A554CC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6AF9C7651676324C(::System::Single a1, ::RPG::GameCore::AnimationZone* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::GameCore::AnimationZone*))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_METHOD_1_6AF9C7651676324C_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_2BDA50E6F19F67DA(::RPG::GameCore::AnimZoneType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AnimZoneType))((::PBYTE)hIl2Cpp + CLASS_1_9CC9BA8044EDE678_METHOD_1_2BDA50E6F19F67DA_OFFSET))(a1);
	}
};
