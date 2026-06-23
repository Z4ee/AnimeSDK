#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseChallengeRowWidgetController; }

#define CLASS_1_31559F1D415065A0_METHOD_1_A295CA6FC0D17FBE_OFFSET UNITYSDK_OFFSET(0x14A9DF00)
#define CLASS_1_31559F1D415065A0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9E320)

inline static constexpr unsigned int Class_1_31559F1D415065A0_TypeDefinitionIndex = 55027;

class Class_1_31559F1D415065A0 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31559F1D415065A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A295CA6FC0D17FBE(::MoleMole::UIInLevelPauseChallengeRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseChallengeRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_31559F1D415065A0_METHOD_1_A295CA6FC0D17FBE_OFFSET))(this, a1);
	}
};
