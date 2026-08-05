#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F5E1D98425CDE8FF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_TITLENMEDALTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191C11E0)

namespace MoleMole
{
	inline static constexpr unsigned int TitleNMedalTabContext_TypeDefinitionIndex = 70980;

	class TitleNMedalTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_F5E1D98425CDE8FF tabType; // 0x28
		::System::Int32 OverrideMedalGroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TITLENMEDALTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
