#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PSCUSTOMINVITATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D7BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PSCustomInvitationData_TypeDefinitionIndex = 62844;

	class PSCustomInvitationData : public ::System::Object
	{
	public:
		::Enum_3_01618AD0437C8486_2 Type; // 0x10
		::System::UInt64 RoomID; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* GameParamList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSCUSTOMINVITATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
