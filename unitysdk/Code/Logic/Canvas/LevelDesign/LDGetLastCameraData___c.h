#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14511740)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14511780)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA___C__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x14511790)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDGetLastCameraData___c_TypeDefinitionIndex = 63844;

	class LDGetLastCameraData___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::PipelineCamera::FinalCameraData>** StaticGet___9__0_0()
		{
			return (::FlowCanvas::ValueHandler_1<::PipelineCamera::FinalCameraData>**)Il2CppClass::FromTypeDefinitionIndex(LDGetLastCameraData___c_TypeDefinitionIndex)->GetStaticField(0x2E420);
		}
		static ::Code::Logic::Canvas::LevelDesign::LDGetLastCameraData___c** StaticGet___9()
		{
			return (::Code::Logic::Canvas::LevelDesign::LDGetLastCameraData___c**)Il2CppClass::FromTypeDefinitionIndex(LDGetLastCameraData___c_TypeDefinitionIndex)->GetStaticField(0x2E428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA___C__CTOR_OFFSET))(this);
		}

		::PipelineCamera::FinalCameraData _RegisterPorts_b__0_0()
		{
			return ((::PipelineCamera::FinalCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA___C__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}
