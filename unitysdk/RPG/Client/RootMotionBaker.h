#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RootMotionHandler; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ROOTMOTIONBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0xDFD6D40)

namespace RPG::Client
{
	inline static constexpr unsigned int RootMotionBaker_TypeDefinitionIndex = 68783;

	class RootMotionBaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 BakeTestCount; // 0x18
		::System::Int32 bakeIter; // 0x1C
		::System::Single bakeDeltaTime; // 0x20
		::System::Single bakeProtectTime; // 0x24
		::UnityEngine::Animator* animator; // 0x28
		::RPG::Client::RootMotionHandler* handler; // 0x30
		::Il2CppArray<::RPG::Client::MovementStoppedRootMotionBakedData>* movementStoppedBakedArray; // 0x38
		::System::Action_2<::System::Int32, ::System::Single>* LDKDMEIAGJG; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* OINCGJJMAEF; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve>* FNABCHMGJBF; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKER__CTOR_OFFSET))(this);
		}
	};
}
