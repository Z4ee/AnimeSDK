#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_A4210F3B50001C5D_METHOD_1_7D64A8BD5E366D95_OFFSET UNITYSDK_OFFSET(0x13AC1660)
#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_A4210F3B50001C5D__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC1650)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_Class_1_A4210F3B50001C5D_TypeDefinitionIndex = 75838;

	class MonoLayoutTween_Class_1_A4210F3B50001C5D : public ::System::Object
	{
	public:
		::System::Action* Field_1_6; // 0x10
		::MoleMole::MonoLayoutTween* Field_1_7; // 0x18
		::UnityEngine::GameObject* Field_1_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_A4210F3B50001C5D__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_7D64A8BD5E366D95()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_A4210F3B50001C5D_METHOD_1_7D64A8BD5E366D95_OFFSET))(this);
		}
	};
}
