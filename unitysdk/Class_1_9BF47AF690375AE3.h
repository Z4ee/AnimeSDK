#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A31B907A2725B54;

#define CLASS_1_9BF47AF690375AE3_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14E30200)
#define CLASS_1_9BF47AF690375AE3_METHOD_1_18C95B7E84F97FF3_OFFSET UNITYSDK_OFFSET(0x14E302C0)
#define CLASS_1_9BF47AF690375AE3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14E2FF20)
#define CLASS_1_9BF47AF690375AE3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14E30050)
#define CLASS_1_9BF47AF690375AE3_METHOD_1_939383CFABF4988F_OFFSET UNITYSDK_OFFSET(0x14E2FF80)
#define CLASS_1_9BF47AF690375AE3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E301A0)
#define CLASS_1_9BF47AF690375AE3_METHOD_1_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x14E300C0)
#define CLASS_1_9BF47AF690375AE3__CTOR_OFFSET UNITYSDK_OFFSET(0x14E2FF10)

inline static constexpr unsigned int Class_1_9BF47AF690375AE3_TypeDefinitionIndex = 60785;

class Class_1_9BF47AF690375AE3 : public ::System::Object
{
public:
	::Class_1_2A31B907A2725B54* Field_1_3; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_0; // 0x20
	::System::Int32 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BF47AF690375AE3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BF47AF690375AE3_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_939383CFABF4988F()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BF47AF690375AE3_METHOD_1_939383CFABF4988F_OFFSET))(this);
	}

	::System::Void Method_1_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BF47AF690375AE3_METHOD_1_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BF47AF690375AE3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BF47AF690375AE3_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BF47AF690375AE3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_18C95B7E84F97FF3(::Class_1_2A31B907A2725B54* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A31B907A2725B54*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9BF47AF690375AE3_METHOD_1_18C95B7E84F97FF3_OFFSET))(this, a1, a2, a3);
	}
};
