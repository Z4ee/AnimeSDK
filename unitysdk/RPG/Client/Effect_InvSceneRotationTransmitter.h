#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA1D8780)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA1D8370)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA1D8470)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1D8890)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1D8880)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InvSceneRotationTransmitter_TypeDefinitionIndex = 64982;

	class Effect_InvSceneRotationTransmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_InvSceneRotationTransmitter_TypeDefinitionIndex)->GetStaticField(0x11580);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_InvSceneRotationTransmitter_TypeDefinitionIndex)->GetStaticField(0x11584);
		}
		::System::Boolean reverseSceneRotation; // 0x18
		::UnityEngine::Renderer* Field_5_1; // 0x20
		::UnityEngine::MaterialPropertyBlock* Field_5_2; // 0x28

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
