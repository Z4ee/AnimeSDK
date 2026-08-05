#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseChallengeRowWidgetController; }
namespace System { class String; }

#define CLASS_1_80F99C640003DF47_METHOD_1_44861080DF1F10DC_OFFSET UNITYSDK_OFFSET(0x18231DE0)
#define CLASS_1_80F99C640003DF47__CTOR_OFFSET UNITYSDK_OFFSET(0x18231F70)

inline static constexpr unsigned int Class_1_80F99C640003DF47_TypeDefinitionIndex = 86691;

class Class_1_80F99C640003DF47 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F99C640003DF47__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_44861080DF1F10DC(::MoleMole::UIInLevelPauseChallengeRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseChallengeRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_80F99C640003DF47_METHOD_1_44861080DF1F10DC_OFFSET))(this, a1);
	}
};
