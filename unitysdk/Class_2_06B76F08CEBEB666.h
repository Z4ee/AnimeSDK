#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_36.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_2.h"

class Class_2_60638234271CCDB8_15;
class Class_2_D244C6518E0DA169;
namespace MoleMole { class UIMonsterFantasyQteEffWidgetController; }
namespace MoleMole { class UIMonsterFantasyQteInfoWidgetController; }
namespace MoleMole { class UIMonsterFantasyQteMissWidgetController; }
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace System { class Action; }

#define CLASS_2_06B76F08CEBEB666_METHOD_2_12D078A1DAE52C38_OFFSET UNITYSDK_OFFSET(0x104B6EB0)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_4ECFE79492EEF2A2_OFFSET UNITYSDK_OFFSET(0x104B7040)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x104B6D80)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_F57194071DBE2A0E_OFFSET UNITYSDK_OFFSET(0x104B6910)
#define CLASS_2_06B76F08CEBEB666__CTOR_OFFSET UNITYSDK_OFFSET(0x104B6900)

inline static constexpr unsigned int Class_2_06B76F08CEBEB666_TypeDefinitionIndex = 55082;

class Class_2_06B76F08CEBEB666 : public ::Class_1_43BD383C98B4C0C5_36
{
public:
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* Field_2_3; // 0x10
	::MoleMole::UIMonsterFantasyQteInfoWidgetController* Field_2_6; // 0x18
	::MoleMole::UIMonsterFantasyQteEffWidgetController* Field_2_4; // 0x20
	::MoleMole::Config::RealtimeQTEStyleEntryBase* Field_2_0; // 0x28
	::MoleMole::UIMonsterFantasyQteMissWidgetController* Field_2_5; // 0x30
	::Class_2_60638234271CCDB8_15* Field_2_2; // 0x38
	::Class_2_D244C6518E0DA169* Field_2_1; // 0x40
	::System::Single Field_2_8; // 0x48
	::System::Single Field_2_7; // 0x4C
	::System::Boolean Field_2_9; // 0x50

	::System::Void _ctor(::MoleMole::Config::RealtimeQTEStyleEntryBase* a1, ::Class_2_D244C6518E0DA169* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTEStyleEntryBase*, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F57194071DBE2A0E(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* a1, ::Class_2_60638234271CCDB8_15* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::Class_2_60638234271CCDB8_15*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_F57194071DBE2A0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12D078A1DAE52C38(::Enum_3_D2BBBB758B896E04_2 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_D2BBBB758B896E04_2, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_12D078A1DAE52C38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4ECFE79492EEF2A2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_4ECFE79492EEF2A2_OFFSET))(this, a1);
	}
};
