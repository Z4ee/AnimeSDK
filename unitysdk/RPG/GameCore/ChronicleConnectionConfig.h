#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleConnectionPointType.h"
#include "unitysdk/RPG/GameCore/ChronicleLineType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHRONICLECONNECTIONCONFIG_METHOD_2_BAD82BD4547D0AE7_OFFSET UNITYSDK_OFFSET(0x1880D560)
#define RPG_GAMECORE_CHRONICLECONNECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1880D710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleConnectionConfig_TypeDefinitionIndex = 17996;

	class ChronicleConnectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChronicleLineType LineType; // 0x14
		::RPG::GameCore::ChronicleConnectionPointType FromPoint; // 0x18
		::RPG::GameCore::ChronicleConnectionPointType ToPoint; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECONNECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BAD82BD4547D0AE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChronicleConnectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChronicleConnectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECONNECTIONCONFIG_METHOD_2_BAD82BD4547D0AE7_OFFSET))(a1, a2);
		}
	};
}
