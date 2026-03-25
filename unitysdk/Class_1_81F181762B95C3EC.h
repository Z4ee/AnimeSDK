#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_81F181762B95C3EC_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x10B47290)
#define CLASS_1_81F181762B95C3EC_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x10B47310)
#define CLASS_1_81F181762B95C3EC_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x10B472D0)
#define CLASS_1_81F181762B95C3EC__CTOR_OFFSET UNITYSDK_OFFSET(0x10B47280)

inline static constexpr unsigned int Class_1_81F181762B95C3EC_TypeDefinitionIndex = 55633;

class Class_1_81F181762B95C3EC : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::System::Action* a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81F181762B95C3EC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F181762B95C3EC_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F181762B95C3EC_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F181762B95C3EC_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
