#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_986F52381DF139E6__CTOR_OFFSET UNITYSDK_OFFSET(0x13A6ABB0)

inline static constexpr unsigned int Class_1_986F52381DF139E6_TypeDefinitionIndex = 55510;

class Class_1_986F52381DF139E6 : public ::System::Object
{
public:
	::MoleMole::InLevelBuddyDataItem* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_6; // 0x18
	::MoleMole::InLevelAvatarDataItem* Field_1_1; // 0x20
	::Class_1_BE6BF7909AD9D940* Field_1_7; // 0x28
	::System::UInt32 Field_1_0; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::Boolean Field_1_8; // 0x38
	::System::UInt32 Field_1_5; // 0x3C
	::System::Int32 Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986F52381DF139E6__CTOR_OFFSET))(this);
	}
};
