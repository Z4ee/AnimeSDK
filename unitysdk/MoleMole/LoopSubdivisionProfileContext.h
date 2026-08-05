#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_LOOPSUBDIVISIONPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x129AC070)

namespace MoleMole
{
	inline static constexpr unsigned int LoopSubdivisionProfileContext_TypeDefinitionIndex = 68213;

	class LoopSubdivisionProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean IsGlobal; // 0x18
		::System::Boolean enable; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
