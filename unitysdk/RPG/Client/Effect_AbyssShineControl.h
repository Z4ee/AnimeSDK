#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class Effect_AbyssShineControl_ShineControlStruct; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_CREATECONTROLPOINT_OFFSET UNITYSDK_OFFSET(0xA1BB5A0)
#define RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA1BBD40)
#define RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xA1BC090)
#define RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_SETDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1BBA50)
#define RPG_CLIENT_EFFECT_ABYSSSHINECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA1BC2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AbyssShineControl_TypeDefinitionIndex = 64923;

	class Effect_AbyssShineControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* ShineTrans; // 0x18
		::System::Single MainDistance; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::Effect_AbyssShineControl_ShineControlStruct*>* ControlList; // 0x28
		::UnityEngine::AnimationCurve* WeightCurve; // 0x30
		::System::Single PositionWeight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSSHINECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void CreateControlPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_CREATECONTROLPOINT_OFFSET))(this);
		}

		::System::Void SetDistance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_SETDISTANCE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
