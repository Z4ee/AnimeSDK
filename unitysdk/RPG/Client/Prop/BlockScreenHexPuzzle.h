#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleBoardBase.h"

#define RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_METHOD_8_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA016DD0)
#define RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_METHOD_8_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xA016CA0)
#define RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA016EB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockScreenHexPuzzle_TypeDefinitionIndex = 64050;

	class BlockScreenHexPuzzle : public ::RPG::Client::Prop::HexPuzzleBoardBase
	{
	public:
		// static const ::System::Single Field_8_2; // 0x0
		::System::Boolean Field_8_0; // 0xE8
		::System::UInt32 Field_8_1; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_METHOD_8_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_8_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_METHOD_8_E3DE31A03057E055_OFFSET))(this);
		}
	};
}
