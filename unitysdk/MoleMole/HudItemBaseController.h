#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_7472FB6CC4015359;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_HUDITEMBASECONTROLLER_DODESTROY_OFFSET UNITYSDK_OFFSET(0x19B2B5B0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x19B2ABC0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x19B2ABA0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x19B2AFB0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x19B2AFA0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x19B2ABB0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19B2A9C0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET__RECTTRANSFORMREF_OFFSET UNITYSDK_OFFSET(0x19B2A9D0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_ISINCAMERAVISIBLERANGE_OFFSET UNITYSDK_OFFSET(0x19B2B8B0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19B2B2F0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x19B2B500)
#define MOLEMOLE_HUDITEMBASECONTROLLER_SETUNACTIVE_OFFSET UNITYSDK_OFFSET(0x19B2B450)
#define MOLEMOLE_HUDITEMBASECONTROLLER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19B2B340)
#define MOLEMOLE_HUDITEMBASECONTROLLER_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x19B2ADB0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_UPDATEHUDPOSITION_OFFSET UNITYSDK_OFFSET(0x19B2B600)
#define MOLEMOLE_HUDITEMBASECONTROLLER_UPDATEHUD_OFFSET UNITYSDK_OFFSET(0x19B2B670)
#define MOLEMOLE_HUDITEMBASECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B2BBA0)
#define MOLEMOLE_HUDITEMBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2BB90)
#define MOLEMOLE_HUDITEMBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19B2BBC0)

namespace MoleMole
{
	inline static constexpr unsigned int HudItemBaseController_TypeDefinitionIndex = 46069;

	class HudItemBaseController : public ::MoleMole::UIWindowController
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_InValidUIAnchoredPosition()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(HudItemBaseController_TypeDefinitionIndex)->GetStaticField(0x12CF0);
		}
		::UnityEngine::RectTransform* _rectTrans; // 0x318
		::System::Single _offset; // 0x320
		::UnityEngine::GameObject* _followTarget; // 0x328
		::System::UInt32 _entityID; // 0x330
		::UnityEngine::Transform* _followSpine; // 0x338
		::Class_3_C93CC3D2C2AC4067* modelComponent; // 0x340
		::Class_3_F97B015544BE936B* dataComponent; // 0x348
		::Class_3_7472FB6CC4015359* hudComponent; // 0x350
		::Class_3_F41D242A20F8FE06* abilityComponent; // 0x358
		::System::Boolean _enable; // 0x360
		::System::String* spineName; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get__rectTransformRef()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET__RECTTRANSFORMREF_OFFSET))(this);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_ENTITYID_OFFSET))(this);
		}

		::System::Single get_HeightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_HEIGHTOFFSET_OFFSET))(this);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_SET_FOLLOWTARGET_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_FollowTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_FOLLOWPOSITION_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetupView(::System::UInt32 entityId, ::UnityEngine::GameObject* target, ::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_SETUPVIEW_OFFSET))(this, entityId, target, offset);
		}

		::System::Void SetUnActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_SETUNACTIVE_OFFSET))(this);
		}

		::System::Void SetDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_SETDISABLE_OFFSET))(this);
		}

		::System::Void DoDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_DODESTROY_OFFSET))(this);
		}

		::System::Void UpdateHUDPosition(::UnityEngine::Vector2 screenPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_UPDATEHUDPOSITION_OFFSET))(this, screenPos);
		}

		::System::Void UpdateHUD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_UPDATEHUD_OFFSET))(this);
		}

		::System::Boolean IsInCameraVisibleRange(::UnityEngine::Bounds bounds, ::UnityEngine::Vector3 worldPos, ::System::Single heightOffset, ::UnityEngine::Vector2& vTargetScreenPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_ISINCAMERAVISIBLERANGE_OFFSET))(this, bounds, worldPos, heightOffset, vTargetScreenPos);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
