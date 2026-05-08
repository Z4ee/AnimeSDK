#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16B17DB0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x16B17F30)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDBreakVector3_TypeDefinitionIndex = 64615;

	class LDBreakVector3 : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3_REGISTERPORTS_OFFSET))(this);
		}
	};
}
