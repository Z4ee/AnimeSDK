#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4252C4B7F9BB7BE7;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4252C4B7F9BB7BE7_CLASS_1_3A2A8C54D0517A2D_METHOD_1_26252AB70251EEC4_OFFSET UNITYSDK_OFFSET(0x132617E0)
#define CLASS_1_4252C4B7F9BB7BE7_CLASS_1_3A2A8C54D0517A2D__CTOR_OFFSET UNITYSDK_OFFSET(0x132617D0)

inline static constexpr unsigned int Class_1_4252C4B7F9BB7BE7_Class_1_3A2A8C54D0517A2D_TypeDefinitionIndex = 74453;

class Class_1_4252C4B7F9BB7BE7_Class_1_3A2A8C54D0517A2D : public ::System::Object
{
public:
	::Class_1_4252C4B7F9BB7BE7* Field_1_0; // 0x10
	::System::Action_1<::System::EventArgs*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4252C4B7F9BB7BE7_CLASS_1_3A2A8C54D0517A2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_26252AB70251EEC4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_4252C4B7F9BB7BE7_CLASS_1_3A2A8C54D0517A2D_METHOD_1_26252AB70251EEC4_OFFSET))(this, a1);
	}
};
