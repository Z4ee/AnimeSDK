#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B91E8B5FF29338A;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_3_E63367724D8B0533_CLASS_1_223422D5ACCF1228_METHOD_1_A4D9C0C3BF41CB07_OFFSET UNITYSDK_OFFSET(0x14081990)
#define CLASS_3_E63367724D8B0533_CLASS_1_223422D5ACCF1228__CTOR_OFFSET UNITYSDK_OFFSET(0x14081980)

inline static constexpr unsigned int Class_3_E63367724D8B0533_Class_1_223422D5ACCF1228_TypeDefinitionIndex = 78482;

class Class_3_E63367724D8B0533_Class_1_223422D5ACCF1228 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::MoleMole::Battle::Entity* Field_1_6; // 0x18
	::Class_1_3B91E8B5FF29338A* Field_1_1; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::System::Boolean Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_CLASS_1_223422D5ACCF1228__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A4D9C0C3BF41CB07(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_CLASS_1_223422D5ACCF1228_METHOD_1_A4D9C0C3BF41CB07_OFFSET))(this, a1);
	}
};
