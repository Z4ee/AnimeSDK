#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1306A7D0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1306A950)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDBreakFinalCameraData_TypeDefinitionIndex = 45872;

	class LDBreakFinalCameraData : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA_REGISTERPORTS_OFFSET))(this);
		}
	};
}
