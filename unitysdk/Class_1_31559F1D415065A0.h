#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseChallengeRowWidgetController; }

#define CLASS_1_31559F1D415065A0_METHOD_1_A295CA6FC0D17FBE_OFFSET UNITYSDK_OFFSET(0x122A6EE0)
#define CLASS_1_31559F1D415065A0__CTOR_OFFSET UNITYSDK_OFFSET(0x122A7300)

inline static constexpr unsigned int Class_1_31559F1D415065A0_TypeDefinitionIndex = 79058;

class Class_1_31559F1D415065A0 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31559F1D415065A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A295CA6FC0D17FBE(::MoleMole::UIInLevelPauseChallengeRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseChallengeRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_31559F1D415065A0_METHOD_1_A295CA6FC0D17FBE_OFFSET))(this, a1);
	}
};
