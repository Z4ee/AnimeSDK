#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PolishPrimitive.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C4F0362D77EC47C9__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB39A0)

inline static constexpr unsigned int Class_1_C4F0362D77EC47C9_TypeDefinitionIndex = 47105;

class Class_1_C4F0362D77EC47C9 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Size; // 0x10
	::Il2CppArray<::System::Single>* Pos; // 0x18
	::System::String* Note; // 0x20
	::Il2CppArray<::System::Single>* Color; // 0x28
	::Il2CppArray<::System::Single>* RotEuler; // 0x30
	::RPGTools::LDWhiteBox::PolishPrimitive Shape; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4F0362D77EC47C9__CTOR_OFFSET))(this);
	}
};
