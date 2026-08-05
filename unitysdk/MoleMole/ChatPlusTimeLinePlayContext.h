#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityChatPlayContext.h"

class Class_2_CEC585D0736F3660;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CHATPLUSTIMELINEPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16241010)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusTimeLinePlayContext_TypeDefinitionIndex = 74641;

	class ChatPlusTimeLinePlayContext : public ::MoleMole::UIMainCityChatPlayContext
	{
	public:
		::System::Action_1<::Class_2_CEC585D0736F3660*>* OnFinishCallBack; // 0x58
		::System::Int32 EndTransitionID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSTIMELINEPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
