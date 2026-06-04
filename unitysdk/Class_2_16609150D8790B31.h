#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87F8FFF9F8728678.h"

namespace System { class String; }

#define CLASS_2_16609150D8790B31_METHOD_2_A8E244E96DA48689_OFFSET UNITYSDK_OFFSET(0xA8FEAC0)
#define CLASS_2_16609150D8790B31__CTOR_OFFSET UNITYSDK_OFFSET(0xA8FECE0)

inline static constexpr unsigned int Class_2_16609150D8790B31_TypeDefinitionIndex = 70924;

class Class_2_16609150D8790B31 : public ::Class_1_87F8FFF9F8728678
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16609150D8790B31__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_A8E244E96DA48689(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_16609150D8790B31_METHOD_2_A8E244E96DA48689_OFFSET))(this, a1, a2);
	}
};
