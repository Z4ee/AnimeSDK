#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDCLICKEDOUTSIDEHANDLER_OFFSET UNITYSDK_OFFSET(0xA917720)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDIGNORERECT_1_OFFSET UNITYSDK_OFFSET(0xA917B10)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDIGNORERECT_OFFSET UNITYSDK_OFFSET(0xA917A40)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_CLEARIGNORERECTS_OFFSET UNITYSDK_OFFSET(0xA917C80)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9182C0)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_REMOVEIGNORERECT_OFFSET UNITYSDK_OFFSET(0xA917BF0)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_SETDEFAULTCAMERA_OFFSET UNITYSDK_OFFSET(0xA9177D0)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_SETIGNORESELF_OFFSET UNITYSDK_OFFSET(0xA917780)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA917D20)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA918310)
#define RPG_CLIENT_MONOCLICKOUTSIDEDETECT__ISPOINTINIGNORERECT_OFFSET UNITYSDK_OFFSET(0xA917EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoClickOutsideDetect_TypeDefinitionIndex = 66869;

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

		::System::Void AddClickedOutsideHandler(::System::Action_1<::System::Object*>* handler, ::System::Object* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDCLICKEDOUTSIDEHANDLER_OFFSET))(this, handler, listener);
		}

		::System::Void SetIgnoreSelf(::System::Boolean ignoreSelf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_SETIGNORESELF_OFFSET))(this, ignoreSelf);
		}

		::System::Void SetDefaultCamera(::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_SETDEFAULTCAMERA_OFFSET))(this, cam);
		}

		::System::Void AddIgnoreRect(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDIGNORERECT_OFFSET))(this, rectTransform);
		}

		::System::Void AddIgnoreRect_1(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_ADDIGNORERECT_1_OFFSET))(this, rectTransform, cam);
		}

		::System::Void RemoveIgnoreRect(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT_REMOVEIGNORERECT_OFFSET))(this, rectTransform);
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

		::System::Boolean _IsPointInIgnoreRect(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLICKOUTSIDEDETECT__ISPOINTINIGNORERECT_OFFSET))(this, point);
		}
	};
}
