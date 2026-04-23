#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_D8D34F173136EF31_CLASS_1_0A269D8215127608__CTOR_OFFSET UNITYSDK_OFFSET(0x1175B440)

inline static constexpr unsigned int Class_1_D8D34F173136EF31_Class_1_0A269D8215127608_TypeDefinitionIndex = 54810;

class Class_1_D8D34F173136EF31_Class_1_0A269D8215127608 : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* Field_1_0; // 0x10
	::System::Object* Field_1_1; // 0x18

	::System::Void _ctor(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8D34F173136EF31_CLASS_1_0A269D8215127608__CTOR_OFFSET))(this, a1, a2);
	}
};
