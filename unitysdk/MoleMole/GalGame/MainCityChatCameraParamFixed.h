#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatCameraParam.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_GENERATECAMERAFUNC_OFFSET UNITYSDK_OFFSET(0x17810090)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED__CTOR_OFFSET UNITYSDK_OFFSET(0x17810120)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED__GENERATECAMERAFUNC_B__3_0_OFFSET UNITYSDK_OFFSET(0x17810130)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParamFixed_TypeDefinitionIndex = 70263;

	class MainCityChatCameraParamFixed : public ::MoleMole::GalGame::MainCityChatCameraParam
	{
	public:
		::UnityEngine::Vector3 CameraPos; // 0x10
		::UnityEngine::Vector3 CameraRot; // 0x1C
		::System::Single Fov; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED__CTOR_OFFSET))(this);
		}

		::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* GenerateCameraFunc(::MoleMole::UIMainCityChatPlayWidgetController* context)
		{
			return ((::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::MoleMole::UIMainCityChatPlayWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_GENERATECAMERAFUNC_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData _GenerateCameraFunc_b__3_0(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> _)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED__GENERATECAMERAFUNC_B__3_0_OFFSET))(this, _);
		}
	};
}
