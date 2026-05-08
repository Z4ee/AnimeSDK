#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE91BCD0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0xE91BCE0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION___C__DISPLAYCLASS0_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0xE91BD90)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION___C__DISPLAYCLASS0_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0xE91BE40)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDBreakRotation___c__DisplayClass0_0_TypeDefinitionIndex = 80013;

	class LDBreakRotation___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::UnityEngine::Quaternion>* input; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION___C__DISPLAYCLASS0_0__REGISTERPORTS_B__1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKROTATION___C__DISPLAYCLASS0_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
