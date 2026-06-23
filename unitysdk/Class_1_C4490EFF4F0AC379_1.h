#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_1_C4490EFF4F0AC379_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16262E30)
#define CLASS_1_C4490EFF4F0AC379_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16262E80)

inline static constexpr unsigned int Class_1_C4490EFF4F0AC379_1_TypeDefinitionIndex = 67776;

class Class_1_C4490EFF4F0AC379_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4490EFF4F0AC379_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Evaluate(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C4490EFF4F0AC379_1_EVALUATE_OFFSET))(this, a1);
	}
};
