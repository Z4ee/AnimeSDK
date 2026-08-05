#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TimelineDataExtra.h"

#define MOLEMOLE_CHATPLUSTIMELINEEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x172749D0)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusTimelineExtraData_TypeDefinitionIndex = 70936;

	class ChatPlusTimelineExtraData : public ::MoleMole::TimelineDataExtra
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSTIMELINEEXTRADATA__CTOR_OFFSET))(this);
		}
	};
}
