#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline { class CharacterBodyControlData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_7EB1E590D70CF358_METHOD_3_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xB7A1050)
#define CLASS_3_7EB1E590D70CF358_METHOD_3_E971987D3EE22EF7_OFFSET UNITYSDK_OFFSET(0xB7A12D0)
#define CLASS_3_7EB1E590D70CF358__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A1480)

inline static constexpr unsigned int Class_3_7EB1E590D70CF358_TypeDefinitionIndex = 47937;

class Class_3_7EB1E590D70CF358 : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::RPGTools::Timeline::CharacterBodyControlData* EABKOHGCHFP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7EB1E590D70CF358__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7EB1E590D70CF358_METHOD_3_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_E971987D3EE22EF7(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_7EB1E590D70CF358_METHOD_3_E971987D3EE22EF7_OFFSET))(this, a1);
	}
};
