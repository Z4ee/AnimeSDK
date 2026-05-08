#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEVECTOR3_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16B181A0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x16B182D0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDMakeVector3_TypeDefinitionIndex = 63787;

	class LDMakeVector3 : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEVECTOR3_REGISTERPORTS_OFFSET))(this);
		}
	};
}
