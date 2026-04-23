#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BezierCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PATHANIMATION_INIT_OFFSET UNITYSDK_OFFSET(0xAC405C0)
#define RPG_CLIENT_PATHANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC40930)
#define RPG_CLIENT_PATHANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xAC41100)

namespace RPG::Client
{
	inline static constexpr unsigned int PathAnimation_TypeDefinitionIndex = 65183;

	class PathAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::BezierCurve* Curve; // 0x18
		::UnityEngine::Transform* RootNode; // 0x20
		::System::Single StartPercent; // 0x28
		::System::Single EndPercent; // 0x2C
		::UnityEngine::Vector3 RotationOffset; // 0x30
		::System::Int32 SampleNum; // 0x3C
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _Nodes; // 0x40
		::System::Collections::Generic::List_1<::System::Single>* _Distance; // 0x48
		::System::Boolean _HasInit; // 0x50
		::System::Single _AllLength; // 0x54
		::UnityEngine::Transform* _EndNode; // 0x58
		::System::Boolean _OneNode; // 0x60
		::UnityEngine::Vector3 Field_5_12; // 0x64
		::UnityEngine::Vector3 Field_5_13; // 0x70
		::UnityEngine::Vector3 Field_5_14; // 0x7C
		::UnityEngine::Vector3 Field_5_15; // 0x88
		::UnityEngine::Vector3 Field_5_16; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PATHANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PATHANIMATION_INIT_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PATHANIMATION_LATEUPDATE_OFFSET))(this);
		}
	};
}
