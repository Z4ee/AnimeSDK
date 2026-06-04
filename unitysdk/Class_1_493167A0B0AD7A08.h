#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_493167A0B0AD7A08_GET__RANDOM_OFFSET UNITYSDK_OFFSET(0x1400F3C0)
#define CLASS_1_493167A0B0AD7A08_METHOD_1_45872D1C931761E1_OFFSET UNITYSDK_OFFSET(0x1400F610)
#define CLASS_1_493167A0B0AD7A08_METHOD_1_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0x1400F540)
#define CLASS_1_493167A0B0AD7A08_METHOD_1_8DE44EEC3E24E5B0_1_OFFSET UNITYSDK_OFFSET(0x1400F5A0)
#define CLASS_1_493167A0B0AD7A08_METHOD_1_8DE44EEC3E24E5B0_OFFSET UNITYSDK_OFFSET(0x1400F450)
#define CLASS_1_493167A0B0AD7A08_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1400F410)
#define CLASS_1_493167A0B0AD7A08_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x1400F4C0)
#define CLASS_1_493167A0B0AD7A08__CTOR_OFFSET UNITYSDK_OFFSET(0x1400F3D0)

inline static constexpr unsigned int Class_1_493167A0B0AD7A08_TypeDefinitionIndex = 72336;

class Class_1_493167A0B0AD7A08 : public ::System::Object
{
public:
	::System::Random* __Random_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_493167A0B0AD7A08__CTOR_OFFSET))(this, a1);
	}

	::System::Random* get__Random()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_493167A0B0AD7A08_GET__RANDOM_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_493167A0B0AD7A08_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_493167A0B0AD7A08_METHOD_1_8DE44EEC3E24E5B0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_493167A0B0AD7A08_METHOD_1_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Double Method_1_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_493167A0B0AD7A08_METHOD_1_85C746F74910D9C1_OFFSET))(this);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_493167A0B0AD7A08_METHOD_1_8DE44EEC3E24E5B0_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_45872D1C931761E1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_493167A0B0AD7A08_METHOD_1_45872D1C931761E1_OFFSET))(this, a1, a2);
	}
};
