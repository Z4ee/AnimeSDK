#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_90889A2023AB884E_2_METHOD_1_79D58D34502167A7_OFFSET UNITYSDK_OFFSET(0x1727B9D0)
#define CLASS_1_90889A2023AB884E_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1727BCA0)
#define CLASS_1_90889A2023AB884E_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1727BCB0)
#define CLASS_1_90889A2023AB884E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1727B9C0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_2_TypeDefinitionIndex = 40146;

class Class_1_90889A2023AB884E_2 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_79D58D34502167A7()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2_METHOD_1_79D58D34502167A7_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
