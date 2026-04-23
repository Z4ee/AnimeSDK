#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_4EBEA112A94807DC_Class_1_61A89E2AE773A3FD;
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class AnimatorStateZoneDescConfig; }
namespace RPG::GameCore { class AnimatorZoneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_4EBEA112A94807DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1F7CD0)
#define CLASS_1_4EBEA112A94807DC_GET_ANIM_ZONE_COUNT_OFFSET UNITYSDK_OFFSET(0xB1F7410)
#define CLASS_1_4EBEA112A94807DC_METHOD_1_20FE35578AC465F9_OFFSET UNITYSDK_OFFSET(0xB1F9650)
#define CLASS_1_4EBEA112A94807DC_METHOD_1_2BDA50E6F19F67DA_OFFSET UNITYSDK_OFFSET(0xB1F9600)
#define CLASS_1_4EBEA112A94807DC_METHOD_1_36760411D85E30FC_OFFSET UNITYSDK_OFFSET(0xB1F8930)
#define CLASS_1_4EBEA112A94807DC_METHOD_1_44E4A2A31A7A5277_OFFSET UNITYSDK_OFFSET(0xB1F7D80)
#define CLASS_1_4EBEA112A94807DC_METHOD_1_6AF9C7651676324C_OFFSET UNITYSDK_OFFSET(0xB1F9CC0)
#define CLASS_1_4EBEA112A94807DC_METHOD_1_C293B57FB12CB007_OFFSET UNITYSDK_OFFSET(0xB1F9430)
#define CLASS_1_4EBEA112A94807DC_METHOD_1_D771090315476BF8_OFFSET UNITYSDK_OFFSET(0xB1F75F0)
#define CLASS_1_4EBEA112A94807DC_METHOD_1_DDA066902A82F842_OFFSET UNITYSDK_OFFSET(0xB1F7E20)
#define CLASS_1_4EBEA112A94807DC__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1F9D40)
#define CLASS_1_4EBEA112A94807DC__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F7440)

inline static constexpr unsigned int Class_1_4EBEA112A94807DC_TypeDefinitionIndex = 51569;

class Class_1_4EBEA112A94807DC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__ANIM_ZONE_COUNT_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EBEA112A94807DC_TypeDefinitionIndex)->GetStaticField(0x10BB0);
	}
	// static const ::System::Int32 Field_1_0 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x22; // 0x0
	::Il2CppArray<::System::String*>* Field_1_4; // 0x10
	::Il2CppArray<::Class_1_4EBEA112A94807DC_Class_1_61A89E2AE773A3FD*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>* Field_1_7; // 0x28
	::System::Int32 Field_1_6; // 0x30

	::System::Void _ctor(::RPG::GameCore::AnimatorZoneConfig* a1, ::RPG::GameCore::AnimatorZoneConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC__CCTOR_OFFSET))();
	}

	static ::System::Int32 get_ANIM_ZONE_COUNT()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_GET_ANIM_ZONE_COUNT_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_44E4A2A31A7A5277(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_METHOD_1_44E4A2A31A7A5277_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DDA066902A82F842(::UnityEngine::Animator* a1, ::Il2CppArray<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_METHOD_1_DDA066902A82F842_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36760411D85E30FC(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Boolean a3, ::Il2CppArray<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Boolean, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_METHOD_1_36760411D85E30FC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C293B57FB12CB007(::Il2CppArray<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_METHOD_1_C293B57FB12CB007_OFFSET))(this, a1);
	}

	::System::Void Method_1_D771090315476BF8(::RPG::GameCore::AnimatorZoneConfig* a1, ::RPG::GameCore::AnimatorZoneConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_METHOD_1_D771090315476BF8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>* Method_1_20FE35578AC465F9(::RPG::GameCore::AnimatorZoneConfig* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>*(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_METHOD_1_20FE35578AC465F9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6AF9C7651676324C(::System::Single a1, ::RPG::GameCore::AnimationZone* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::GameCore::AnimationZone*))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_METHOD_1_6AF9C7651676324C_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_2BDA50E6F19F67DA(::RPG::GameCore::AnimZoneType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AnimZoneType))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_METHOD_1_2BDA50E6F19F67DA_OFFSET))(a1);
	}
};
