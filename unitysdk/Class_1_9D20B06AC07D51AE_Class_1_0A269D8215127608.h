#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_9D20B06AC07D51AE_CLASS_1_0A269D8215127608__CTOR_OFFSET UNITYSDK_OFFSET(0x16A096B0)

inline static constexpr unsigned int Class_1_9D20B06AC07D51AE_Class_1_0A269D8215127608_TypeDefinitionIndex = 56774;

class Class_1_9D20B06AC07D51AE_Class_1_0A269D8215127608 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::System::Action_1<::System::Object*>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9D20B06AC07D51AE_CLASS_1_0A269D8215127608__CTOR_OFFSET))(this, a1, a2);
	}
};
