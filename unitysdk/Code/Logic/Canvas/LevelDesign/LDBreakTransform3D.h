#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKTRANSFORM3D_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12F169A0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKTRANSFORM3D__CTOR_OFFSET UNITYSDK_OFFSET(0x12F16B20)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDBreakTransform3D_TypeDefinitionIndex = 45497;

	class LDBreakTransform3D : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKTRANSFORM3D__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKTRANSFORM3D_REGISTERPORTS_OFFSET))(this);
		}
	};
}
