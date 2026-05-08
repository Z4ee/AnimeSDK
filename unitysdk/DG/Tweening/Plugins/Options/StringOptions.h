#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/ScrambleMode.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int StringOptions_TypeDefinitionIndex = 25472;

	struct alignas(8) StringOptions
	{
		::System::Boolean richTextEnabled; // 0x10
		::DG::Tweening::ScrambleMode scrambleMode; // 0x14
		::Il2CppArray<::System::Char>* scrambledChars; // 0x18
		::System::Int32 startValueStrippedLength; // 0x20
		::System::Int32 changeValueStrippedLength; // 0x24
	};
}
