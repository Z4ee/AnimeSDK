#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A40894F2FEF11FEB_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xBC9B420)
#define CLASS_1_A40894F2FEF11FEB_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0xBC9B6F0)
#define CLASS_1_A40894F2FEF11FEB_METHOD_1_F1E5D9D623511286_OFFSET UNITYSDK_OFFSET(0xBC9B480)
#define CLASS_1_A40894F2FEF11FEB__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC9BC50)

inline static constexpr unsigned int Class_1_A40894F2FEF11FEB_TypeDefinitionIndex = 72924;

class Class_1_A40894F2FEF11FEB : public ::System::Object
{
public:
	static ::UnityEngine::Camera** StaticGet_IEMGKEFBPCG()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x5E980);
	}
	static ::UnityEngine::Transform** StaticGet_KGIJAGKPGMO()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x5E988);
	}
	static ::UnityEngine::Transform** StaticGet_DHJPAMNMOGO()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x5E990);
	}
	static ::System::Boolean* StaticGet_MFMCJABEDLE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x135D0);
	}
	static ::UnityEngine::Vector3* StaticGet_LHLFBFGOGGN()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x135D4);
	}
	static ::UnityEngine::Vector3* StaticGet_PFMBDNAPPJH()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x135E0);
	}
	static ::UnityEngine::Vector3* StaticGet_BKHBJLICFPM()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x135EC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A40894F2FEF11FEB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A40894F2FEF11FEB_METHOD_1_10054BB010E03EDD_OFFSET))();
	}

	static ::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A40894F2FEF11FEB_METHOD_1_1DE63FE11FA0D5B4_OFFSET))();
	}

	static ::System::Void Method_1_F1E5D9D623511286(::System::Boolean a1, ::UnityEngine::Camera* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Camera*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A40894F2FEF11FEB_METHOD_1_F1E5D9D623511286_OFFSET))(a1, a2, a3);
	}
};
