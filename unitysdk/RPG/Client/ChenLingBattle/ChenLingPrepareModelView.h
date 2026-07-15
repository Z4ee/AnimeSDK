#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_CLOSESHADOW_OFFSET UNITYSDK_OFFSET(0x19651260)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19651540)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x196514F0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_OPENSHADOW_OFFSET UNITYSDK_OFFSET(0x19651200)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0x19651110)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SHOWPOSM_OFFSET UNITYSDK_OFFSET(0x196512C0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19651590)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingPrepareModelView_TypeDefinitionIndex = 72487;

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

		::System::Void SetDitherAlpha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SETDITHERALPHA_OFFSET))(this, a1);
		}

		::System::Void OpenShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_OPENSHADOW_OFFSET))(this);
		}

		::System::Void CloseShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_CLOSESHADOW_OFFSET))(this);
		}

		::System::Void ShowPOSM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SHOWPOSM_OFFSET))(this, a1);
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
