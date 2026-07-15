#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6BEDC8B44117355B_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0xBBCBC30)
#define CLASS_1_6BEDC8B44117355B__CTOR_OFFSET UNITYSDK_OFFSET(0xBBCC040)

inline static constexpr unsigned int Class_1_6BEDC8B44117355B_TypeDefinitionIndex = 11095;

class Class_1_6BEDC8B44117355B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x38
	::RPG::Client::TextID Field_1_5; // 0x48
	::System::UInt32 Field_1_6; // 0x58
	::System::UInt32 Field_1_7; // 0x5C
	::RPG::GameCore::FateClazzType Field_1_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BEDC8B44117355B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6BEDC8B44117355B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6BEDC8B44117355B*&))((::PBYTE)hIl2Cpp + CLASS_1_6BEDC8B44117355B_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
