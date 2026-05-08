#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_47BB065BE5107FA1;
namespace MoleMole { class TurnBattleEntityUnit; }

#define CLASS_2_47BB065BE5107FA1_CLASS_1_FD1E963A9FDC9282_METHOD_1_2CB5B335AD655C4B_OFFSET UNITYSDK_OFFSET(0x13F75180)
#define CLASS_2_47BB065BE5107FA1_CLASS_1_FD1E963A9FDC9282_METHOD_1_551D267476FC2578_OFFSET UNITYSDK_OFFSET(0x13F75010)
#define CLASS_2_47BB065BE5107FA1_CLASS_1_FD1E963A9FDC9282_METHOD_1_EE4F809A7F113C7F_OFFSET UNITYSDK_OFFSET(0x13F74EE0)
#define CLASS_2_47BB065BE5107FA1_CLASS_1_FD1E963A9FDC9282__CTOR_OFFSET UNITYSDK_OFFSET(0x13F74ED0)

inline static constexpr unsigned int Class_2_47BB065BE5107FA1_Class_1_FD1E963A9FDC9282_TypeDefinitionIndex = 72844;

class Class_2_47BB065BE5107FA1_Class_1_FD1E963A9FDC9282 : public ::System::Object
{
public:
	::Class_2_47BB065BE5107FA1* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_FD1E963A9FDC9282__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_EE4F809A7F113C7F(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_FD1E963A9FDC9282_METHOD_1_EE4F809A7F113C7F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_551D267476FC2578(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_FD1E963A9FDC9282_METHOD_1_551D267476FC2578_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2CB5B335AD655C4B(::MoleMole::TurnBattleEntityUnit* a1, ::MoleMole::TurnBattleEntityUnit* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_FD1E963A9FDC9282_METHOD_1_2CB5B335AD655C4B_OFFSET))(this, a1, a2);
	}
};
