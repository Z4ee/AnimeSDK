#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/MoleMole/NapAnisotropicSamplingType.h"

#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xECE1800)

namespace MoleMole
{
	inline static constexpr unsigned int AnisotropicSamplingProfileContext_TypeDefinitionIndex = 41281;

	class AnisotropicSamplingProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::MoleMole::NapAnisotropicSamplingType AnisotropicSamplingType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
