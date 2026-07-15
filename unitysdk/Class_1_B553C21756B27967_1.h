#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_C744AC1912B4057C;

#define CLASS_1_B553C21756B27967_1_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x1BE8C250)
#define CLASS_1_B553C21756B27967_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8C740)

inline static constexpr unsigned int Class_1_B553C21756B27967_1_TypeDefinitionIndex = 14359;

class Class_1_B553C21756B27967_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::Class_1_C744AC1912B4057C* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::RPG::GameCore::RogueTournMode Field_1_5; // 0x30
	::RPG::Client::TextID Field_1_6; // 0x38
	::System::UInt32 Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x4C
	::RPG::GameCore::RogueTournDifficultyType Field_1_9; // 0x50
	::System::UInt32 Field_1_10; // 0x54
	::System::UInt32 Field_1_11; // 0x58
	::RPG::GameCore::RogueTournAreaGroupID Field_1_12; // 0x5C
	::System::Boolean Field_1_13; // 0x60
	::System::UInt32 Field_1_14; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B553C21756B27967_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B553C21756B27967_1*&))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967_1_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
