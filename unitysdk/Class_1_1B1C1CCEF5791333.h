#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1B1C1CCEF5791333_GET_CANFOCUS_OFFSET UNITYSDK_OFFSET(0xBBC9000)
#define CLASS_1_1B1C1CCEF5791333_GET_LABEL_OFFSET UNITYSDK_OFFSET(0xBBC8FF0)
#define CLASS_1_1B1C1CCEF5791333__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC9010)

inline static constexpr unsigned int Class_1_1B1C1CCEF5791333_TypeDefinitionIndex = 73371;

class Class_1_1B1C1CCEF5791333 : public ::System::Object
{
public:
	::System::String* _Label_k__BackingField; // 0x10
	::System::Boolean _CanFocus_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B1C1CCEF5791333__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Label()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1C1CCEF5791333_GET_LABEL_OFFSET))(this);
	}

	::System::Boolean get_CanFocus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B1C1CCEF5791333_GET_CANFOCUS_OFFSET))(this);
	}
};
