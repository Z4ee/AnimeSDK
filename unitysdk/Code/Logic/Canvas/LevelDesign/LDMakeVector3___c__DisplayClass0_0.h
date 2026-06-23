#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEVECTOR3___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x118410D0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEVECTOR3___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x118410E0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDMakeVector3___c__DisplayClass0_0_TypeDefinitionIndex = 62185;

	class LDMakeVector3___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* x; // 0x10
		::FlowCanvas::ValueInput_1<::System::Single>* y; // 0x18
		::FlowCanvas::ValueInput_1<::System::Single>* z; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEVECTOR3___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEVECTOR3___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
