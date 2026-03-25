#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ClientInputData; }
namespace RPG::Client { class ModelUI3DModeConstraint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_BLENDTOORIGIN_OFFSET UNITYSDK_OFFSET(0xAAF5D00)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAF5450)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_GET_ENABLEDRAGROTATE_OFFSET UNITYSDK_OFFSET(0xAAF5E60)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAAF54A0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAAF5880)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xAAF55D0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xAAF57B0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_RESETTOORIGIN_OFFSET UNITYSDK_OFFSET(0xAAF5C50)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETCAMERATRANS_OFFSET UNITYSDK_OFFSET(0xAAF5E10)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETROTATETARGET_OFFSET UNITYSDK_OFFSET(0xAAF5830)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SET_ENABLEDRAGROTATE_OFFSET UNITYSDK_OFFSET(0xAAF5E70)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF5FF0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKBLEND_OFFSET UNITYSDK_OFFSET(0xAAF58F0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKDRAG_OFFSET UNITYSDK_OFFSET(0xAAF5A30)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKMODELCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xAAF5B70)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0xAAF5E80)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAAF6060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DModelRotateComponent_TypeDefinitionIndex = 46375;

	class UI3DModelRotateComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		// static const ::System::Single BLEND_DURATION; // 0x0
		// static const ::System::Single _ROTATE_SCALE; // 0x0
		::RPG::Client::ClientInputData* _InputDataRef; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ModelUI3DModeConstraint*>* _modelUI3DModeConstraints; // 0x20
		::UnityEngine::Transform* _RotateTarget; // 0x28
		::UnityEngine::Transform* _CameraTrans; // 0x30
		::System::Boolean _EnableDragRotate_k__BackingField; // 0x38
		::System::Single _BeginBlendEular; // 0x3C
		::System::Single _BeginBlendStamp; // 0x40
		::UnityEngine::Vector3 _CacheEuler; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void SetRotateTarget(::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETROTATETARGET_OFFSET))(this, target);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ResetToOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_RESETTOORIGIN_OFFSET))(this);
		}

		::System::Void BlendToOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_BLENDTOORIGIN_OFFSET))(this);
		}

		::System::Void SetCameraTrans(::UnityEngine::Transform* cameraTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETCAMERATRANS_OFFSET))(this, cameraTrans);
		}

		::System::Boolean get_EnableDragRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_GET_ENABLEDRAGROTATE_OFFSET))(this);
		}

		::System::Void set_EnableDragRotate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SET_ENABLEDRAGROTATE_OFFSET))(this, value);
		}

		::System::Void _UpdateRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__UPDATEROTATION_OFFSET))(this);
		}

		::System::Void _TickBlend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKBLEND_OFFSET))(this);
		}

		::System::Void _TickDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKDRAG_OFFSET))(this);
		}

		::System::Void _TickModelConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKMODELCONSTRAINTS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}
