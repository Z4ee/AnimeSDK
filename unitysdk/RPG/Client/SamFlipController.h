#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_413;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SAMFLIPCONTROLLER_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB14EC10)
#define RPG_CLIENT_SAMFLIPCONTROLLER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB14E990)
#define RPG_CLIENT_SAMFLIPCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB14E710)
#define RPG_CLIENT_SAMFLIPCONTROLLER_METHOD_5_0D262735D01CAB97_OFFSET UNITYSDK_OFFSET(0xB14E9A0)
#define RPG_CLIENT_SAMFLIPCONTROLLER_PROCESS_OFFSET UNITYSDK_OFFSET(0xB14E7B0)
#define RPG_CLIENT_SAMFLIPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB14ECF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SamFlipController_TypeDefinitionIndex = 64782;

	class SamFlipController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean NeedScale; // 0x18
		::UnityEngine::Transform* RootMNode; // 0x20
		::UnityEngine::Transform* MirrorRootMNode; // 0x28
		::UnityEngine::Transform* HeadMNode; // 0x30
		::UnityEngine::Transform* MirrorHeadMNode; // 0x38
		::UnityEngine::Vector3 Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER__CTOR_OFFSET))(this);
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

		::System::Int32 CompareTo(::Class_0_16E4307DCC419505_413* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SAMFLIPCONTROLLER_COMPARETO_OFFSET))(this, a1);
		}
	};
}
