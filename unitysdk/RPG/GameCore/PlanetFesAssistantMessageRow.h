#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesAssistantMessageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D920630)
#define RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9209B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAssistantMessageRow_TypeDefinitionIndex = 12272;

	class PlanetFesAssistantMessageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypePara; // 0x10
		::System::UInt32 Delay; // 0x18
		::System::UInt32 UnlockPlanetFesLevel; // 0x1C
		::System::UInt32 Interval; // 0x20
		::System::Boolean IsUseGLobalCD; // 0x24
		::System::UInt32 Priority; // 0x28
		::RPG::GameCore::PlanetFesAssistantMessageType AssistantMessageType; // 0x2C
		::System::UInt32 ID; // 0x30
		::RPG::Client::TextID Description; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAssistantMessageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAssistantMessageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
