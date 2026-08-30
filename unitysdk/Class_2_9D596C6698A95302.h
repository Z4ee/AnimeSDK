#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

class Class_1_ED530DD3CAFC2138_1;

#define CLASS_2_9D596C6698A95302_METHOD_2_1B1122571FC27548_OFFSET UNITYSDK_OFFSET(0x17DDA760)
#define CLASS_2_9D596C6698A95302_START_OFFSET UNITYSDK_OFFSET(0x17DDA670)
#define CLASS_2_9D596C6698A95302_STOP_OFFSET UNITYSDK_OFFSET(0x17DDA710)
#define CLASS_2_9D596C6698A95302__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDA8A0)

inline static constexpr unsigned int Class_2_9D596C6698A95302_TypeDefinitionIndex = 66706;

class Class_2_9D596C6698A95302 : public ::Class_1_5E4ED920015DC82D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D596C6698A95302__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D596C6698A95302_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D596C6698A95302_STOP_OFFSET))(this);
	}

	::System::Void Method_2_1B1122571FC27548(::System::UInt16 a1, ::Class_1_ED530DD3CAFC2138_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_ED530DD3CAFC2138_1*))((::PBYTE)hIl2Cpp + CLASS_2_9D596C6698A95302_METHOD_2_1B1122571FC27548_OFFSET))(this, a1, a2);
	}
};
