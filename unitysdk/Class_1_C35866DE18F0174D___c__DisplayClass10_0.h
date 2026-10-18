#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }

#define CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16552530)
#define CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS10_0___FINDACTOR_B__0_OFFSET UNITYSDK_OFFSET(0x16552540)

inline static constexpr unsigned int Class_1_C35866DE18F0174D___c__DisplayClass10_0_TypeDefinitionIndex = 79767;

class Class_1_C35866DE18F0174D___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_E7C4615647E1695F* path; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FindActor_b__0(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D___C__DISPLAYCLASS10_0___FINDACTOR_B__0_OFFSET))(this, a1);
	}
};
