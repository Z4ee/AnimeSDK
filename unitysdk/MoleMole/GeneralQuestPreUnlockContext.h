#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_FD26DBB29540C9AE;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_GENERALQUESTPREUNLOCKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182E31B0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralQuestPreUnlockContext_TypeDefinitionIndex = 52864;

	class GeneralQuestPreUnlockContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* requestResult; // 0x28
		::Class_1_FD26DBB29540C9AE* data; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALQUESTPREUNLOCKCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
