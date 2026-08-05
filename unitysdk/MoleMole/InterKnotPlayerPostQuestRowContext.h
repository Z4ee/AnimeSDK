#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D307EFECA425B258;

#define MOLEMOLE_INTERKNOTPLAYERPOSTQUESTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1908B8F0)

namespace MoleMole
{
	inline static constexpr unsigned int InterKnotPlayerPostQuestRowContext_TypeDefinitionIndex = 64793;

	class InterKnotPlayerPostQuestRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D307EFECA425B258* Quest; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERKNOTPLAYERPOSTQUESTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
