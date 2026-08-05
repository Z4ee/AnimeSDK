#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_FRAMERATEPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x107DDA00)

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateProfileContext_TypeDefinitionIndex = 58527;

	class FrameRateProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Int32 FrameRate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATEPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
