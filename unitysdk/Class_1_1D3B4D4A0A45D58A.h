#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_1D3B4D4A0A45D58A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A1E180)
#define CLASS_1_1D3B4D4A0A45D58A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12A1E270)
#define CLASS_1_1D3B4D4A0A45D58A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A1E200)
#define CLASS_1_1D3B4D4A0A45D58A__CTOR_OFFSET UNITYSDK_OFFSET(0x12A1E260)

inline static constexpr unsigned int Class_1_1D3B4D4A0A45D58A_TypeDefinitionIndex = 46178;

class Class_1_1D3B4D4A0A45D58A : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_11; // 0x10
	::MoleMole::Battle::Entity* Field_1_5; // 0x18
	::MoleMole::Battle::Entity* Field_1_7; // 0x20
	::MoleMole::Battle::Entity* Field_1_9; // 0x28
	::MoleMole::Battle::Entity* Field_1_2; // 0x30
	::MoleMole::Battle::Entity* Field_1_8; // 0x38
	::MoleMole::Battle::Entity* Field_1_3; // 0x40
	::System::Double Field_1_6; // 0x48
	::System::Boolean Field_1_4; // 0x50
	::System::Boolean Field_1_12; // 0x51
	::System::Boolean Field_1_0; // 0x52
	::System::Single Field_1_10; // 0x54
	::System::Int32 Field_1_1; // 0x58

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
