#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_4EEB02DE2B991348_METHOD_1_0173DC4321843C93_OFFSET UNITYSDK_OFFSET(0xDB66380)
#define CLASS_1_4EEB02DE2B991348_METHOD_1_53B8732CBEB4DD0B_OFFSET UNITYSDK_OFFSET(0xDB66200)
#define CLASS_1_4EEB02DE2B991348_METHOD_1_C0AC14CF94069BDD_OFFSET UNITYSDK_OFFSET(0xDB664E0)
#define CLASS_1_4EEB02DE2B991348__CTOR_OFFSET UNITYSDK_OFFSET(0xDB661F0)

inline static constexpr unsigned int Class_1_4EEB02DE2B991348_TypeDefinitionIndex = 63981;

class Class_1_4EEB02DE2B991348 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EEB02DE2B991348__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_53B8732CBEB4DD0B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4EEB02DE2B991348_METHOD_1_53B8732CBEB4DD0B_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_0173DC4321843C93(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4EEB02DE2B991348_METHOD_1_0173DC4321843C93_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_C0AC14CF94069BDD(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4EEB02DE2B991348_METHOD_1_C0AC14CF94069BDD_OFFSET))(this, a1, a2);
	}
};
