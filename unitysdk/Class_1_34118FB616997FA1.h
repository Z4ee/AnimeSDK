#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateMasterTalkSituation.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_34118FB616997FA1_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x19ED0B90)
#define CLASS_1_34118FB616997FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED0EF0)

inline static constexpr unsigned int Class_1_34118FB616997FA1_TypeDefinitionIndex = 11048;

class Class_1_34118FB616997FA1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::UInt32 Field_1_5; // 0x38
	::RPG::GameCore::FateMasterTalkSituation Field_1_6; // 0x3C
	::RPG::Client::TextID Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34118FB616997FA1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_34118FB616997FA1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_34118FB616997FA1*&))((::PBYTE)hIl2Cpp + CLASS_1_34118FB616997FA1_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
