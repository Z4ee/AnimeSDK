#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_10A9F99BCFBAF496_CLASS_1_ADFE02E3F04A5AB0_METHOD_1_4E787491B029CB19_OFFSET UNITYSDK_OFFSET(0xF9900D0)
#define CLASS_2_10A9F99BCFBAF496_CLASS_1_ADFE02E3F04A5AB0__CTOR_OFFSET UNITYSDK_OFFSET(0xF9900C0)

inline static constexpr unsigned int Class_2_10A9F99BCFBAF496_Class_1_ADFE02E3F04A5AB0_TypeDefinitionIndex = 57062;

class Class_2_10A9F99BCFBAF496_Class_1_ADFE02E3F04A5AB0 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_CLASS_1_ADFE02E3F04A5AB0__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4E787491B029CB19(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_CLASS_1_ADFE02E3F04A5AB0_METHOD_1_4E787491B029CB19_OFFSET))(this, a1, a2);
	}
};
