#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterFadeDitheringDataV2_TypeDefinitionIndex = 48485;

	struct alignas(8) CharacterFadeDitheringDataV2
	{
		static ::MoleMole::Config::CharacterFadeDitheringDataV2* StaticGet_Default()
		{
			return (::MoleMole::Config::CharacterFadeDitheringDataV2*)Il2CppClass::FromTypeDefinitionIndex(CharacterFadeDitheringDataV2_TypeDefinitionIndex)->GetStaticField(0x463A0);
		}
		::System::Single TargetDitherVal; // 0x10
		::System::Single StartTime; // 0x14
		::System::Single KeepTime; // 0x18
		::System::Single EndTime; // 0x1C
		::System::String* StartCurveKey; // 0x20
		::System::String* EndCurveKey; // 0x28
		::System::Int32 Priority; // 0x30
		::System::Boolean IgnoreWorldTimeScale; // 0x34
		::System::Boolean IgnoreOwnerTimeScale; // 0x35
	};
}
