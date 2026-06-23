#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_171;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F461AE38AB429FB5;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_F461AE38AB429FB5_CLASS_1_B3A14FFF671984D8_METHOD_1_DB3251D835DBE895_OFFSET UNITYSDK_OFFSET(0x165AE0B0)
#define CLASS_3_F461AE38AB429FB5_CLASS_1_B3A14FFF671984D8_METHOD_1_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x165ADEC0)
#define CLASS_3_F461AE38AB429FB5_CLASS_1_B3A14FFF671984D8__CTOR_OFFSET UNITYSDK_OFFSET(0x165ADEB0)

inline static constexpr unsigned int Class_3_F461AE38AB429FB5_Class_1_B3A14FFF671984D8_TypeDefinitionIndex = 41615;

class Class_3_F461AE38AB429FB5_Class_1_B3A14FFF671984D8 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_4; // 0x10
	::Class_3_F461AE38AB429FB5* Field_1_3; // 0x18
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_6; // 0x20
	::System::String* Field_1_5; // 0x28
	::MoleMole::Battle::Entity* Field_1_0; // 0x30
	::Class_2_208CC9941471731A_171* Field_1_1; // 0x38
	::System::Int32 Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5_CLASS_1_B3A14FFF671984D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5_CLASS_1_B3A14FFF671984D8_METHOD_1_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Method_1_DB3251D835DBE895(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5_CLASS_1_B3A14FFF671984D8_METHOD_1_DB3251D835DBE895_OFFSET))(this, a1);
	}
};
