#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_44.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04.h"

class Class_2_60638234271CCDB8_72;
class Class_2_D244C6518E0DA169;
namespace MoleMole { class UIMonsterFantasyQteEffWidgetController; }
namespace MoleMole { class UIMonsterFantasyQteInfoWidgetController; }
namespace MoleMole { class UIMonsterFantasyQteMissWidgetController; }
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace System { class Action; }

#define CLASS_2_06B76F08CEBEB666_METHOD_2_12D078A1DAE52C38_OFFSET UNITYSDK_OFFSET(0x17ADA750)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_4ECFE79492EEF2A2_OFFSET UNITYSDK_OFFSET(0x17ADA8E0)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x17ADA630)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_F57194071DBE2A0E_OFFSET UNITYSDK_OFFSET(0x17ADA230)
#define CLASS_2_06B76F08CEBEB666__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADA220)

inline static constexpr unsigned int Class_2_06B76F08CEBEB666_TypeDefinitionIndex = 79605;

class Class_2_06B76F08CEBEB666 : public ::Class_1_43BD383C98B4C0C5_44
{
public:
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* Field_2_3; // 0x10
	::Class_2_D244C6518E0DA169* Field_2_1; // 0x18
	::MoleMole::UIMonsterFantasyQteMissWidgetController* Field_2_5; // 0x20
	::Class_2_60638234271CCDB8_72* Field_2_2; // 0x28
	::MoleMole::UIMonsterFantasyQteInfoWidgetController* Field_2_6; // 0x30
	::MoleMole::Config::RealtimeQTEStyleEntryBase* Field_2_0; // 0x38
	::MoleMole::UIMonsterFantasyQteEffWidgetController* Field_2_4; // 0x40
	::System::Single Field_2_8; // 0x48
	::System::Boolean Field_2_9; // 0x4C
	::System::Single Field_2_7; // 0x50

	::System::Void _ctor(::MoleMole::Config::RealtimeQTEStyleEntryBase* a1, ::Class_2_D244C6518E0DA169* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTEStyleEntryBase*, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F57194071DBE2A0E(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* a1, ::Class_2_60638234271CCDB8_72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::Class_2_60638234271CCDB8_72*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_F57194071DBE2A0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12D078A1DAE52C38(::Enum_3_D2BBBB758B896E04 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_D2BBBB758B896E04, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_12D078A1DAE52C38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4ECFE79492EEF2A2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_4ECFE79492EEF2A2_OFFSET))(this, a1);
	}
};
