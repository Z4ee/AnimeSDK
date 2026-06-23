#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_EXPOSUREPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A018B00)

namespace MoleMole
{
	inline static constexpr unsigned int ExposureProfileContext_TypeDefinitionIndex = 87341;

	class ExposureProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean exposureBeforeBloom; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPOSUREPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
