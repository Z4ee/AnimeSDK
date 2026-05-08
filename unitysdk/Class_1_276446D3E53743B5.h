#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_276446D3E53743B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12EE55A0)
#define CLASS_1_276446D3E53743B5_METHOD_1_9AA2AF407097C870_OFFSET UNITYSDK_OFFSET(0x12EE57F0)
#define CLASS_1_276446D3E53743B5__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE5440)

inline static constexpr unsigned int Class_1_276446D3E53743B5_TypeDefinitionIndex = 43210;

class Class_1_276446D3E53743B5 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::System::String* Field_1_4; // 0x10
	::System::Diagnostics::Stopwatch* Field_1_3; // 0x18
	::System::Text::StringBuilder* Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_276446D3E53743B5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_276446D3E53743B5_DISPOSE_OFFSET))(this);
	}

	::System::Int64 Method_1_9AA2AF407097C870()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_276446D3E53743B5_METHOD_1_9AA2AF407097C870_OFFSET))(this);
	}
};
