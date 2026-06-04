#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_C744AC1912B4057C;

#define CLASS_1_A30F847E93AD8C60_METHOD_1_70FC9BA3400F387E_OFFSET UNITYSDK_OFFSET(0x19239EB0)
#define CLASS_1_A30F847E93AD8C60__CTOR_OFFSET UNITYSDK_OFFSET(0x192442B0)

inline static constexpr unsigned int Class_1_A30F847E93AD8C60_TypeDefinitionIndex = 14211;

class Class_1_A30F847E93AD8C60 : public ::System::Object
{
public:
	::Class_1_C744AC1912B4057C* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::RPG::GameCore::RogueTournDifficultyType Field_1_4; // 0x2C
	::System::UInt32 Field_1_5; // 0x30
	::RPG::GameCore::RogueTournAreaGroupID Field_1_6; // 0x34
	::RPG::Client::TextID Field_1_7; // 0x38
	::System::UInt32 Field_1_8; // 0x48
	::System::UInt32 Field_1_9; // 0x4C
	::System::Boolean Field_1_10; // 0x50
	::System::UInt32 Field_1_11; // 0x54
	::RPG::GameCore::RogueTournMode Field_1_12; // 0x58
	::System::UInt32 Field_1_13; // 0x5C
	::System::UInt32 Field_1_14; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A30F847E93AD8C60__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_70FC9BA3400F387E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A30F847E93AD8C60*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A30F847E93AD8C60*&))((::PBYTE)hIl2Cpp + CLASS_1_A30F847E93AD8C60_METHOD_1_70FC9BA3400F387E_OFFSET))(a1, a2);
	}
};
