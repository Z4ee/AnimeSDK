#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN_INPUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD8360)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoChenLingGameBoyInputBtn_InputInfo_TypeDefinitionIndex = 70934;

	struct alignas(8) MonoChenLingGameBoyInputBtn_InputInfo
	{
		::System::String* Key; // 0x10
		::System::Single Angle; // 0x18

		::System::Void _ctor(::System::String* key, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN_INPUTINFO__CTOR_OFFSET))(this, key, angle);
		}
	};
}
