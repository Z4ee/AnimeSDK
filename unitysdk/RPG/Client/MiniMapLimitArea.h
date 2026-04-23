#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0A24888DF04C995E_2;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MINIMAPLIMITAREA_METHOD_5_998B92774C65B108_OFFSET UNITYSDK_OFFSET(0xA89CD40)
#define RPG_CLIENT_MINIMAPLIMITAREA_METHOD_5_BD96CD5B662D5F6C_OFFSET UNITYSDK_OFFSET(0xA89CC90)
#define RPG_CLIENT_MINIMAPLIMITAREA_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA89CBA0)
#define RPG_CLIENT_MINIMAPLIMITAREA_REFRESH_OFFSET UNITYSDK_OFFSET(0xA89C890)
#define RPG_CLIENT_MINIMAPLIMITAREA__CTOR_OFFSET UNITYSDK_OFFSET(0xA89CE40)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapLimitArea_TypeDefinitionIndex = 63562;

	class MiniMapLimitArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* Field_5_0; // 0x18
		::UnityEngine::GameObject* _LimitAreaNormal; // 0x20
		::UnityEngine::GameObject* _LimitAreaEdge; // 0x28
		::System::Single _LimitAreaPercentNormal; // 0x30
		::System::Single _LimitAreaPercentEdge; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA__CTOR_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_0A24888DF04C995E_2* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_2*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_REFRESH_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Boolean Method_5_BD96CD5B662D5F6C(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_METHOD_5_BD96CD5B662D5F6C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_998B92774C65B108(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_METHOD_5_998B92774C65B108_OFFSET))(this, a1, a2, a3);
		}
	};
}
