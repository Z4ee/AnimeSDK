#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/MemoryStream.h"

#define CLASS_4_6BD781EAA1CAFD20_ONNEW_OFFSET UNITYSDK_OFFSET(0x19F91DD0)
#define CLASS_4_6BD781EAA1CAFD20_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x19F91D40)
#define CLASS_4_6BD781EAA1CAFD20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F91CB0)
#define CLASS_4_6BD781EAA1CAFD20__CTOR_OFFSET UNITYSDK_OFFSET(0x19F91C60)

inline static constexpr unsigned int Class_4_6BD781EAA1CAFD20_TypeDefinitionIndex = 40460;

class Class_4_6BD781EAA1CAFD20 : public ::System::IO::MemoryStream
{
public:
	::System::Boolean Field_4_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6BD781EAA1CAFD20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_6BD781EAA1CAFD20__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean OnRecycle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6BD781EAA1CAFD20_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnNew()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6BD781EAA1CAFD20_ONNEW_OFFSET))(this);
	}
};
