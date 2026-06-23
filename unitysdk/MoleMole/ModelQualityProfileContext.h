#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/NapLodController_NapLODLevel.h"

#define MOLEMOLE_MODELQUALITYPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1302A460)

namespace MoleMole
{
	inline static constexpr unsigned int ModelQualityProfileContext_TypeDefinitionIndex = 46892;

	class ModelQualityProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::NapLodController_NapLODLevel FaceModelLodLevel; // 0x18
		::NapLodController_NapLODLevel BodyModelLodLevel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELQUALITYPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
