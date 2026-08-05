#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_68FF0BBB0B07D4B8_Class_1_3605A5AEF6D60147;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_68FF0BBB0B07D4B8_CLASS_1_ABD2D6D734EEE44A_METHOD_1_098A817C6CF938BC_OFFSET UNITYSDK_OFFSET(0x176FCC10)
#define CLASS_1_68FF0BBB0B07D4B8_CLASS_1_ABD2D6D734EEE44A__CTOR_OFFSET UNITYSDK_OFFSET(0x176FCB80)

inline static constexpr unsigned int Class_1_68FF0BBB0B07D4B8_Class_1_ABD2D6D734EEE44A_TypeDefinitionIndex = 11056;

class Class_1_68FF0BBB0B07D4B8_Class_1_ABD2D6D734EEE44A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_68FF0BBB0B07D4B8_Class_1_3605A5AEF6D60147*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FF0BBB0B07D4B8_CLASS_1_ABD2D6D734EEE44A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_68FF0BBB0B07D4B8_Class_1_3605A5AEF6D60147*>* Method_1_098A817C6CF938BC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_68FF0BBB0B07D4B8_Class_1_3605A5AEF6D60147*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FF0BBB0B07D4B8_CLASS_1_ABD2D6D734EEE44A_METHOD_1_098A817C6CF938BC_OFFSET))(this);
	}
};
