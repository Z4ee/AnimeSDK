#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xEBDDA80)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_GET_FOLLOWPOS_OFFSET UNITYSDK_OFFSET(0xEBDD880)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ISINCAMERAVISIBLERANGE_OFFSET UNITYSDK_OFFSET(0xEBE0510)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_LERPCLOSETO_OFFSET UNITYSDK_OFFSET(0xEBE0A60)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_LINEFRAMEANIMATION2_OFFSET UNITYSDK_OFFSET(0xEBE06F0)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0xEBDDE30)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xEBDF550)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONLOCALAVATARCHANGED_OFFSET UNITYSDK_OFFSET(0xEBE0B40)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xEBDF3C0)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEBDDC60)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0xEBE09A0)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEAFTERCAMERALATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEBDF6D0)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEFOLLOWINFO_OFFSET UNITYSDK_OFFSET(0xEBDDFB0)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEHUDOFFSETX_OFFSET UNITYSDK_OFFSET(0xEBDFD30)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEHUDOFFSETY_OFFSET UNITYSDK_OFFSET(0xEBDF730)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEPOS_OFFSET UNITYSDK_OFFSET(0xEBDE390)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE0BA0)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0xEBE0BC0)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xEBE0CF0)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xEBE0D00)
#define MONOINLEVELLOCALROLEHUDUICONTROLLERBASE___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEBE0C50)

inline static constexpr unsigned int MonoInLevelLocalRoleHudUIControllerBase_TypeDefinitionIndex = 47405;

class MonoInLevelLocalRoleHudUIControllerBase : public ::MonoCustomPropertyUIControllerBase
{
public:
	::UnityEngine::GameObject* _followTarget; // 0x348
	::Class_3_DFD5D1FDB9D2A4AC* _followModelComponent; // 0x350
	::MoleMole::CharacterScriptConfig* _followCharacterScriptConfig; // 0x358
	::UnityEngine::Transform* _followSpineTrans; // 0x360
	::UnityEngine::Vector3 _lastInfoPosWorld; // 0x368
	::System::Single _dynamicHudOffsetX; // 0x374
	::System::Single _dynamicHudOffsetY; // 0x378
	::UnityEngine::Vector2 lastPos; // 0x37C
	::System::Single _hudOffsetX; // 0x384
	::System::Single _hudOffsetY; // 0x388

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_FollowPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_GET_FOLLOWPOS_OFFSET))(this);
	}

	::UnityEngine::Bounds get_Bounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_GET_BOUNDS_OFFSET))(this);
	}

	::System::Void OnUIDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONUIDESTROY_OFFSET))(this);
	}

	::System::Void OnAttachEntity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONATTACHENTITY_OFFSET))(this);
	}

	::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONSHOW_OFFSET))(this, showCtrlContext);
	}

	::System::Void OnHide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONHIDE_OFFSET))(this);
	}

	::System::Void UpdateAfterCameraLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEAFTERCAMERALATEUPDATE_OFFSET))(this);
	}

	::System::Void UpdatePos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEPOS_OFFSET))(this);
	}

	::System::Single UpdateHudOffsetX()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEHUDOFFSETX_OFFSET))(this);
	}

	::System::Single UpdateHudOffsetY()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEHUDOFFSETY_OFFSET))(this);
	}

	::System::Single LerpCloseTo(::System::Single src, ::System::Single target, ::System::Single step)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_LERPCLOSETO_OFFSET))(this, src, target, step);
	}

	::System::Boolean IsInCameraVisibleRange(::UnityEngine::Bounds bounds, ::UnityEngine::Vector3 worldPos, ::UnityEngine::Vector2& vTargetScreenPos)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ISINCAMERAVISIBLERANGE_OFFSET))(this, bounds, worldPos, vTargetScreenPos);
	}

	::System::Void LineFrameAnimation2(::System::Single targetLen)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_LINEFRAMEANIMATION2_OFFSET))(this, targetLen);
	}

	::System::Void OnVisible(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONVISIBLE_OFFSET))(this, v);
	}

	::System::Void UpdateFollowInfo(::MoleMole::Battle::Entity* tgtEntity)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_UPDATEFOLLOWINFO_OFFSET))(this, tgtEntity);
	}

	::System::Void OnLocalAvatarChanged(::MoleMole::Battle::Entity* preEntity, ::MoleMole::Battle::Entity* toEntity)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE_ONLOCALAVATARCHANGED_OFFSET))(this, preEntity, toEntity);
	}

	::System::Void __base_OnAttachEntity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE___BASE_ONATTACHENTITY_OFFSET))(this);
	}

	::System::Void __base_OnUIDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE___BASE_ONUIDESTROY_OFFSET))(this);
	}

	::System::Void __base_OnHide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE___BASE_ONHIDE_OFFSET))(this);
	}

	::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MONOINLEVELLOCALROLEHUDUICONTROLLERBASE___BASE_ONSHOW_OFFSET))(this, P0);
	}
};
