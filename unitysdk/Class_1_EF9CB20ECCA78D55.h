#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_EF9CB20ECCA78D55_METHOD_1_2A6A623E06704370_OFFSET UNITYSDK_OFFSET(0x16831410)
#define CLASS_1_EF9CB20ECCA78D55_METHOD_1_63E8F19CFED33AB3_OFFSET UNITYSDK_OFFSET(0x16831370)
#define CLASS_1_EF9CB20ECCA78D55_METHOD_1_BC9C471E623498BA_OFFSET UNITYSDK_OFFSET(0x16831570)
#define CLASS_1_EF9CB20ECCA78D55__CTOR_OFFSET UNITYSDK_OFFSET(0x16831360)

inline static constexpr unsigned int Class_1_EF9CB20ECCA78D55_TypeDefinitionIndex = 40373;

class Class_1_EF9CB20ECCA78D55 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	::UnityEngine::Vector3 Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF9CB20ECCA78D55__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_63E8F19CFED33AB3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EF9CB20ECCA78D55_METHOD_1_63E8F19CFED33AB3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2A6A623E06704370(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF9CB20ECCA78D55_METHOD_1_2A6A623E06704370_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC9C471E623498BA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EF9CB20ECCA78D55_METHOD_1_BC9C471E623498BA_OFFSET))(this, a1, a2);
	}
};
