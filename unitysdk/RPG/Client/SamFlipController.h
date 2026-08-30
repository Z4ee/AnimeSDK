#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_491;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SAMFLIPCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE058540)
#define RPG_CLIENT_SAMFLIPCONTROLLER_COMPARETO_OFFSET UNITYSDK_OFFSET(0xE058A80)
#define RPG_CLIENT_SAMFLIPCONTROLLER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE058800)
#define RPG_CLIENT_SAMFLIPCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE058580)
#define RPG_CLIENT_SAMFLIPCONTROLLER_METHOD_5_0D262735D01CAB97_OFFSET UNITYSDK_OFFSET(0xE058810)
#define RPG_CLIENT_SAMFLIPCONTROLLER_PROCESS_OFFSET UNITYSDK_OFFSET(0xE058620)
#define RPG_CLIENT_SAMFLIPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE058BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SamFlipController_TypeDefinitionIndex = 70238;

	class SamFlipController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean NeedScale; // 0x18
		::UnityEngine::Transform* RootMNode; // 0x20
		::UnityEngine::Transform* MirrorRootMNode; // 0x28
		::UnityEngine::Transform* HeadMNode; // 0x30
		::UnityEngine::Transform* MirrorHeadMNode; // 0x38
		::UnityEngine::Vector3 NIDAPHBEMDE; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void Process(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER_PROCESS_OFFSET))(this, a1);
		}

		::System::Void Method_5_0D262735D01CAB97(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER_METHOD_5_0D262735D01CAB97_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareTo(::Class_0_16E4307DCC419505_491* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_491*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER_COMPARETO_OFFSET))(this, a1);
		}
	};
}
