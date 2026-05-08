#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class CCDIK; }

#define ROOTMOTION_FINALIK_CCDBENDGOAL_BEFOREIK_OFFSET UNITYSDK_OFFSET(0x1BE16790)
#define ROOTMOTION_FINALIK_CCDBENDGOAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BE16B70)
#define ROOTMOTION_FINALIK_CCDBENDGOAL_START_OFFSET UNITYSDK_OFFSET(0x1BE166C0)
#define ROOTMOTION_FINALIK_CCDBENDGOAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE16D30)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int CCDBendGoal_TypeDefinitionIndex = 36693;

	class CCDBendGoal : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::CCDIK* ik; // 0x18
		::System::Single weight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDBENDGOAL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDBENDGOAL_START_OFFSET))(this);
		}

		::System::Void BeforeIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDBENDGOAL_BEFOREIK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDBENDGOAL_ONDESTROY_OFFSET))(this);
		}
	};
}
