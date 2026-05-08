#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_CLASS_1_F271B7271E55C989__CTOR_OFFSET UNITYSDK_OFFSET(0x10E4A540)

namespace MoleMole::NAPCameras::Utils
{
	inline static constexpr unsigned int DebugDraw_Class_1_F271B7271E55C989_TypeDefinitionIndex = 69873;

	class DebugDraw_Class_1_F271B7271E55C989 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Field_1_0; // 0x10
		::System::Int32 Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_CLASS_1_F271B7271E55C989__CTOR_OFFSET))(this);
		}
	};
}
