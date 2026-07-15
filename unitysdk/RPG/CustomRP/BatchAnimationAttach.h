#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BAAttachPoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define RPG_CUSTOMRP_BATCHANIMATIONATTACH_ATTACHTRANS_OFFSET UNITYSDK_OFFSET(0x177FE520)
#define RPG_CUSTOMRP_BATCHANIMATIONATTACH_DETACHTRANS_OFFSET UNITYSDK_OFFSET(0x177FE660)
#define RPG_CUSTOMRP_BATCHANIMATIONATTACH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x177FE840)
#define RPG_CUSTOMRP_BATCHANIMATIONATTACH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x177FE7A0)
#define RPG_CUSTOMRP_BATCHANIMATIONATTACH__CTOR_OFFSET UNITYSDK_OFFSET(0x177FE850)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BatchAnimationAttach_TypeDefinitionIndex = 36046;

	class BatchAnimationAttach : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::BAAttachPoint attachPoint; // 0x18
		::System::Collections::Generic::List_1<::RPG::CustomRP::BAAttachPoint>* attachPointEx; // 0x28
		::UnityEngine::Rendering::BatchAnimationInstance* instance; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONATTACH__CTOR_OFFSET))(this);
		}

		::System::Void AttachTrans()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONATTACH_ATTACHTRANS_OFFSET))(this);
		}

		::System::Void DetachTrans()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONATTACH_DETACHTRANS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONATTACH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONATTACH_ONDISABLE_OFFSET))(this);
		}
	};
}
