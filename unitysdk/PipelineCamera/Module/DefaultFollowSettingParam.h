#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x48E380)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x45B300)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA5B9D0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA5B950)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA5BA60)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultFollowSettingParam_TypeDefinitionIndex = 38009;

	struct alignas(4) DefaultFollowSettingParam
	{
		::System::Single _radius; // 0x10
		::System::Nullable_1<::System::Single> _aspectRatio; // 0x14
		::UnityEngine::Vector2 ScreenOffset; // 0x1C
		::System::Single _fieldOfView; // 0x24

		::System::Single get_FieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Void set_FieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_SET_FIELDOFVIEW_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Single> get_AspectRatio()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_AspectRatio(::System::Nullable_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_SET_ASPECTRATIO_OFFSET))(this, value);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM_SET_RADIUS_OFFSET))(this, value);
		}
	};
}
