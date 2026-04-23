#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9FACE0)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_C05CECF17E0BB2B1_1_OFFSET UNITYSDK_OFFSET(0xA9FB2C0)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_C05CECF17E0BB2B1_OFFSET UNITYSDK_OFFSET(0xA9FAEA0)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xA9FB130)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA9FB030)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9FAD80)
#define RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FB490)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSwitchHandColliderItem_TypeDefinitionIndex = 63421;

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

		::System::Void Method_5_C05CECF17E0BB2B1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_C05CECF17E0BB2B1_OFFSET))(this, a1);
		}

		::System::Void Method_5_DF7CEFC0E6C5FD0D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
		}

		::System::Void Method_5_C05CECF17E0BB2B1_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDCOLLIDERITEM_METHOD_5_C05CECF17E0BB2B1_1_OFFSET))(this, a1);
		}
	};
}
