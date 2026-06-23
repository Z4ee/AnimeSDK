#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_44.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04.h"

class Class_2_60638234271CCDB8_72;
class Class_2_D244C6518E0DA169;
class Class_3_1ED83B5B8C9621CC;
namespace MoleMole { class UIInLevelSkillButtonZiplineChangeEffWidgetController; }
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class ButtonQTEZipLineSinglePressCountDownEntryStyleEntry; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace System { class Action; }

#define CLASS_2_9D0B053EF218BF25_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17016E70)
#define CLASS_2_9D0B053EF218BF25_METHOD_2_4ECFE79492EEF2A2_OFFSET UNITYSDK_OFFSET(0x170170C0)
#define CLASS_2_9D0B053EF218BF25_METHOD_2_7523AAC254703866_OFFSET UNITYSDK_OFFSET(0x17016ED0)
#define CLASS_2_9D0B053EF218BF25_METHOD_2_D5ABF45B577E4B0B_OFFSET UNITYSDK_OFFSET(0x17016CD0)
#define CLASS_2_9D0B053EF218BF25__CTOR_OFFSET UNITYSDK_OFFSET(0x17016C50)

inline static constexpr unsigned int Class_2_9D0B053EF218BF25_TypeDefinitionIndex = 72427;

class Class_2_9D0B053EF218BF25 : public ::Class_1_43BD383C98B4C0C5_44
{
public:
	::MoleMole::Config::RealtimeQTEStyleEntryBase* Field_2_0; // 0x10
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* Field_2_3; // 0x18
	::MoleMole::UIInLevelSkillButtonZiplineChangeEffWidgetController* Field_2_4; // 0x20
	::Class_2_D244C6518E0DA169* Field_2_1; // 0x28
	::Class_2_60638234271CCDB8_72* Field_2_2; // 0x30
	::Class_3_1ED83B5B8C9621CC* Field_2_5; // 0x38

	::System::Void _ctor(::MoleMole::Config::ButtonQTEZipLineSinglePressCountDownEntryStyleEntry* a1, ::Class_2_D244C6518E0DA169* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ButtonQTEZipLineSinglePressCountDownEntryStyleEntry*, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D5ABF45B577E4B0B(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* a1, ::Class_2_60638234271CCDB8_72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::Class_2_60638234271CCDB8_72*))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_D5ABF45B577E4B0B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7523AAC254703866(::Enum_3_D2BBBB758B896E04 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_D2BBBB758B896E04, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_7523AAC254703866_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4ECFE79492EEF2A2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_9D0B053EF218BF25_METHOD_2_4ECFE79492EEF2A2_OFFSET))(this, a1);
	}
};
