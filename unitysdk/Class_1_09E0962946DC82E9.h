#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAffixRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_09E0962946DC82E9_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1BF592C0)
#define CLASS_1_09E0962946DC82E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF596E0)

inline static constexpr unsigned int Class_1_09E0962946DC82E9_TypeDefinitionIndex = 11128;

class Class_1_09E0962946DC82E9 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x30
	::RPG::GameCore::FateAffixRarityType Field_1_5; // 0x40
	::System::UInt32 Field_1_6; // 0x44
	::RPG::Client::TextID Field_1_7; // 0x48
	::RPG::Client::TextID Field_1_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09E0962946DC82E9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_09E0962946DC82E9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_09E0962946DC82E9*&))((::PBYTE)hIl2Cpp + CLASS_1_09E0962946DC82E9_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
