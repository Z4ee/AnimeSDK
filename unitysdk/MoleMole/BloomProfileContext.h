#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_BLOOMPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11451180)

namespace MoleMole
{
	inline static constexpr unsigned int BloomProfileContext_TypeDefinitionIndex = 87120;

	class BloomProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean IsBloomOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLOOMPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
