#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_4D6F12365BC4A10D_METHOD_1_0EFB8CFBDCD4FE03_OFFSET UNITYSDK_OFFSET(0x115DDBF0)
#define CLASS_1_4D6F12365BC4A10D_METHOD_1_2A6A623E06704370_OFFSET UNITYSDK_OFFSET(0x115DDDB0)
#define CLASS_1_4D6F12365BC4A10D_METHOD_1_63E8F19CFED33AB3_OFFSET UNITYSDK_OFFSET(0x115DDD10)
#define CLASS_1_4D6F12365BC4A10D__CTOR_OFFSET UNITYSDK_OFFSET(0x115DDBE0)

inline static constexpr unsigned int Class_1_4D6F12365BC4A10D_TypeDefinitionIndex = 42116;

class Class_1_4D6F12365BC4A10D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D6F12365BC4A10D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0EFB8CFBDCD4FE03(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4D6F12365BC4A10D_METHOD_1_0EFB8CFBDCD4FE03_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_63E8F19CFED33AB3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4D6F12365BC4A10D_METHOD_1_63E8F19CFED33AB3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2A6A623E06704370(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4D6F12365BC4A10D_METHOD_1_2A6A623E06704370_OFFSET))(this, a1, a2);
	}
};
