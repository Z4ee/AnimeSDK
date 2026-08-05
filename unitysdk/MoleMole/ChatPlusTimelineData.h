#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RuntimeTimelineData.h"

#define MOLEMOLE_CHATPLUSTIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5383A0)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusTimelineData_TypeDefinitionIndex = 63797;

	class ChatPlusTimelineData : public ::MoleMole::RuntimeTimelineData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSTIMELINEDATA__CTOR_OFFSET))(this);
		}
	};
}
