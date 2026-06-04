#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC58C6E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleBlockData_TypeDefinitionIndex = 73195;

	class LightRubikCubePuzzleBlockData : public ::System::Object
	{
	public:
		::System::Int32 up; // 0x10
		::System::Int32 down; // 0x14
		::System::Int32 front; // 0x18
		::System::Int32 back; // 0x1C
		::System::Int32 left; // 0x20
		::System::Int32 right; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCKDATA__CTOR_OFFSET))(this);
		}
	};
}
