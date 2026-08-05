#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_DOFPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9358C0)

namespace MoleMole
{
	inline static constexpr unsigned int DOFProfileContext_TypeDefinitionIndex = 84097;

	class DOFProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOFPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
