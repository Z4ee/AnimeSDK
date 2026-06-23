#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19007380)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x190074B0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDGetLastCameraData_TypeDefinitionIndex = 63843;

	class LDGetLastCameraData : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA_REGISTERPORTS_OFFSET))(this);
		}
	};
}
