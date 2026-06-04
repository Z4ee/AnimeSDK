#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIPELINECAMERAGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC3ACDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PipelineCameraGlobalConfig_TypeDefinitionIndex = 65177;

	class PipelineCameraGlobalConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* CustomBlendCurveList; // 0x18
		::System::Single EntryPointCameraCutAngle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAGLOBALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
