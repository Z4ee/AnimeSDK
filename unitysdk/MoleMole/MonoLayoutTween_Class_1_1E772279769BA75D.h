#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_1E772279769BA75D_METHOD_1_896FA9EAB4C29FB4_OFFSET UNITYSDK_OFFSET(0x16CD9510)
#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_1E772279769BA75D__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD9500)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_Class_1_1E772279769BA75D_TypeDefinitionIndex = 42439;

	class MonoLayoutTween_Class_1_1E772279769BA75D : public ::System::Object
	{
	public:
		::MoleMole::MonoLayoutTween* Field_1_1; // 0x10
		::System::Action* Field_1_2; // 0x18
		::UnityEngine::GameObject* Field_1_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_1E772279769BA75D__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_896FA9EAB4C29FB4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_1E772279769BA75D_METHOD_1_896FA9EAB4C29FB4_OFFSET))(this);
		}
	};
}
