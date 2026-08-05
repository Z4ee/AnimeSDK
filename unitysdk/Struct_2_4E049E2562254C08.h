#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_4E049E2562254C08_METHOD_2_81E8348A50FCDC24_OFFSET UNITYSDK_OFFSET(0x87A760)
#define STRUCT_2_4E049E2562254C08_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x87A7C0)
#define STRUCT_2_4E049E2562254C08__CTOR_OFFSET UNITYSDK_OFFSET(0x87A6B0)

inline static constexpr unsigned int Struct_2_4E049E2562254C08_TypeDefinitionIndex = 82548;

struct alignas(4) Struct_2_4E049E2562254C08
{
	::System::Boolean Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_7; // 0x14
	::System::Single Field_2_6; // 0x20
	::UnityEngine::Vector3 Field_2_5; // 0x24
	::UnityEngine::RaycastHit Field_2_4; // 0x30

	::System::Void _ctor(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + STRUCT_2_4E049E2562254C08__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_4E049E2562254C08 Method_2_81E8348A50FCDC24(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_4E049E2562254C08(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_4E049E2562254C08_METHOD_2_81E8348A50FCDC24_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4E049E2562254C08_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}
};
