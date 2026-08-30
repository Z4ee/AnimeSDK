#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/MemoryStream.h"

#define CLASS_4_6BD781EAA1CAFD20_ONNEW_OFFSET UNITYSDK_OFFSET(0x1D7AAAB0)
#define CLASS_4_6BD781EAA1CAFD20_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1D7AAA20)
#define CLASS_4_6BD781EAA1CAFD20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7AA990)
#define CLASS_4_6BD781EAA1CAFD20__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AA940)

inline static constexpr unsigned int Class_4_6BD781EAA1CAFD20_TypeDefinitionIndex = 42235;

class Class_4_6BD781EAA1CAFD20 : public ::System::IO::MemoryStream
{
public:
	::System::Boolean LJLAPMEGMEA; // 0x50

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
