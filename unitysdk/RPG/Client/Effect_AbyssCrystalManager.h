#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_AbyssCrystalManager_SelectedState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_AbyssCrystalManager_CrystalTransformStruct; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_ANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0xA1BB420)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_GETCRYSTALANIFROMNODE_OFFSET UNITYSDK_OFFSET(0xA1BAEF0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITCRYSTALMAT_OFFSET UNITYSDK_OFFSET(0xA1B96E0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITSETCRYSTALMAT_OFFSET UNITYSDK_OFFSET(0xA1BB130)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITSETCRYSTALSHINESCRIPT_OFFSET UNITYSDK_OFFSET(0xA1BB2F0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA1B9940)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SETAUREOLEANI_OFFSET UNITYSDK_OFFSET(0xA1BA250)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SETCRYSTALCENTERWEIGHT_OFFSET UNITYSDK_OFFSET(0xA1B9990)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_START_OFFSET UNITYSDK_OFFSET(0xA1B9690)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_UNLOCKCRYSTAL_OFFSET UNITYSDK_OFFSET(0xA1BB030)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1BB4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AbyssCrystalManager_TypeDefinitionIndex = 64920;

	class Effect_AbyssCrystalManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* CameraTransform; // 0x18
		::UnityEngine::Transform* SelectNode; // 0x20
		::RPG::Client::Effect_AbyssCrystalManager_SelectedState SelectState; // 0x28
		::UnityEngine::GameObject* SelectPrefab; // 0x30
		::System::Boolean SpecialMode; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::Effect_AbyssCrystalManager_CrystalTransformStruct*>* CrystalList; // 0x40
		::UnityEngine::AnimationCurve* CrystalCenterWeightCurve; // 0x48
		::System::Single ScreenUnilateralLength; // 0x50
		::System::Single DampTime; // 0x54
		::UnityEngine::Vector3 ScreenMoveDir; // 0x58
		::UnityEngine::Vector3 CustomLightDic; // 0x64
		::UnityEngine::Vector3 CustomTranslucentDic; // 0x70
		::UnityEngine::Vector3 CustomLightRimDic; // 0x7C
		::System::Boolean AnimatorPreview; // 0x88
		::UnityEngine::Vector3 crystalWorldPos; // 0x8C
		::UnityEngine::Transform* _aureoleRootTrans; // 0x98
		::RPG::Client::Effect_AbyssCrystalManager_SelectedState _preSelectedState; // 0xA0
		::UnityEngine::Transform* _preSelectedNode; // 0xA8
		::UnityEngine::Animator* _aureoleRootAni; // 0xB0
		::UnityEngine::Animator* _crystalRootAni; // 0xB8
		::System::Boolean _crystalEnable; // 0xC0
		::UnityEngine::Vector3 camVec; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetAureoleAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SETAUREOLEANI_OFFSET))(this);
		}

		::System::Void UnlockCrystal(::UnityEngine::Transform* node, ::System::Boolean isSpecialMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_UNLOCKCRYSTAL_OFFSET))(this, node, isSpecialMode);
		}

		::System::Void InitSetCrystalMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITSETCRYSTALMAT_OFFSET))(this);
		}

		::System::Void InitSetCrystalShineScript()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITSETCRYSTALSHINESCRIPT_OFFSET))(this);
		}

		::System::Void InitCrystalMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITCRYSTALMAT_OFFSET))(this);
		}

		::UnityEngine::Animator* GetCrystalAniFromNode(::UnityEngine::Transform* selNode)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_GETCRYSTALANIFROMNODE_OFFSET))(this, selNode);
		}

		::System::Void SetCrystalCenterWeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SETCRYSTALCENTERWEIGHT_OFFSET))(this);
		}

		::System::Void AnimationPlay(::UnityEngine::Animator* animator, ::System::String* animationName, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_ANIMATIONPLAY_OFFSET))(this, animator, animationName, layer);
		}
	};
}
