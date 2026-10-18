#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0DC36C832589E4AF;
namespace RPG::Client { class IActivityQuestRewardData; }

#define CLASS_1_9997A0224DAD1997_METHOD_1_7C2390C0F26B3661_OFFSET UNITYSDK_OFFSET(0x15E182A0)
#define CLASS_1_9997A0224DAD1997_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x15E18340)
#define CLASS_1_9997A0224DAD1997_METHOD_1_EDC14BF43D2DE2A9_OFFSET UNITYSDK_OFFSET(0x15E18030)
#define CLASS_1_9997A0224DAD1997__CTOR_OFFSET UNITYSDK_OFFSET(0x15E18020)

inline static constexpr unsigned int Class_1_9997A0224DAD1997_TypeDefinitionIndex = 82082;

class Class_1_9997A0224DAD1997 : public ::System::Object
{
public:
	::Class_1_0DC36C832589E4AF* MHBFNKIFLNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9997A0224DAD1997__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDC14BF43D2DE2A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9997A0224DAD1997_METHOD_1_EDC14BF43D2DE2A9_OFFSET))(this);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9997A0224DAD1997_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::RPG::Client::IActivityQuestRewardData* Method_1_7C2390C0F26B3661()
	{
		return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9997A0224DAD1997_METHOD_1_7C2390C0F26B3661_OFFSET))(this);
	}
};
