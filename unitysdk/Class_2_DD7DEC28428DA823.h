#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A97E60807F449E7;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DD7DEC28428DA823_METHOD_2_2F9D2A700A35779B_OFFSET UNITYSDK_OFFSET(0xC75B400)
#define CLASS_2_DD7DEC28428DA823_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC75B4D0)
#define CLASS_2_DD7DEC28428DA823_METHOD_2_E484621534821291_OFFSET UNITYSDK_OFFSET(0xC75B520)
#define CLASS_2_DD7DEC28428DA823__CTOR_OFFSET UNITYSDK_OFFSET(0xC75B5E0)

inline static constexpr unsigned int Class_2_DD7DEC28428DA823_TypeDefinitionIndex = 66730;

class Class_2_DD7DEC28428DA823 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::ParticleSystem* Field_2_0; // 0x60
	::UnityEngine::ParticleSystem* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::Vector3 Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD7DEC28428DA823__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2F9D2A700A35779B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD7DEC28428DA823_METHOD_2_2F9D2A700A35779B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD7DEC28428DA823_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E484621534821291(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_2_DD7DEC28428DA823_METHOD_2_E484621534821291_OFFSET))(this, a1);
	}
};
