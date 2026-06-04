#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1EDFFB645AFD9A3E;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_UIDYNAMICEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCB49640)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xCB49970)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xCB49290)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xCB496F0)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xCB49AB0)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0xCB49770)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_F662791A0BE6B9AA_OFFSET UNITYSDK_OFFSET(0xCB49B60)
#define RPG_CLIENT_UIDYNAMICEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCB49920)
#define RPG_CLIENT_UIDYNAMICEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCB498A0)
#define RPG_CLIENT_UIDYNAMICEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xCB49130)
#define RPG_CLIENT_UIDYNAMICEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xCB49CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDynamicEffect_TypeDefinitionIndex = 64620;

	class UIDynamicEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_0; // 0x0
		// static const ::System::Single Field_5_1; // 0x0
		::System::String* EffectPath; // 0x18
		::UnityEngine::Vector3 PositionOffset; // 0x20
		::UnityEngine::Vector3 RotationOffset; // 0x2C
		::UnityEngine::Vector3 Scale; // 0x38
		::UnityEngine::GameObject* Field_5_6; // 0x48
		::UnityEngine::ParticleSystem* Field_5_7; // 0x50
		::Class_1_1EDFFB645AFD9A3E* Field_5_8; // 0x58
		::System::Single Field_5_9; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_PLAY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_937F8473216A3162_OFFSET))(this);
		}

		::System::Void Method_5_C3CD621FE895B79A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_C3CD621FE895B79A_OFFSET))(this);
		}

		::System::Boolean Method_5_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_5_0868EF727040C390()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_0868EF727040C390_OFFSET))(this);
		}

		::System::Void Method_5_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_5A124CAF1E48B74F_OFFSET))(this);
		}

		::Class_1_1EDFFB645AFD9A3E* Method_5_F662791A0BE6B9AA()
		{
			return ((::Class_1_1EDFFB645AFD9A3E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_F662791A0BE6B9AA_OFFSET))(this);
		}
	};
}
