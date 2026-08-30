#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTGENERALPARAM_ABTESTRESCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B733D40)

namespace MiHoYo::SDK::Base::ABTestPlatform::Const
{
	inline static constexpr unsigned int ABTestGeneralParam_ABTestResCode_TypeDefinitionIndex = 8798;

	class ABTestGeneralParam_ABTestResCode : public ::System::Object
	{
	public:
		// static const ::System::Int32 ENTER_EXPERIMENT = 0x3E8; // 0x0
		// static const ::System::Int32 ENTER = 0x3E8; // 0x0
		// static const ::System::Int32 NOT_ENTER_EXPERIMENT = 0x3E9; // 0x0
		// static const ::System::Int32 SCENE_ERROR = 0x3EB; // 0x0
		// static const ::System::Int32 EXPERIMENT_ERROR = 0x3EC; // 0x0
		// static const ::System::Int32 ENTER_SCENE_NOT_ENTER_EXPERIMENT = 0x3F2; // 0x0
		// static const ::System::Int32 NOT_TAGGED_USER = 0x3ED; // 0x0
		// static const ::System::Int32 ENTER_EMPTY_BUCKET = 0x3EF; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTGENERALPARAM_ABTESTRESCODE__CTOR_OFFSET))(this);
		}
	};
}
