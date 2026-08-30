#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
namespace System { class String; }

#define CLASS_1_070447EE4188B20D_METHOD_1_CDC061D2DEADD8BB_OFFSET UNITYSDK_OFFSET(0x17F8B1D0)
#define CLASS_1_070447EE4188B20D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8B410)

inline static constexpr unsigned int Class_1_070447EE4188B20D_TypeDefinitionIndex = 67245;

class Class_1_070447EE4188B20D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070447EE4188B20D__CTOR_OFFSET))(this);
	}

	::System::Object* Method_1_CDC061D2DEADD8BB(::System::String* a1, ::Class_0_16E4307DCC419505_955* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_955*))((::PBYTE)hIl2Cpp + CLASS_1_070447EE4188B20D_METHOD_1_CDC061D2DEADD8BB_OFFSET))(this, a1, a2);
	}
};
