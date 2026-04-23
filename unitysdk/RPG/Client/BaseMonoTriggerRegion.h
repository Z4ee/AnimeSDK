#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_591DD46947F040CB.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_521;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BASEMONOTRIGGERREGION_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x9DDBBE0)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0x9DDBC20)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_OVERLAP_OFFSET UNITYSDK_OFFSET(0x9DDBC80)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x9DDBB70)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_SYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9DDBCD0)
#define RPG_CLIENT_BASEMONOTRIGGERREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDBE20)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseMonoTriggerRegion_TypeDefinitionIndex = 63284;

	class BaseMonoTriggerRegion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_521* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION__CTOR_OFFSET))(this);
		}

		::System::Void SetTrigger(::Class_0_16E4307DCC419505_521* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_521*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_SETTRIGGER_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_521* GetTrigger()
		{
			return ((::Class_0_16E4307DCC419505_521*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_GETTRIGGER_OFFSET))(this);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_OVERLAPPOINT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Overlap(::UnityEngine::LayerMask a1)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_OVERLAP_OFFSET))(this, a1);
		}

		::System::Void SyncTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_SYNCTRANSFORM_OFFSET))(this, a1);
		}
	};
}
