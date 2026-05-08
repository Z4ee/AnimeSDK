#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_28C0FDDF1076A6D9;

#define MOLEMOLE_YOROZUYARALLYQUESTITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x126CCC00)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaRallyQuestItemContext_TypeDefinitionIndex = 82503;

	class YorozuyaRallyQuestItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_28C0FDDF1076A6D9* RallyQuest; // 0x28
		::System::Int32 Index; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYARALLYQUESTITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
