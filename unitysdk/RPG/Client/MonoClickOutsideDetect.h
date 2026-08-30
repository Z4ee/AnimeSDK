#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDCLICKEDOUTSIDEHANDLER_OFFSET UNITYSDK_OFFSET(0x19E32E10)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDIGNORERECT_1_OFFSET UNITYSDK_OFFSET(0x19E32FE0)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDIGNORERECT_OFFSET UNITYSDK_OFFSET(0x19E32F10)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_CLEARIGNORERECTS_OFFSET UNITYSDK_OFFSET(0x19E33150)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19E33760)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_REMOVEIGNORERECT_OFFSET UNITYSDK_OFFSET(0x19E330C0)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_SETDEFAULTCAMERA_OFFSET UNITYSDK_OFFSET(0x19E32EC0)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_SETIGNORESELF_OFFSET UNITYSDK_OFFSET(0x19E32E70)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E331E0)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E337B0)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT__ISPOINTINIGNORERECT_OFFSET UNITYSDK_OFFSET(0x19E33390)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoClickOutsideDetect_TypeDefinitionIndex = 72501;

	class MonoClickOutsideDetect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::RectTransform*, ::UnityEngine::Camera*>* _IgnoreRectTransforms; // 0x18
		::System::Object* _Listener; // 0x20
		::System::Action_1<::System::Object*>* _OnClickedOutside; // 0x28
		::System::Boolean _IgnoreSelf; // 0x30
		::UnityEngine::Camera* _DefaultCamera; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT__CTOR_OFFSET))(this);
		}

		::System::Void AddClickedOutsideHandler(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDCLICKEDOUTSIDEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void SetIgnoreSelf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_SETIGNORESELF_OFFSET))(this, a1);
		}

		::System::Void SetDefaultCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_SETDEFAULTCAMERA_OFFSET))(this, a1);
		}

		::System::Void AddIgnoreRect(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDIGNORERECT_OFFSET))(this, a1);
		}

		::System::Void AddIgnoreRect_1(::UnityEngine::RectTransform* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDIGNORERECT_1_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveIgnoreRect(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_REMOVEIGNORERECT_OFFSET))(this, a1);
		}

		::System::Void ClearIgnoreRects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_CLEARIGNORERECTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean _IsPointInIgnoreRect(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT__ISPOINTINIGNORERECT_OFFSET))(this, a1);
		}
	};
}
