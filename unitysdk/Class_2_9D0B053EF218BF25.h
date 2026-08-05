#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_74.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_1.h"

class Class_2_60638234271CCDB8_47;
class Class_2_D244C6518E0DA169;
class Class_3_D207D4FE62A0CC16;
namespace MoleMole { class UIInLevelSkillButtonZiplineChangeEffWidgetController; }
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class ButtonQTEZipLineSinglePressCountDownEntryStyleEntry; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace System { class Action; }

#define CLASS_2_9D0B053EF218BF25_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x145A5280)
#define CLASS_2_9D0B053EF218BF25_METHOD_2_4ECFE79492EEF2A2_OFFSET UNITYSDK_OFFSET(0x145A55C0)
#define CLASS_2_9D0B053EF218BF25_METHOD_2_7523AAC254703866_OFFSET UNITYSDK_OFFSET(0x145A52E0)
#define CLASS_2_9D0B053EF218BF25_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x145A5530)
#define CLASS_2_9D0B053EF218BF25_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x145A54D0)
#define CLASS_2_9D0B053EF218BF25_METHOD_2_D5ABF45B577E4B0B_OFFSET UNITYSDK_OFFSET(0x145A50E0)
#define CLASS_2_9D0B053EF218BF25__CTOR_OFFSET UNITYSDK_OFFSET(0x145A5060)

inline static constexpr unsigned int Class_2_9D0B053EF218BF25_TypeDefinitionIndex = 47243;

class Class_2_9D0B053EF218BF25 : public ::Class_1_43BD383C98B4C0C5_74
{
public:
	::Class_2_60638234271CCDB8_47* Field_2_7; // 0x10
	::Class_2_D244C6518E0DA169* Field_2_0; // 0x18
	::Class_3_D207D4FE62A0CC16* Field_2_4; // 0x20
	::MoleMole::UIInLevelSkillButtonZiplineChangeEffWidgetController* Field_2_5; // 0x28
	::MoleMole::Config::RealtimeQTEStyleEntryBase* Field_2_1; // 0x30
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* Field_2_6; // 0x38

	::System::Void _ctor(::MoleMole::Config::ButtonQTEZipLineSinglePressCountDownEntryStyleEntry* a1, ::Class_2_D244C6518E0DA169* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ButtonQTEZipLineSinglePressCountDownEntryStyleEntry*, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D5ABF45B577E4B0B(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* a1, ::Class_2_60638234271CCDB8_47* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::Class_2_60638234271CCDB8_47*))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_D5ABF45B577E4B0B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7523AAC254703866(::Enum_3_D2BBBB758B896E04_1 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_D2BBBB758B896E04_1, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_7523AAC254703866_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4ECFE79492EEF2A2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_4ECFE79492EEF2A2_OFFSET))(this, a1);
	}
};
