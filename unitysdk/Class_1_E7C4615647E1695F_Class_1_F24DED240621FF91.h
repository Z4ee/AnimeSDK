#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_172;
class Class_1_52E21E813AA435A9;
class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel_Factory; }

#define CLASS_1_E7C4615647E1695F_CLASS_1_F24DED240621FF91_METHOD_1_9B77E9AF0AFDE876_OFFSET UNITYSDK_OFFSET(0x158DD060)
#define CLASS_1_E7C4615647E1695F_CLASS_1_F24DED240621FF91__CTOR_OFFSET UNITYSDK_OFFSET(0x158DD050)

inline static constexpr unsigned int Class_1_E7C4615647E1695F_Class_1_F24DED240621FF91_TypeDefinitionIndex = 79776;

class Class_1_E7C4615647E1695F_Class_1_F24DED240621FF91 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_172* PMNGGACBHHI; // 0x10
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel_Factory* LFBJDMAFICA; // 0x18

	::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel_Factory* a1, ::Class_0_16E4307DCC419505_172* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel_Factory*, ::Class_0_16E4307DCC419505_172*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_CLASS_1_F24DED240621FF91__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_E7C4615647E1695F* Method_1_9B77E9AF0AFDE876(::Class_1_52E21E813AA435A9* a1)
	{
		return ((::Class_1_E7C4615647E1695F*(*)(::PVOID, ::Class_1_52E21E813AA435A9*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_CLASS_1_F24DED240621FF91_METHOD_1_9B77E9AF0AFDE876_OFFSET))(this, a1);
	}
};
