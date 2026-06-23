#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_DPIFACTORPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F4F110)

namespace MoleMole
{
	inline static constexpr unsigned int DpiFactorProfileContext_TypeDefinitionIndex = 69731;

	class DpiFactorProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Single DpiFactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
