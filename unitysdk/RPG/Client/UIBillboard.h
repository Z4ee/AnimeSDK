#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIBILLBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x17000140)
#define RPG_CLIENT_UIBILLBOARD_CLEARLATETICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x170000F0)
#define RPG_CLIENT_UIBILLBOARD_GETCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x16FFFEB0)
#define RPG_CLIENT_UIBILLBOARD_GETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17000010)
#define RPG_CLIENT_UIBILLBOARD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17000340)
#define RPG_CLIENT_UIBILLBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17000650)
#define RPG_CLIENT_UIBILLBOARD_SETISLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0x16FFFE60)
#define RPG_CLIENT_UIBILLBOARD_SETLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x17000090)
#define RPG_CLIENT_UIBILLBOARD_SETPOSITIONXOFFSET_OFFSET UNITYSDK_OFFSET(0x16FFFCF0)
#define RPG_CLIENT_UIBILLBOARD_SETPOSITIONYOFFSET_OFFSET UNITYSDK_OFFSET(0x16FFFD50)
#define RPG_CLIENT_UIBILLBOARD_SETPOSITIONZOFFSET_OFFSET UNITYSDK_OFFSET(0x16FFFDB0)
#define RPG_CLIENT_UIBILLBOARD_SETSHOWMODE_OFFSET UNITYSDK_OFFSET(0x16FFFC50)
#define RPG_CLIENT_UIBILLBOARD_SETSHOWTOP_OFFSET UNITYSDK_OFFSET(0x16FFFE10)
#define RPG_CLIENT_UIBILLBOARD_SETTARGET_OFFSET UNITYSDK_OFFSET(0x16FFFCA0)
#define RPG_CLIENT_UIBILLBOARD_SETTICKACTIVE_OFFSET UNITYSDK_OFFSET(0x16FFFBE0)
#define RPG_CLIENT_UIBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x17000EB0)
#define RPG_CLIENT_UIBILLBOARD__SETUPBILLBOARD_OFFSET UNITYSDK_OFFSET(0x170003E0)
#define RPG_CLIENT_UIBILLBOARD__SETUPORTHOGRAPHICPOSITION_OFFSET UNITYSDK_OFFSET(0x17000C10)
#define RPG_CLIENT_UIBILLBOARD__SETUPORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0x170006A0)
#define RPG_CLIENT_UIBILLBOARD__SETUPPERSPECTIVESIZE_OFFSET UNITYSDK_OFFSET(0x17000D90)
#define RPG_CLIENT_UIBILLBOARD__TICKLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x170005E0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIBillboard_TypeDefinitionIndex = 69045;

	class UIBillboard : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 AMPLIFY_FACTOR = 0x3E8; // 0x0
		// static const ::System::String* _MAX_HEIGHT_ID; // 0x0
		// static const ::System::String* _MIN_HEIGHT_ID; // 0x0
		// static const ::System::String* _FIX_SIZE_FACTOR_ID; // 0x0
		// static const ::System::Single _SHOW_DISTANCE_FAR; // 0x0
		// static const ::System::Single _SHOW_DISTANCE_NEAR; // 0x0
		// static const ::System::Single _SHOW_DISTANCE_LEN; // 0x0
		// static const ::System::Single _SCALE_FAR; // 0x0
		// static const ::System::Single _SCALE_NEAR; // 0x0
		::System::Action_2<::XLua::LuaTable*, ::System::Single>* _lateUpdateCallback; // 0x18
		::XLua::LuaTable* _lateUpdateLuaSelf; // 0x20
		::System::Boolean _IsTicking; // 0x28
		::System::Boolean _IsOrthographic; // 0x29
		::System::Boolean _IsLookAtCamera; // 0x2A
		::System::Single _PositionXOffset; // 0x2C
		::System::Single _PositionYOffset; // 0x30
		::System::Single _PositionZOffset; // 0x34
		::System::Boolean _ShowTop; // 0x38
		::System::Single _FixSizeFactor; // 0x3C
		::UnityEngine::Transform* _TargetTransform; // 0x40
		::UnityEngine::RectTransform* _RectTransform; // 0x48
		::UnityEngine::Camera* _Camera; // 0x50
		::System::Single _FitRatio; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD__CTOR_OFFSET))(this);
		}

		::System::Void SetTickActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETTICKACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetShowMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETSHOWMODE_OFFSET))(this, a1);
		}

		::System::Void SetTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETTARGET_OFFSET))(this, a1);
		}

		::System::Void SetPositionXOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETPOSITIONXOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetPositionYOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETPOSITIONYOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetPositionZOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETPOSITIONZOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetShowTop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETSHOWTOP_OFFSET))(this, a1);
		}

		::System::Void SetIsLookAtCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETISLOOKATCAMERA_OFFSET))(this, a1);
		}

		::System::Single GetCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_GETCAMERADISTANCE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_GETRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void SetLateUpdateCallback(::System::Action_2<::XLua::LuaTable*, ::System::Single>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Single>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_SETLATEUPDATECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void ClearLateTickCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_CLEARLATETICKCALLBACK_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void _SetupBillboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD__SETUPBILLBOARD_OFFSET))(this);
		}

		::System::Void _SetupPerspectiveSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD__SETUPPERSPECTIVESIZE_OFFSET))(this, a1);
		}

		::System::Void _SetupOrthographicSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD__SETUPORTHOGRAPHICSIZE_OFFSET))(this);
		}

		::System::Void _SetupOrthographicPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD__SETUPORTHOGRAPHICPOSITION_OFFSET))(this);
		}

		::System::Void _TickLateUpdateCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBILLBOARD__TICKLATEUPDATECALLBACK_OFFSET))(this);
		}
	};
}
