#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EDC2AF1268851C10.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SUIBIANDEVELOPRIGHTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1AABF0)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianDevelopRightContext_TypeDefinitionIndex = 58342;

	class SuibianDevelopRightContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Enum_3_EDC2AF1268851C10>* onClickTab; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANDEVELOPRIGHTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
