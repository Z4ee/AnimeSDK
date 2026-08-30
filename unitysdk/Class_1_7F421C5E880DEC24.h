#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_7F421C5E880DEC24__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDB790)

inline static constexpr unsigned int Class_1_7F421C5E880DEC24_TypeDefinitionIndex = 42077;

class Class_1_7F421C5E880DEC24 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::UInt32>* NOIGKFBFKHM; // 0x10
	::System::Int32 HJKDPNOLLPG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F421C5E880DEC24__CTOR_OFFSET))(this);
	}
};
