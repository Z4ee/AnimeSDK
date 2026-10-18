#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8B7F0AE11FAA9E68_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xBB732A0)
#define CLASS_1_8B7F0AE11FAA9E68_METHOD_1_6F4F14049B043D6F_OFFSET UNITYSDK_OFFSET(0xBB73320)
#define CLASS_1_8B7F0AE11FAA9E68_METHOD_1_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xBB735C0)
#define CLASS_1_8B7F0AE11FAA9E68__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB73B40)

inline static constexpr unsigned int Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex = 73007;

class Class_1_8B7F0AE11FAA9E68 : public ::System::Object
{
public:
	static ::UnityEngine::Camera** StaticGet_IEMGKEFBPCG()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x2FF70);
	}
	static ::UnityEngine::Transform** StaticGet_DHJPAMNMOGO()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x2FF78);
	}
	static ::UnityEngine::Transform** StaticGet_KGIJAGKPGMO()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x2FF80);
	}
	static ::UnityEngine::Vector3* StaticGet_BKHBJLICFPM()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0xA290);
	}
	static ::System::Boolean* StaticGet_MFMCJABEDLE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0xA29C);
	}
	static ::UnityEngine::Vector3* StaticGet_PFMBDNAPPJH()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0xA2A0);
	}
	static ::UnityEngine::Vector3* StaticGet_LHLFBFGOGGN()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0xA2AC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B7F0AE11FAA9E68__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B7F0AE11FAA9E68_METHOD_1_0B7E3489D2C0938B_OFFSET))();
	}

	static ::System::Void Method_1_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B7F0AE11FAA9E68_METHOD_1_9D8CB5E47C1952BD_OFFSET))();
	}

	static ::System::Void Method_1_6F4F14049B043D6F(::System::Boolean a1, ::UnityEngine::Camera* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Camera*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8B7F0AE11FAA9E68_METHOD_1_6F4F14049B043D6F_OFFSET))(a1, a2, a3);
	}
};
