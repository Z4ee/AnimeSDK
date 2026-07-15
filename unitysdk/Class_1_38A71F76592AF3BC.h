#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_38A71F76592AF3BC_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x16ED0EE0)
#define CLASS_1_38A71F76592AF3BC__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED0F40)

inline static constexpr unsigned int Class_1_38A71F76592AF3BC_TypeDefinitionIndex = 54750;

class Class_1_38A71F76592AF3BC : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38A71F76592AF3BC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_38A71F76592AF3BC_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}
};
