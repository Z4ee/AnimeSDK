#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_ENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x125ABF80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EntityData_TypeDefinitionIndex = 58370;

	class EntityData : public ::System::Object
	{
	public:
		::System::UInt32 entityId; // 0x10
		::MoleMole::Config::EntityType entityType; // 0x14
		::System::String* entityOriginName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ENTITYDATA__CTOR_OFFSET))(this);
		}
	};
}
