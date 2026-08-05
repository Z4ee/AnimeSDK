#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatCameraParam.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatCameraPassThroughTarget.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_GENERATECAMERAFUNC_OFFSET UNITYSDK_OFFSET(0x118C71A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH__CTOR_OFFSET UNITYSDK_OFFSET(0x118C7240)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH__GENERATECAMERAFUNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x118C7250)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParamPassThrough_TypeDefinitionIndex = 43036;

	class MainCityChatCameraParamPassThrough : public ::MoleMole::GalGame::MainCityChatCameraParam
	{
	public:
		::MoleMole::GalGame::MainCityChatCameraPassThroughTarget Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH__CTOR_OFFSET))(this);
		}

		::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* GenerateCameraFunc(::MoleMole::UIMainCityChatPlayWidgetController* context)
		{
			return ((::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::MoleMole::UIMainCityChatPlayWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_GENERATECAMERAFUNC_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData _GenerateCameraFunc_b__1_0(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> fetchContext)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH__GENERATECAMERAFUNC_B__1_0_OFFSET))(this, fetchContext);
		}
	};
}
