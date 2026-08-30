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
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_ANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0xCDC9F40)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_GETCRYSTALANIFROMNODE_OFFSET UNITYSDK_OFFSET(0xCDC9750)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_GET_ISALTERNATEMODE_OFFSET UNITYSDK_OFFSET(0xCDC7FE0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITCRYSTALMAT_OFFSET UNITYSDK_OFFSET(0xCDC8040)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITSETCRYSTALMAT_OFFSET UNITYSDK_OFFSET(0xCDC9C10)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_INITSETCRYSTALSHINESCRIPT_OFFSET UNITYSDK_OFFSET(0xCDC9DD0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCDC82D0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCDCA010)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SETAUREOLEANI_OFFSET UNITYSDK_OFFSET(0xCDC8AB0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SETCRYSTALCENTERWEIGHT_OFFSET UNITYSDK_OFFSET(0xCDC8320)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_START_OFFSET UNITYSDK_OFFSET(0xCDC7FF0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SWITCHCRYSTALMODE_OFFSET UNITYSDK_OFFSET(0xCDC99F0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_UNLOCKCRYSTAL_OFFSET UNITYSDK_OFFSET(0xCDC98F0)
#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCDCA080)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AbyssCrystalManager_TypeDefinitionIndex = 70385;

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
		::RPG::Client::Effect_AbyssCrystalManager_CrystalTransformStruct* AlternateCrystal; // 0x90
		::System::Int32 AlternateCrystalIndex; // 0x98
		::UnityEngine::GameObject* DefaultCrystalRoot; // 0xA0
		::UnityEngine::GameObject* AlternateCrystalRoot; // 0xA8
		::System::Boolean _isAlternateMode; // 0xB0
		::UnityEngine::Material* _alternateMat; // 0xB8
		::UnityEngine::Vector3 crystalWorldPos; // 0xC0
		::UnityEngine::Transform* _aureoleRootTrans; // 0xD0
		::RPG::Client::Effect_AbyssCrystalManager_SelectedState _preSelectedState; // 0xD8
		::UnityEngine::Transform* _preSelectedNode; // 0xE0
		::UnityEngine::Animator* _aureoleRootAni; // 0xE8
		::UnityEngine::Animator* _crystalRootAni; // 0xF0
		::System::Boolean _crystalEnable; // 0xF8
		::UnityEngine::Vector3 camVec; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsAlternateMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_GET_ISALTERNATEMODE_OFFSET))(this);
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

		::System::Void UnlockCrystal(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_UNLOCKCRYSTAL_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchCrystalMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SWITCHCRYSTALMODE_OFFSET))(this, a1);
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

		::UnityEngine::Animator* GetCrystalAniFromNode(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_GETCRYSTALANIFROMNODE_OFFSET))(this, a1);
		}

		::System::Void SetCrystalCenterWeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_SETCRYSTALCENTERWEIGHT_OFFSET))(this);
		}

		::System::Void AnimationPlay(::UnityEngine::Animator* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_ANIMATIONPLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}
