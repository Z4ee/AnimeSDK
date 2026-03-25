#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaStyleGiftRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_46389E85463FF7CE_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x16ED2530)
#define CLASS_1_46389E85463FF7CE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED2990)

inline static constexpr unsigned int Class_1_46389E85463FF7CE_TypeDefinitionIndex = 13802;

class Class_1_46389E85463FF7CE : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_6; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_8; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::RPG::GameCore::RogueTournPersonaStyleGiftRarityType Field_1_7; // 0x2C
	::RPG::Client::TextID Field_1_1; // 0x30
	::RPG::Client::TextID Field_1_3; // 0x40
	::System::UInt32 Field_1_0; // 0x50
	::System::UInt32 Field_1_9; // 0x54
	::RPG::Client::TextID Field_1_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46389E85463FF7CE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_46389E85463FF7CE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_46389E85463FF7CE*&))((::PBYTE)hIl2Cpp + CLASS_1_46389E85463FF7CE_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
