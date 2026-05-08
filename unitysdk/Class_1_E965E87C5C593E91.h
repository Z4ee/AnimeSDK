#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmRankWidgetController; }

#define CLASS_1_E965E87C5C593E91_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A02C70)
#define CLASS_1_E965E87C5C593E91__CTOR_OFFSET UNITYSDK_OFFSET(0x13A02C60)

inline static constexpr unsigned int Class_1_E965E87C5C593E91_TypeDefinitionIndex = 60522;

class Class_1_E965E87C5C593E91 : public ::System::Object
{
public:
	::MoleMole::UIActivityRhythmRankWidgetController* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor(::System::Boolean a1, ::MoleMole::UIActivityRhythmRankWidgetController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIActivityRhythmRankWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_E965E87C5C593E91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E965E87C5C593E91_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
