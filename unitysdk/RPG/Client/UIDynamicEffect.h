#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1EDFFB645AFD9A3E;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_UIDYNAMICEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA68DAC0)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xA68DDF0)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_404A2BFC62302041_OFFSET UNITYSDK_OFFSET(0xA68DFE0)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xA68D710)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xA68DB70)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA68DF30)
#define RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0xA68DBF0)
#define RPG_CLIENT_UIDYNAMICEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA68DDA0)
#define RPG_CLIENT_UIDYNAMICEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA68DD20)
#define RPG_CLIENT_UIDYNAMICEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xA68D5B0)
#define RPG_CLIENT_UIDYNAMICEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA68E160)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDynamicEffect_TypeDefinitionIndex = 56455;

	class UIDynamicEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_8; // 0x0
		// static const ::System::Single Field_5_9; // 0x0
		::System::String* EffectPath; // 0x18
		::UnityEngine::Vector3 PositionOffset; // 0x20
		::UnityEngine::Vector3 RotationOffset; // 0x2C
		::UnityEngine::Vector3 Scale; // 0x38
		::UnityEngine::GameObject* Field_5_4; // 0x48
		::UnityEngine::ParticleSystem* Field_5_5; // 0x50
		::Class_1_1EDFFB645AFD9A3E* Field_5_6; // 0x58
		::System::Single Field_5_7; // 0x60

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

		::Class_1_1EDFFB645AFD9A3E* Method_5_404A2BFC62302041()
		{
			return ((::Class_1_1EDFFB645AFD9A3E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_METHOD_5_404A2BFC62302041_OFFSET))(this);
		}
	};
}
