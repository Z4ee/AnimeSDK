#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B17AE0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x16B17AF0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA___C__DISPLAYCLASS0_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x16B17BE0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA___C__DISPLAYCLASS0_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x16B17CC0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDBreakFinalCameraData___c__DisplayClass0_0_TypeDefinitionIndex = 73718;

	class LDBreakFinalCameraData___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::PipelineCamera::FinalCameraData>* input; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::UnityEngine::Quaternion _RegisterPorts_b__1()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA___C__DISPLAYCLASS0_0__REGISTERPORTS_B__1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKFINALCAMERADATA___C__DISPLAYCLASS0_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
