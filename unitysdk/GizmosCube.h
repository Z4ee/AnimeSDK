#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define GIZMOSCUBE_START_OFFSET UNITYSDK_OFFSET(0xEC95B00)
#define GIZMOSCUBE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC95C70)

inline static constexpr unsigned int GizmosCube_TypeDefinitionIndex = 43828;

class GizmosCube : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* m_Transform; // 0x18
	::System::Int32 m_Id; // 0x20
	::System::String* m_MyName; // 0x28
	::System::Int32 m_Enable; // 0x30
	::UnityEngine::Vector3 m_Size; // 0x34
	::UnityEngine::Color m_Color; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIZMOSCUBE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIZMOSCUBE_START_OFFSET))(this);
	}
};
