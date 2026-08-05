#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_90889A2023AB884E_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17851490)
#define CLASS_1_90889A2023AB884E_3_METHOD_1_CD1B93718C3EC0F2_OFFSET UNITYSDK_OFFSET(0x178514A0)
#define CLASS_1_90889A2023AB884E_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17851760)
#define CLASS_1_90889A2023AB884E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17851480)

inline static constexpr unsigned int Class_1_90889A2023AB884E_3_TypeDefinitionIndex = 75238;

class Class_1_90889A2023AB884E_3 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_CD1B93718C3EC0F2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_METHOD_1_CD1B93718C3EC0F2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
