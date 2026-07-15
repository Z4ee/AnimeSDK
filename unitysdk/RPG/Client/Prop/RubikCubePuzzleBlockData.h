#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RubikCubePuzzleBrickData; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14F4CA20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleBlockData_TypeDefinitionIndex = 74873;

	class RubikCubePuzzleBlockData : public ::System::Object
	{
	public:
		::System::Int32 BlockStatus; // 0x10
		::RPG::Client::Prop::RubikCubePuzzleBrickData* TatumData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBLOCKDATA__CTOR_OFFSET))(this);
		}
	};
}
