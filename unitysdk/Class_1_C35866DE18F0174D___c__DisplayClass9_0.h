#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16560530)
#define CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS9_0___FINDPATH_B__0_OFFSET UNITYSDK_OFFSET(0x16560580)
#define CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS9_0___FINDPATH_B__1_OFFSET UNITYSDK_OFFSET(0x16560720)

inline static constexpr unsigned int Class_1_C35866DE18F0174D___c__DisplayClass9_0_TypeDefinitionIndex = 79769;

class Class_1_C35866DE18F0174D___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Boolean>* __9__1; // 0x10
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* point; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FindPath_b__0(::Class_1_E7C4615647E1695F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4615647E1695F*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS9_0___FINDPATH_B__0_OFFSET))(this, a1);
	}

	::System::Boolean __FindPath_b__1(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS9_0___FINDPATH_B__1_OFFSET))(this, a1);
	}
};
