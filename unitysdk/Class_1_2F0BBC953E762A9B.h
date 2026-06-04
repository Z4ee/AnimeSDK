#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DCEE691286F89A;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }

#define CLASS_1_2F0BBC953E762A9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC5BA80)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0xAC5BC10)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAC5C280)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_8A4A246E740FDEE4_OFFSET UNITYSDK_OFFSET(0xAC5BBA0)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC5BB60)
#define CLASS_1_2F0BBC953E762A9B_METHOD_1_E93FB20C44775568_OFFSET UNITYSDK_OFFSET(0xAC5C330)
#define CLASS_1_2F0BBC953E762A9B__CTOR_OFFSET UNITYSDK_OFFSET(0xAC5B830)

inline static constexpr unsigned int Class_1_2F0BBC953E762A9B_TypeDefinitionIndex = 62081;

class Class_1_2F0BBC953E762A9B : public ::System::Object
{
public:
	::Class_1_52DCEE691286F89A* Field_1_0; // 0x10
	::RPG::GameCore::CharacterInputData* Field_1_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20
	::System::UInt64 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30

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

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0BBC953E762A9B_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
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
