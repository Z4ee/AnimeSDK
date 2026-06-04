#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_80077FDCF934A697_METHOD_1_1DA6FF64C7C705EF_OFFSET UNITYSDK_OFFSET(0xA7460E0)
#define CLASS_1_80077FDCF934A697_METHOD_1_3FEC31896EE03459_OFFSET UNITYSDK_OFFSET(0xA746170)
#define CLASS_1_80077FDCF934A697_METHOD_1_463415E61F0D4405_OFFSET UNITYSDK_OFFSET(0xA745D10)
#define CLASS_1_80077FDCF934A697_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xA745BD0)
#define CLASS_1_80077FDCF934A697_METHOD_1_7131FDE42F1B27F4_OFFSET UNITYSDK_OFFSET(0xA7462B0)
#define CLASS_1_80077FDCF934A697__CTOR_OFFSET UNITYSDK_OFFSET(0xA745BB0)

inline static constexpr unsigned int Class_1_80077FDCF934A697_TypeDefinitionIndex = 64463;

class Class_1_80077FDCF934A697 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector2>* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30

	::System::Void _ctor(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_80077FDCF934A697__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_463415E61F0D4405(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_80077FDCF934A697_METHOD_1_463415E61F0D4405_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_3FEC31896EE03459(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_80077FDCF934A697_METHOD_1_3FEC31896EE03459_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_7131FDE42F1B27F4(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_80077FDCF934A697_METHOD_1_7131FDE42F1B27F4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80077FDCF934A697_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Boolean Method_1_1DA6FF64C7C705EF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_80077FDCF934A697_METHOD_1_1DA6FF64C7C705EF_OFFSET))(this, a1, a2);
	}
};
