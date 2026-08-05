#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_22.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_F5737224A0253470_CLASS_1_279841B7516EA062_METHOD_1_1CDC2389BE97A0F2_OFFSET UNITYSDK_OFFSET(0x125D4300)
#define CLASS_2_F5737224A0253470_CLASS_1_279841B7516EA062__CTOR_OFFSET UNITYSDK_OFFSET(0x125D42F0)

inline static constexpr unsigned int Class_2_F5737224A0253470_Class_1_279841B7516EA062_TypeDefinitionIndex = 78714;

class Class_2_F5737224A0253470_Class_1_279841B7516EA062 : public ::System::Object
{
public:
	::Struct_2_4C8453486C91E3A1_22 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5737224A0253470_CLASS_1_279841B7516EA062__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_1CDC2389BE97A0F2(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F5737224A0253470_CLASS_1_279841B7516EA062_METHOD_1_1CDC2389BE97A0F2_OFFSET))(this, a1);
	}
};
