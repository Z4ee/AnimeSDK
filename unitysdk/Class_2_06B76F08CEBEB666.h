#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_74.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_1.h"

class Class_2_60638234271CCDB8_47;
class Class_2_D244C6518E0DA169;
namespace MoleMole { class UIMonsterFantasyQteEffWidgetController; }
namespace MoleMole { class UIMonsterFantasyQteInfoWidgetController; }
namespace MoleMole { class UIMonsterFantasyQteMissWidgetController; }
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace System { class Action; }

#define CLASS_2_06B76F08CEBEB666_METHOD_2_12D078A1DAE52C38_OFFSET UNITYSDK_OFFSET(0x122EB6A0)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_4ECFE79492EEF2A2_OFFSET UNITYSDK_OFFSET(0x122EB910)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x122EB580)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x122EB880)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x122EB820)
#define CLASS_2_06B76F08CEBEB666_METHOD_2_F57194071DBE2A0E_OFFSET UNITYSDK_OFFSET(0x122EB170)
#define CLASS_2_06B76F08CEBEB666__CTOR_OFFSET UNITYSDK_OFFSET(0x122EB160)

inline static constexpr unsigned int Class_2_06B76F08CEBEB666_TypeDefinitionIndex = 74568;

class Class_2_06B76F08CEBEB666 : public ::Class_1_43BD383C98B4C0C5_74
{
public:
	::MoleMole::UIMonsterFantasyQteMissWidgetController* Field_2_5; // 0x10
	::MoleMole::UIMonsterFantasyQteEffWidgetController* Field_2_6; // 0x18
	::Class_2_60638234271CCDB8_47* Field_2_0; // 0x20
	::Class_2_D244C6518E0DA169* Field_2_1; // 0x28
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* Field_2_7; // 0x30
	::MoleMole::Config::RealtimeQTEStyleEntryBase* Field_2_2; // 0x38
	::MoleMole::UIMonsterFantasyQteInfoWidgetController* Field_2_4; // 0x40
	::System::Single Field_2_10; // 0x48
	::System::Boolean Field_2_9; // 0x4C
	::System::Single Field_2_11; // 0x50

	::System::Void _ctor(::MoleMole::Config::RealtimeQTEStyleEntryBase* a1, ::Class_2_D244C6518E0DA169* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTEStyleEntryBase*, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F57194071DBE2A0E(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* a1, ::Class_2_60638234271CCDB8_47* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::Class_2_60638234271CCDB8_47*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_F57194071DBE2A0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12D078A1DAE52C38(::Enum_3_D2BBBB758B896E04_1 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_D2BBBB758B896E04_1, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_12D078A1DAE52C38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4ECFE79492EEF2A2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_06B76F08CEBEB666_METHOD_2_4ECFE79492EEF2A2_OFFSET))(this, a1);
	}
};
