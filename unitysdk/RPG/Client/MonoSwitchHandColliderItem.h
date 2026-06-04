#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xC148ED0)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_475D7AF7572E6782_OFFSET UNITYSDK_OFFSET(0xC1493D0)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_4E704A8B405D8C4A_1_OFFSET UNITYSDK_OFFSET(0xC149590)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_4E704A8B405D8C4A_OFFSET UNITYSDK_OFFSET(0xC1490D0)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC149280)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC148F70)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC149750)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSwitchHandColliderItem_TypeDefinitionIndex = 64338;

	class MonoSwitchHandColliderItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Collider*>* Colliders; // 0x18
		::System::String* ControlGroupName; // 0x20
		::System::String* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_4E704A8B405D8C4A(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_4E704A8B405D8C4A_OFFSET))(this, a1);
		}

		::System::Void Method_5_475D7AF7572E6782(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_475D7AF7572E6782_OFFSET))(this, a1);
		}

		::System::Void Method_5_4E704A8B405D8C4A_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_4E704A8B405D8C4A_1_OFFSET))(this, a1);
		}
	};
}
