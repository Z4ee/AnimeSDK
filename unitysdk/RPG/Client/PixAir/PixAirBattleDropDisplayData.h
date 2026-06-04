#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEDROPDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B4BC0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleDropDisplayData_TypeDefinitionIndex = 73641;

	class PixAirBattleDropDisplayData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEDROPDISPLAYDATA__CTOR_OFFSET))(this);
		}
	};
}
