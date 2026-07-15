#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5CDBC06B233F2791_METHOD_2_70B5B012520A2797_OFFSET UNITYSDK_OFFSET(0x38FC860)

inline static constexpr unsigned int Struct_2_5CDBC06B233F2791_TypeDefinitionIndex = 55102;

struct alignas(8) Struct_2_5CDBC06B233F2791
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::RPG::Client::TextID Field_2_2; // 0x18
	::RPG::Client::TextID Field_2_3; // 0x28
	::RPG::Client::TextID Field_2_4; // 0x38
	::System::String* Field_2_5; // 0x48
	::System::String* Field_2_6; // 0x50
	::RPG::Client::TextID Field_2_7; // 0x58
	::RPG::Client::TextID Field_2_8; // 0x68
	::System::Nullable_1<::System::Boolean> Field_2_9; // 0x78
	::System::Nullable_1<::RPG::GameCore::AttackDamageType> Field_2_10; // 0x7C
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_2_11; // 0x88
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_2_12; // 0x90
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_13; // 0x98
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_14; // 0xA8
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_15; // 0xB8
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_16; // 0xC8
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_17; // 0xD8
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_18; // 0xE8
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_19; // 0xF8

	::System::Void Method_2_70B5B012520A2797(::Struct_2_5CDBC06B233F2791 a1, ::Struct_2_5CDBC06B233F2791 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5CDBC06B233F2791, ::Struct_2_5CDBC06B233F2791))((::PBYTE)hIl2Cpp + STRUCT_2_5CDBC06B233F2791_METHOD_2_70B5B012520A2797_OFFSET))(this, a1, a2);
	}
};
