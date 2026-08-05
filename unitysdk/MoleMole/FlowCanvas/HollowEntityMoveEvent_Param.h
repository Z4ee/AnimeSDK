#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_FLOWCANVAS_HOLLOWENTITYMOVEEVENT_PARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x586780)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HollowEntityMoveEvent_Param_TypeDefinitionIndex = 75751;

	struct alignas(4) HollowEntityMoveEvent_Param
	{
		::System::UInt32 entityRuntimeID; // 0x10
		::System::Int32 entityPreIndex; // 0x14
		::System::Int32 entityCurIndex; // 0x18

		::System::Void _ctor(::System::UInt32 entityRuntimeID, ::System::Int32 entityPreIndex, ::System::Int32 entityCurIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HOLLOWENTITYMOVEEVENT_PARAM__CTOR_OFFSET))(this, entityRuntimeID, entityPreIndex, entityCurIndex);
		}
	};
}
