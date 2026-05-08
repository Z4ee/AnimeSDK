#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseChallengeRowWidgetController; }
namespace System { class String; }

#define CLASS_1_06888FEBA001BCEB_METHOD_1_0BCA08D4E253A6EC_OFFSET UNITYSDK_OFFSET(0x108F3200)
#define CLASS_1_06888FEBA001BCEB__CTOR_OFFSET UNITYSDK_OFFSET(0x108F3360)

inline static constexpr unsigned int Class_1_06888FEBA001BCEB_TypeDefinitionIndex = 72394;

class Class_1_06888FEBA001BCEB : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06888FEBA001BCEB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0BCA08D4E253A6EC(::MoleMole::UIInLevelPauseChallengeRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseChallengeRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_06888FEBA001BCEB_METHOD_1_0BCA08D4E253A6EC_OFFSET))(this, a1);
	}
};
