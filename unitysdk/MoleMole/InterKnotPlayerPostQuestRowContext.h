#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_427F0887CFA33D63;

#define MOLEMOLE_INTERKNOTPLAYERPOSTQUESTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A039300)

namespace MoleMole
{
	inline static constexpr unsigned int InterKnotPlayerPostQuestRowContext_TypeDefinitionIndex = 82499;

	class InterKnotPlayerPostQuestRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_427F0887CFA33D63* Quest; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERKNOTPLAYERPOSTQUESTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
