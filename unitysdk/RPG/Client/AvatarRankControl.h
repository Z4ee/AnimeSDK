#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarRankControl_ShowAvatarType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AVATARRANKCONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9DB6750)
#define RPG_CLIENT_AVATARRANKCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9DB6580)
#define RPG_CLIENT_AVATARRANKCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9DB65D0)
#define RPG_CLIENT_AVATARRANKCONTROL_SETRANKTEXTURES_OFFSET UNITYSDK_OFFSET(0x9DB6080)
#define RPG_CLIENT_AVATARRANKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB73A0)
#define RPG_CLIENT_AVATARRANKCONTROL__GETTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x9DB64A0)
#define RPG_CLIENT_AVATARRANKCONTROL__RELEASETEXTUREASSET_OFFSET UNITYSDK_OFFSET(0x9DB6250)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRankControl_TypeDefinitionIndex = 65471;

	class AvatarRankControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 _MAX_RANK = 0x6; // 0x0
		::System::Boolean waveUpdate; // 0x18
		::UnityEngine::AnimationCurve* waveCurve; // 0x20
		::System::Single waveAmplititude; // 0x28
		::System::Single waveSpeed; // 0x2C
		::Il2CppArray<::UnityEngine::Renderer*>* avatarRankGlasses; // 0x30
		::Il2CppArray<::UnityEngine::Transform*>* avatarRankLights; // 0x38
		::Il2CppArray<::UnityEngine::Transform*>* moveTragets; // 0x40
		::UnityEngine::Color diffuseTint; // 0x48
		::UnityEngine::Color specularColor; // 0x58
		::UnityEngine::Color lightColor; // 0x68
		::Il2CppArray<::UnityEngine::Vector3>* originPositions; // 0x78
		::System::Boolean showHideAvatar; // 0x80
		::System::Boolean enterAvatarRank; // 0x81
		::System::Boolean unlockGlass; // 0x82
		::System::Boolean unlockRankSix; // 0x83
		::System::Boolean showAvatar; // 0x84
		::System::Boolean hideAvatar; // 0x85
		::System::Boolean moveGalss; // 0x86
		::RPG::Client::AvatarRankControl_ShowAvatarType showAvatarType; // 0x88
		::UnityEngine::Transform* dissolveCenterStart; // 0x90
		::UnityEngine::Transform* dissolveCenterEnd; // 0x98
		::UnityEngine::Transform* dissolveDir; // 0xA0
		::System::Single traverseProgress; // 0xA8
		::System::Single ditherValue; // 0xAC
		::System::Single moveTargetRatio; // 0xB0
		::UnityEngine::AnimationCurve* glassMoveCurve; // 0xB8
		::System::Single glassMoveDuration; // 0xC0
		::System::Single showAvatarDuration; // 0xC4
		::UnityEngine::GameObject* avatarToShow; // 0xC8
		::UnityEngine::Renderer* glassToUnlock; // 0xD0
		::Il2CppArray<::UnityEngine::Texture*>* _AvatarRankTextures; // 0xD8
		::Il2CppArray<::System::String*>* effectObjectNames; // 0xE0
		::Il2CppArray<::System::String*>* glassObjectNames; // 0xE8
		::Il2CppArray<::UnityEngine::Transform*>* effectTransforms; // 0xF0
		::Il2CppArray<::UnityEngine::Transform*>* glassTransforms; // 0xF8
		::System::Boolean firstTime; // 0x100
		::System::Int32 _AvatarTexID; // 0x104
		::System::Int32 _LightDirID; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void SetRankTextures(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_SETRANKTEXTURES_OFFSET))(this, avatarID);
		}

		::System::String* _GetTexturePath(::System::UInt32 avatarID, ::System::Int32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL__GETTEXTUREPATH_OFFSET))(this, avatarID, rank);
		}

		::System::Void _ReleaseTextureAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL__RELEASETEXTUREASSET_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_LATEUPDATE_OFFSET))(this);
		}
	};
}
