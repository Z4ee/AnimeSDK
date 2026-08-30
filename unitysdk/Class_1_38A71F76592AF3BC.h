#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_38A71F76592AF3BC_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x179D2FA0)
#define CLASS_1_38A71F76592AF3BC__CTOR_OFFSET UNITYSDK_OFFSET(0x179D3000)

inline static constexpr unsigned int Class_1_38A71F76592AF3BC_TypeDefinitionIndex = 57471;

class Class_1_38A71F76592AF3BC : public ::System::Object
{
public:
	::System::UInt32 NBELOOHEBMO; // 0x10
	::System::Boolean JBDJFBPNAGG; // 0x14
	::System::UInt32 NPHAJEKCBKF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38A71F76592AF3BC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_38A71F76592AF3BC_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}
};
