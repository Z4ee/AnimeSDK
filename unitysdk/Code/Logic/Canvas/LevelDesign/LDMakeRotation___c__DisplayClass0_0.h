#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEROTATION___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B17F70)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEROTATION___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x16B17F80)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDMakeRotation___c__DisplayClass0_0_TypeDefinitionIndex = 44381;

	class LDMakeRotation___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* roll; // 0x10
		::FlowCanvas::ValueInput_1<::System::Single>* pitch; // 0x18
		::FlowCanvas::ValueInput_1<::System::Single>* yaw; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEROTATION___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion _RegisterPorts_b__0()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEROTATION___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
