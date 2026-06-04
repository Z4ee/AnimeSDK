#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_037EA204E69EBC75;

#define CLASS_1_0EA099C7D681B6D6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BFE1B0)
#define CLASS_1_0EA099C7D681B6D6_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18BFE370)
#define CLASS_1_0EA099C7D681B6D6_METHOD_1_1B9A06AC7EA63500_OFFSET UNITYSDK_OFFSET(0x18BFE1F0)
#define CLASS_1_0EA099C7D681B6D6__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFE190)

inline static constexpr unsigned int Class_1_0EA099C7D681B6D6_TypeDefinitionIndex = 39465;

class Class_1_0EA099C7D681B6D6 : public ::System::Object
{
public:
	::Class_2_037EA204E69EBC75* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_037EA204E69EBC75* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_037EA204E69EBC75*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0EA099C7D681B6D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA099C7D681B6D6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B9A06AC7EA63500(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA099C7D681B6D6_METHOD_1_1B9A06AC7EA63500_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA099C7D681B6D6_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
