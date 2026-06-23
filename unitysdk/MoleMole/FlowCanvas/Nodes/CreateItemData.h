#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CREATEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1C700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateItemData_TypeDefinitionIndex = 80234;

	class CreateItemData : public ::System::Object
	{
	public:
		::System::String* anchor; // 0x10
		::System::Single interval; // 0x18
		::MoleMole::GameplayTag tag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATEITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
