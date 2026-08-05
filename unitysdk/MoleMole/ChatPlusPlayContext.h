#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityChatPlayContext.h"

class Class_2_CEC585D0736F3660;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CHATPLUSPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA99B0)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusPlayContext_TypeDefinitionIndex = 85107;

	class ChatPlusPlayContext : public ::MoleMole::UIMainCityChatPlayContext
	{
	public:
		::System::Action_1<::Class_2_CEC585D0736F3660*>* OnFinishCallBack; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
