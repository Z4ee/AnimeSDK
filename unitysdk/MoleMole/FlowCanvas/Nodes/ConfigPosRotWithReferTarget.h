#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPosRot.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1C5D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ConfigPosRotWithReferTarget_TypeDefinitionIndex = 80151;

	class ConfigPosRotWithReferTarget : public ::MoleMole::Config::ConfigPosRot
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET__CTOR_OFFSET))(this);
		}
	};
}
