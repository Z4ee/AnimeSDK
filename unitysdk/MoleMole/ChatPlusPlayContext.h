#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityChatPlayContext.h"

class Class_1_D65512A83CF70AB7;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CHATPLUSPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1751DC30)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusPlayContext_TypeDefinitionIndex = 76160;

	class ChatPlusPlayContext : public ::MoleMole::UIMainCityChatPlayContext
	{
	public:
		::System::Action_1<::Class_1_D65512A83CF70AB7*>* OnFinishCallBack; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
