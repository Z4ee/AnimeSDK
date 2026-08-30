#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_ADD_ONISCONTAINEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C297670)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_FORCEIMMEDIATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C297780)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_GET_AREA_OFFSET UNITYSDK_OFFSET(0x1C297530)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_GET_ISCONTAINED_OFFSET UNITYSDK_OFFSET(0x1C2975C0)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1C2973F0)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_REMOVE_ONISCONTAINEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C2976D0)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_SET_AREA_OFFSET UNITYSDK_OFFSET(0x1C297570)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_SET_ISCONTAINED_OFFSET UNITYSDK_OFFSET(0x1C297600)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1C297430)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_SUBSCRIBEISCONTAINEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C2977D0)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C297730)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT__CHECKISCONTAINED_OFFSET UNITYSDK_OFFSET(0x1C297900)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C297B20)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT__UPDATEISCONTAINED_OFFSET UNITYSDK_OFFSET(0x1C297480)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIPivotContainmentDetect_TypeDefinitionIndex = 72541;

	class MonoUIPivotContainmentDetect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _Pivot; // 0x18
		::UnityEngine::RectTransform* _Area; // 0x20
		::System::Boolean _IsContained; // 0x28
		::System::Action* OnIsContainedChanged; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_Pivot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_GET_PIVOT_OFFSET))(this);
		}

		::System::Void set_Pivot(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_SET_PIVOT_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_Area()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_GET_AREA_OFFSET))(this);
		}

		::System::Void set_Area(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_SET_AREA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsContained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_GET_ISCONTAINED_OFFSET))(this);
		}

		::System::Void set_IsContained(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_SET_ISCONTAINED_OFFSET))(this, a1);
		}

		::System::Void add_OnIsContainedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_ADD_ONISCONTAINEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsContainedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_REMOVE_ONISCONTAINEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_UPDATE_OFFSET))(this);
		}

		::System::Void ForceImmediateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_FORCEIMMEDIATEUPDATE_OFFSET))(this);
		}

		::System::Action* SubscribeIsContainedChanged(::System::Action* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT_SUBSCRIBEISCONTAINEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void _UpdateIsContained()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT__UPDATEISCONTAINED_OFFSET))(this);
		}

		::System::Boolean _CheckIsContained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT__CHECKISCONTAINED_OFFSET))(this);
		}
	};
}
