#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_1_AC72F8ABF3515620_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18C3ADA0)
#define CLASS_1_AC72F8ABF3515620__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3AF50)

inline static constexpr unsigned int Class_1_AC72F8ABF3515620_TypeDefinitionIndex = 59736;

class Class_1_AC72F8ABF3515620 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::MoleMole::Config::ValueCompareType Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC72F8ABF3515620__CTOR_OFFSET))(this);
	}

	::System::Boolean Evaluate(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AC72F8ABF3515620_EVALUATE_OFFSET))(this, a1);
	}
};
