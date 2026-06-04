#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitMode.h"
#include "unitysdk/RPG/GameCore/FateTraitTag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0DA034EC77530334_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1913D520)
#define CLASS_1_0DA034EC77530334__CTOR_OFFSET UNITYSDK_OFFSET(0x1913D9D0)

inline static constexpr unsigned int Class_1_0DA034EC77530334_TypeDefinitionIndex = 11068;

class Class_1_0DA034EC77530334 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x38
	::RPG::GameCore::FateTraitTag Field_1_5; // 0x48
	::RPG::Client::TextID Field_1_6; // 0x50
	::System::UInt32 Field_1_7; // 0x60
	::System::UInt32 Field_1_8; // 0x64
	::System::UInt32 Field_1_9; // 0x68
	::RPG::GameCore::FateTraitMode Field_1_10; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DA034EC77530334__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0DA034EC77530334*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0DA034EC77530334*&))((::PBYTE)hIl2Cpp + CLASS_1_0DA034EC77530334_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
