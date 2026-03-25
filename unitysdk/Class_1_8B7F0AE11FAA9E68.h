#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8B7F0AE11FAA9E68_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xDE59090)
#define CLASS_1_8B7F0AE11FAA9E68_METHOD_1_6F4F14049B043D6F_OFFSET UNITYSDK_OFFSET(0xDE59110)
#define CLASS_1_8B7F0AE11FAA9E68_METHOD_1_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xDE593B0)
#define CLASS_1_8B7F0AE11FAA9E68__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE59930)

inline static constexpr unsigned int Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex = 59841;

class Class_1_8B7F0AE11FAA9E68 : public ::System::Object
{
public:
	static ::UnityEngine::Transform** StaticGet_Field_1_2()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x47890);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_1()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x47898);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x478A0);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x12960);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_5()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x1296C);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_4()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x12978);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7F0AE11FAA9E68_TypeDefinitionIndex)->GetStaticField(0x12984);
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
