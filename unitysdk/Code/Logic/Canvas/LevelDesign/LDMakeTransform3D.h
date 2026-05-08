#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x117039D0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D__CTOR_OFFSET UNITYSDK_OFFSET(0x11703B00)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDMakeTransform3D_TypeDefinitionIndex = 40683;

	class LDMakeTransform3D : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D_REGISTERPORTS_OFFSET))(this);
		}
	};
}
