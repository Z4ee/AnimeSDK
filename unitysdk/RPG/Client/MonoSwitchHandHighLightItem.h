#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9FB810)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_BREATHING_OFFSET UNITYSDK_OFFSET(0xA9FB7C0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA9FB4B0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0xA9FC1F0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0xA9FC3F0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_A8F8D4B2BD31D693_OFFSET UNITYSDK_OFFSET(0xA9FBB90)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA9FBD80)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA9FBC30)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_F4C8B018D655630D_OFFSET UNITYSDK_OFFSET(0xA9FBEC0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA9FC0F0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9FBDC0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xA9FBA80)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xA9FBC70)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_REPLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA9FB680)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA9FB870)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9FC4A0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FC490)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSwitchHandHighLightItem_TypeDefinitionIndex = 63423;

	class MonoSwitchHandHighLightItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSwitchHandHighLightItem_TypeDefinitionIndex)->GetStaticField(0xEB40);
		}
		::System::Single Duration; // 0x18
		::System::Boolean IsTrigger; // 0x1C
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x20
		::UnityEngine::Material* HighLightMaterial; // 0x28
		::UnityEngine::AnimationCurve* BreathingCurve; // 0x30
		::System::Single Field_5_5; // 0x38
		::System::Single Field_5_6; // 0x3C
		::System::Single Field_5_7; // 0x40
		::System::Boolean Field_5_8; // 0x44
		::System::Boolean Field_5_9; // 0x45
		::Il2CppArray<::UnityEngine::Material*>* Field_5_10; // 0x48
		::RPG::Client::EntityGameObjectConnection* Field_5_12; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM__CCTOR_OFFSET))();
		}

		::System::Boolean IsHighLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ISHIGHLIGHT_OFFSET))(this);
		}

		::System::Void ReplayFadeIn(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_REPLAYFADEIN_OFFSET))(this, a1);
		}

		::System::Void Breathing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_BREATHING_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_UPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_5C549BF7442375BC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_5C549BF7442375BC_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_F4C8B018D655630D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_F4C8B018D655630D_OFFSET))(this);
		}

		::System::Void Method_5_03C4FFAD29DE0852()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_03C4FFAD29DE0852_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_5_A8F8D4B2BD31D693(::UnityEngine::Collider* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_METHOD_5_A8F8D4B2BD31D693_OFFSET))(this, a1);
		}
	};
}
