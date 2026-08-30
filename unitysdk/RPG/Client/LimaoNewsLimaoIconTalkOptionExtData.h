#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWSLIMAOICONTALKOPTIONEXTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD4A1880)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsLimaoIconTalkOptionExtData_TypeDefinitionIndex = 68036;

	class LimaoNewsLimaoIconTalkOptionExtData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* UserIDList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSLIMAOICONTALKOPTIONEXTDATA__CTOR_OFFSET))(this);
		}
	};
}
