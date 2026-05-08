#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F5E1D98425CDE8FF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_TITLENMEDALTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E61600)

namespace MoleMole
{
	inline static constexpr unsigned int TitleNMedalTabContext_TypeDefinitionIndex = 59664;

	class TitleNMedalTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 OverrideMedalGroupID; // 0x28
		::Enum_3_F5E1D98425CDE8FF tabType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TITLENMEDALTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
