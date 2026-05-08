#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_207206F45DEB584F;
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_207206F45DEB584F_CLASS_1_D2662F5F42ABF167_METHOD_1_5DD1CA58A72344DF_OFFSET UNITYSDK_OFFSET(0xF27F880)
#define CLASS_1_207206F45DEB584F_CLASS_1_D2662F5F42ABF167_METHOD_1_A301072E2F09F889_OFFSET UNITYSDK_OFFSET(0xF27F930)
#define CLASS_1_207206F45DEB584F_CLASS_1_D2662F5F42ABF167_METHOD_1_FBE68D21FE195CD4_OFFSET UNITYSDK_OFFSET(0xF27FC40)
#define CLASS_1_207206F45DEB584F_CLASS_1_D2662F5F42ABF167__CTOR_OFFSET UNITYSDK_OFFSET(0xF27F870)

inline static constexpr unsigned int Class_1_207206F45DEB584F_Class_1_D2662F5F42ABF167_TypeDefinitionIndex = 56208;

class Class_1_207206F45DEB584F_Class_1_D2662F5F42ABF167 : public ::System::Object
{
public:
	::Class_1_207206F45DEB584F* Field_1_0; // 0x10
	::MoleMole::Cameras::VariableCameraConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_CLASS_1_D2662F5F42ABF167__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5DD1CA58A72344DF(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_CLASS_1_D2662F5F42ABF167_METHOD_1_5DD1CA58A72344DF_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A301072E2F09F889()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_CLASS_1_D2662F5F42ABF167_METHOD_1_A301072E2F09F889_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_FBE68D21FE195CD4(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_CLASS_1_D2662F5F42ABF167_METHOD_1_FBE68D21FE195CD4_OFFSET))(this, a1);
	}
};
