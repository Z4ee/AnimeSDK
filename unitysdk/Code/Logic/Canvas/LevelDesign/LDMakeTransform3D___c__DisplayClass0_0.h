#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x120BA4E0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x120BA4F0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDMakeTransform3D___c__DisplayClass0_0_TypeDefinitionIndex = 40684;

	class LDMakeTransform3D___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* scale; // 0x10
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* translation; // 0x18
		::FlowCanvas::ValueInput_1<::UnityEngine::Quaternion>* rotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FTransform3D _RegisterPorts_b__0()
		{
			return ((::Foundation::Unreal::FTransform3D(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
