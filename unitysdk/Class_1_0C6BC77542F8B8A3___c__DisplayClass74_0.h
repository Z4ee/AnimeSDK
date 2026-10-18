#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }

#define CLASS_1_0C6BC77542F8B8A3___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158E6C80)
#define CLASS_1_0C6BC77542F8B8A3___C__DISPLAYCLASS74_0___REFRESHACTORSTATES_B__0_OFFSET UNITYSDK_OFFSET(0x158E6D80)

inline static constexpr unsigned int Class_1_0C6BC77542F8B8A3___c__DisplayClass74_0_TypeDefinitionIndex = 79760;

class Class_1_0C6BC77542F8B8A3___c__DisplayClass74_0 : public ::System::Object
{
public:
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* actor; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __RefreshActorStates_b__0(::Class_1_E7C4615647E1695F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4615647E1695F*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3___C__DISPLAYCLASS74_0___REFRESHACTORSTATES_B__0_OFFSET))(this, a1);
	}
};
