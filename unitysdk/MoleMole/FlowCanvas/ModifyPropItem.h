#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_MODIFYPROPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x177FCDB0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ModifyPropItem_TypeDefinitionIndex = 64631;

	class ModifyPropItem : public ::System::Object
	{
	public:
		::MoleMole::Config::BaseProperty Property; // 0x10
		::System::Int32 delta; // 0x14
		::System::Int32 ratio; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPITEM__CTOR_OFFSET))(this);
		}
	};
}
