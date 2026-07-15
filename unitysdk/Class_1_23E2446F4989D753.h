#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/JunctionType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_23E2446F4989D753__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7E530)

inline static constexpr unsigned int Class_1_23E2446F4989D753_TypeDefinitionIndex = 47110;

class Class_1_23E2446F4989D753 : public ::System::Object
{
public:
	::System::String* Name; // 0x10
	::System::String* Id; // 0x18
	::System::String* Description; // 0x20
	::Il2CppArray<::System::Single>* Pos; // 0x28
	::System::Nullable_1<::System::Single> Radius; // 0x30
	::RPGTools::LDWhiteBox::JunctionType Type; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23E2446F4989D753__CTOR_OFFSET))(this);
	}
};
