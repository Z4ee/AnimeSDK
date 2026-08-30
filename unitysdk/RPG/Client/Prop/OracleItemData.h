#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OracleItemColor.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_ORACLEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1614BA60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OracleItemData_TypeDefinitionIndex = 78259;

	class OracleItemData : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::RPG::Client::Prop::OracleItemColor Color; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
