#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace MoleMole::FlatBuffers::Config { class AbyssS2AreaConfigTemplate; }

#define MOLEMOLE_FLOWCANVAS_LDREADABYSSS2AREACONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A040B80)
#define MOLEMOLE_FLOWCANVAS_LDREADABYSSS2AREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A040CA0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadAbyssS2AreaConfig_TypeDefinitionIndex = 76649;

	class LDReadAbyssS2AreaConfig : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::FlatBuffers::Config::AbyssS2AreaConfigTemplate*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADABYSSS2AREACONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::AbyssS2AreaConfigTemplate* Invoke()
		{
			return ((::MoleMole::FlatBuffers::Config::AbyssS2AreaConfigTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADABYSSS2AREACONFIG_INVOKE_OFFSET))(this);
		}
	};
}
