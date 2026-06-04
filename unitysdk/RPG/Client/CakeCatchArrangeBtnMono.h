#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0xB460DE0)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_CLEARBUTTONCONFIG_OFFSET UNITYSDK_OFFSET(0xB460FD0)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB461010)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_SETBUTTONCONFIG_OFFSET UNITYSDK_OFFSET(0xB460F70)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xB461660)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO__GETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xB461500)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO__GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xB461270)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeBtnMono_TypeDefinitionIndex = 58909;

	class CakeCatchArrangeBtnMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 BTN_TYPE_GROUND = 0x1; // 0x0
		// static const ::System::Int32 BTN_TYPE_GROUND_CAT = 0x2; // 0x0
		// static const ::System::Int32 BTN_TYPE_SHELF = 0x3; // 0x0
		// static const ::System::Int32 BTN_TYPE_SHELF_CAT = 0x4; // 0x0
		::UnityEngine::RectTransform* _rectTransform; // 0x18
		::UnityEngine::RectTransform* _parentRectTransform; // 0x20
		::System::Boolean _isInitialized; // 0x28
		::System::Int32 _btnType; // 0x2C
		::System::Int32 _index; // 0x30
		::System::Int32 _subIndex; // 0x34
		::System::Boolean _hasButtonConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_AWAKE_OFFSET))(this);
		}

		::System::Void SetButtonConfig(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_SETBUTTONCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearButtonConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_CLEARBUTTONCONFIG_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO__GETWORLDPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO__GETANCHORPOSITION_OFFSET))(this);
		}
	};
}
