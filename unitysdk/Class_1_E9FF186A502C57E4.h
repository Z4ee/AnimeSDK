#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_E9FF186A502C57E4_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1BE9B870)
#define CLASS_1_E9FF186A502C57E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9BC40)

inline static constexpr unsigned int Class_1_E9FF186A502C57E4_TypeDefinitionIndex = 11141;

class Class_1_E9FF186A502C57E4 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x20
	::RPG::GameCore::FateRinHouguOwnerType Field_1_2; // 0x30
	::System::UInt32 Field_1_3; // 0x34
	::RPG::Client::TextID Field_1_4; // 0x38
	::RPG::Client::TextID Field_1_5; // 0x48
	::System::UInt32 Field_1_6; // 0x58
	::System::UInt32 Field_1_7; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FF186A502C57E4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E9FF186A502C57E4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E9FF186A502C57E4*&))((::PBYTE)hIl2Cpp + CLASS_1_E9FF186A502C57E4_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
