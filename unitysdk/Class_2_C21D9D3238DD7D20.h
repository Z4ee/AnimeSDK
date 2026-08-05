#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_74.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_1.h"

class Class_2_60638234271CCDB8_47;
class Class_2_D244C6518E0DA169;
class Class_3_D207D4FE62A0CC16;
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class GeneralEffectSinglePressCountDownEntryStyleEntry; }
namespace System { class Action; }

#define CLASS_2_C21D9D3238DD7D20_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1478AB20)
#define CLASS_2_C21D9D3238DD7D20_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1478B1D0)
#define CLASS_2_C21D9D3238DD7D20_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1478B180)
#define CLASS_2_C21D9D3238DD7D20_METHOD_2_DA330B81959DF65D_OFFSET UNITYSDK_OFFSET(0x1478AA80)
#define CLASS_2_C21D9D3238DD7D20_METHOD_2_F8700066C30A3B1F_OFFSET UNITYSDK_OFFSET(0x1478AB80)
#define CLASS_2_C21D9D3238DD7D20_METHOD_2_FE9EDDCF1894ED9D_OFFSET UNITYSDK_OFFSET(0x1478B260)
#define CLASS_2_C21D9D3238DD7D20__CTOR_OFFSET UNITYSDK_OFFSET(0x1478AA00)

inline static constexpr unsigned int Class_2_C21D9D3238DD7D20_TypeDefinitionIndex = 60296;

class Class_2_C21D9D3238DD7D20 : public ::Class_1_43BD383C98B4C0C5_74
{
public:
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* Field_2_0; // 0x10
	::Class_3_D207D4FE62A0CC16* Field_2_2; // 0x18
	::Class_2_60638234271CCDB8_47* Field_2_1; // 0x20
	::MoleMole::Config::GeneralEffectSinglePressCountDownEntryStyleEntry* Field_2_3; // 0x28

	::System::Void _ctor(::MoleMole::Config::GeneralEffectSinglePressCountDownEntryStyleEntry* a1, ::Class_2_D244C6518E0DA169* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::GeneralEffectSinglePressCountDownEntryStyleEntry*, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + CLASS_2_C21D9D3238DD7D20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA330B81959DF65D(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* a1, ::Class_2_60638234271CCDB8_47* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::Class_2_60638234271CCDB8_47*))((::PBYTE)hIl2Cpp + CLASS_2_C21D9D3238DD7D20_METHOD_2_DA330B81959DF65D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C21D9D3238DD7D20_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F8700066C30A3B1F(::Enum_3_D2BBBB758B896E04_1 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_D2BBBB758B896E04_1, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C21D9D3238DD7D20_METHOD_2_F8700066C30A3B1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21D9D3238DD7D20_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21D9D3238DD7D20_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_FE9EDDCF1894ED9D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C21D9D3238DD7D20_METHOD_2_FE9EDDCF1894ED9D_OFFSET))(this, a1);
	}
};
