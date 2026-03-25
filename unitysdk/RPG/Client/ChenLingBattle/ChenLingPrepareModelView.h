#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_CLOSESHADOW_OFFSET UNITYSDK_OFFSET(0x9335FF0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x93362D0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9336280)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_OPENSHADOW_OFFSET UNITYSDK_OFFSET(0x9335F90)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0x9335EA0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SHOWPOSM_OFFSET UNITYSDK_OFFSET(0x9336050)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9336320)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingPrepareModelView_TypeDefinitionIndex = 62163;

	class ChenLingPrepareModelView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _DitherAlpha; // 0x18
		::RPG::Client::BaseShaderPropertyTransition* _Transition; // 0x20
		::UnityEngine::MeshRenderer* _MeshRenderer; // 0x28
		::System::Boolean _EnabledPOSM; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetDitherAlpha(::System::Boolean isDimmed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SETDITHERALPHA_OFFSET))(this, isDimmed);
		}

		::System::Void OpenShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_OPENSHADOW_OFFSET))(this);
		}

		::System::Void CloseShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_CLOSESHADOW_OFFSET))(this);
		}

		::System::Void ShowPOSM(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SHOWPOSM_OFFSET))(this, enable);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDESTROY_OFFSET))(this);
		}
	};
}
