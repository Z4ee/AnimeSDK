#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_Config; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionData; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_DRAG_OFFSET UNITYSDK_OFFSET(0xDBFD9F0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_FINISHMOTION_OFFSET UNITYSDK_OFFSET(0xDBFD420)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_GET_AUDIOSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0xDBFCD20)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_GET_DRAGHANDLEPOSITION_OFFSET UNITYSDK_OFFSET(0xDBFCD70)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_GET_SWAPMOTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xDBFCF10)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_GET__DRAGHANDLERELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0xDBFCE10)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDBFCF60)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_PLACEAT_OFFSET UNITYSDK_OFFSET(0xDBFD900)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_PLAYDITHERFALL_OFFSET UNITYSDK_OFFSET(0xDBFD6E0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_REACTDITHERSHOW_OFFSET UNITYSDK_OFFSET(0xDBFD760)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_RELOAD_OFFSET UNITYSDK_OFFSET(0xDBFD680)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_RESETSCALE_OFFSET UNITYSDK_OFFSET(0xDBFD3A0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_RESET_OFFSET UNITYSDK_OFFSET(0xDBFD270)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_SETDIMMED_OFFSET UNITYSDK_OFFSET(0xDBFD570)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_SETSCALED_OFFSET UNITYSDK_OFFSET(0xDBFD870)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0xDBFD500)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_STARTMOTION_OFFSET UNITYSDK_OFFSET(0xDBFDC50)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDBFCFB0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xDBFDDF0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE__TICKMOTION_OFFSET UNITYSDK_OFFSET(0xDBFD000)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementModelInstance_TypeDefinitionIndex = 77989;

	class ChimeraArrangementModelInstance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraGameObjectBuilder* _Builder; // 0x18
		::UnityEngine::Transform* _DragHandle; // 0x20
		::UnityEngine::Transform* NewMemberBillboardAnchor; // 0x28
		::UnityEngine::Transform* TeamMemberBillboardAnchor; // 0x30
		::UnityEngine::Vector3 TalkPopupAnchorOffset; // 0x38
		::RPG::Client::BaseShaderPropertyTransition* _DitherCtrl; // 0x48
		::UnityEngine::Animator* _Animator; // 0x50
		::System::String* _FallAnimTrigger; // 0x58
		::RPG::Client::Prop::ChimeraArrangementModelInstance_Config* _Config; // 0x60
		::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionData* _Motion; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AudioSourceObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_GET_AUDIOSOURCEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DragHandlePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_GET_DRAGHANDLEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get__DragHandleRelativePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_GET__DRAGHANDLERELATIVEPOSITION_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* get_SwapMotionConfig()
		{
			return ((::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_GET_SWAPMOTIONCONFIG_OFFSET))(this);
		}

		::System::Void Initialize(::RPG::Client::Prop::ChimeraArrangementModelInstance_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance_Config*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_UPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_RESET_OFFSET))(this);
		}

		::System::Void Reload(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_RELOAD_OFFSET))(this, a1);
		}

		::System::Void SetVisibility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_SETVISIBILITY_OFFSET))(this, a1);
		}

		::System::Void SetDimmed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_SETDIMMED_OFFSET))(this, a1);
		}

		::System::Void PlayDitherFall(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_PLAYDITHERFALL_OFFSET))(this, a1);
		}

		::System::Void ReactDitherShow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_REACTDITHERSHOW_OFFSET))(this, a1);
		}

		::System::Void SetScaled(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_SETSCALED_OFFSET))(this, a1);
		}

		::System::Void ResetScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_RESETSCALE_OFFSET))(this);
		}

		::System::Void PlaceAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_PLACEAT_OFFSET))(this, a1);
		}

		::System::Void Drag(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_DRAG_OFFSET))(this, a1, a2);
		}

		::System::Void StartMotion(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_STARTMOTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_FINISHMOTION_OFFSET))(this);
		}

		::System::Void _TickMotion(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE__TICKMOTION_OFFSET))(this, a1);
		}
	};
}
