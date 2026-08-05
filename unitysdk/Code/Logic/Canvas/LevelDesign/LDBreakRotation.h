#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x124F14C0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x124F1640)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDBreakRotation_TypeDefinitionIndex = 76182;

	class LDBreakRotation : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION_REGISTERPORTS_OFFSET))(this);
		}
	};
}
