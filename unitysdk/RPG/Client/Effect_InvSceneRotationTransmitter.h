#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCDED740)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCDED330)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCDED430)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDED850)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCDED840)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InvSceneRotationTransmitter_TypeDefinitionIndex = 70455;

	class Effect_InvSceneRotationTransmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_BNKGBAGOBEC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_InvSceneRotationTransmitter_TypeDefinitionIndex)->GetStaticField(0x147B0);
		}
		static ::System::Int32* StaticGet_AIBNFJNLLPD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_InvSceneRotationTransmitter_TypeDefinitionIndex)->GetStaticField(0x147B4);
		}
		::System::Boolean reverseSceneRotation; // 0x18
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x20
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONDISABLE_OFFSET))(this);
		}
	};
}
