#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_1D3B4D4A0A45D58A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B075C0)
#define CLASS_1_1D3B4D4A0A45D58A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12B076D0)
#define CLASS_1_1D3B4D4A0A45D58A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B07650)
#define CLASS_1_1D3B4D4A0A45D58A__CTOR_OFFSET UNITYSDK_OFFSET(0x12B076C0)

inline static constexpr unsigned int Class_1_1D3B4D4A0A45D58A_TypeDefinitionIndex = 65366;

class Class_1_1D3B4D4A0A45D58A : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_10; // 0x10
	::MoleMole::Battle::Entity* Field_1_6; // 0x18
	::MoleMole::Battle::Entity* Field_1_4; // 0x20
	::MoleMole::Battle::Entity* Field_1_7; // 0x28
	::MoleMole::Battle::Entity* Field_1_14; // 0x30
	::MoleMole::Battle::Entity* Field_1_9; // 0x38
	::MoleMole::Battle::Entity* Field_1_8; // 0x40
	::System::Single Field_1_15; // 0x48
	::System::Double Field_1_11; // 0x50
	::System::Boolean Field_1_5; // 0x58
	::System::Boolean Field_1_1; // 0x59
	::System::Boolean Field_1_13; // 0x5A
	::System::Int32 Field_1_0; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3B4D4A0A45D58A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3B4D4A0A45D58A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3B4D4A0A45D58A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3B4D4A0A45D58A_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
