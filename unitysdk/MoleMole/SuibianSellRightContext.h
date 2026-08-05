#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SUIBIANSELLRIGHTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191BA3D0)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianSellRightContext_TypeDefinitionIndex = 44285;

	class SuibianSellRightContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::UInt32>* onSelectBuddy; // 0x28
		::System::UInt32 shelveID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANSELLRIGHTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
