#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DCEE691286F89A;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }

#define CLASS_1_2F0BBC953E762A9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC058BA0)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC0593D0)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0xC058D30)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_8A4A246E740FDEE4_OFFSET UNITYSDK_OFFSET(0xC058CC0)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC058C80)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_E93FB20C44775568_OFFSET UNITYSDK_OFFSET(0xC059480)
#define CLASS_1_2F0BBC953E762A9B__CTOR_OFFSET UNITYSDK_OFFSET(0xC0589C0)

inline static constexpr unsigned int Class_1_2F0BBC953E762A9B_TypeDefinitionIndex = 66431;

class Class_1_2F0BBC953E762A9B : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x10
	::Class_1_52DCEE691286F89A* CKBCNCKPHJL; // 0x18
	::RPG::GameCore::CharacterInputData* ILPPJFFPJEM; // 0x20
	::System::Boolean PHMOLAGBNGL; // 0x28
	::System::UInt64 JHOKIFAKAMJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0BBC953E762A9B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0BBC953E762A9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0BBC953E762A9B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8A4A246E740FDEE4(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F0BBC953E762A9B_METHOD_1_8A4A246E740FDEE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0BBC953E762A9B_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0BBC953E762A9B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_E93FB20C44775568()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0BBC953E762A9B_METHOD_1_E93FB20C44775568_OFFSET))(this);
	}
};
