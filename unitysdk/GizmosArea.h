#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GizmosArea_SHAPE.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define GIZMOSAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1561AE80)

inline static constexpr unsigned int GizmosArea_TypeDefinitionIndex = 45400;

class GizmosArea : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* m_Transform; // 0x18
	::GizmosArea_SHAPE m_Shape; // 0x20
	::UnityEngine::Color m_Color; // 0x24
	::UnityEngine::Vector3 m_Size; // 0x34
	::System::Single m_Radius; // 0x40
	::System::Single m_Theta; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIZMOSAREA__CTOR_OFFSET))(this);
	}
};
