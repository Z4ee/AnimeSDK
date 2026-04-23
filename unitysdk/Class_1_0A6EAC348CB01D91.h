#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0A6EAC348CB01D91_METHOD_1_0B30E5943915F848_OFFSET UNITYSDK_OFFSET(0xD347F20)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_0FC476919235A2D3_OFFSET UNITYSDK_OFFSET(0xD347AC0)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_153DB45DA48D91A6_OFFSET UNITYSDK_OFFSET(0xD3480E0)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_1780DF616C30A86E_OFFSET UNITYSDK_OFFSET(0xD347D60)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_C0807A00AF3A55A2_OFFSET UNITYSDK_OFFSET(0xD3481D0)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_D679E0FE4C314C85_OFFSET UNITYSDK_OFFSET(0xD348650)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_DABF8E579AFFBDA4_OFFSET UNITYSDK_OFFSET(0xD348270)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_E1C9ECC43E038676_OFFSET UNITYSDK_OFFSET(0xD3489C0)
#define CLASS_1_0A6EAC348CB01D91__CCTOR_OFFSET UNITYSDK_OFFSET(0xD348CA0)

inline static constexpr unsigned int Class_1_0A6EAC348CB01D91_TypeDefinitionIndex = 68186;

class Class_1_0A6EAC348CB01D91 : public ::System::Object
{
public:
	static ::UnityEngine::RaycastHit* StaticGet_Field_1_2()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A6EAC348CB01D91_TypeDefinitionIndex)->GetStaticField(0x107C0);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_1_0()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A6EAC348CB01D91_TypeDefinitionIndex)->GetStaticField(0x107F0);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_1_1()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A6EAC348CB01D91_TypeDefinitionIndex)->GetStaticField(0x10820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_0FC476919235A2D3(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_0FC476919235A2D3_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackComponent* Method_1_1780DF616C30A86E()
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_1780DF616C30A86E_OFFSET))();
	}

	static ::RPG::Client::ActivityAlley::AlleyPackAnchor* Method_1_0B30E5943915F848()
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackAnchor*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_0B30E5943915F848_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_153DB45DA48D91A6()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_153DB45DA48D91A6_OFFSET))();
	}

	static ::UnityEngine::RaycastHit Method_1_C0807A00AF3A55A2()
	{
		return ((::UnityEngine::RaycastHit(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_C0807A00AF3A55A2_OFFSET))();
	}

	static ::RPG::Client::ActivityAlley::AlleyPackComponent* Method_1_DABF8E579AFFBDA4(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)(::UnityEngine::Transform*, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_DABF8E579AFFBDA4_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::RaycastHit Method_1_D679E0FE4C314C85(::UnityEngine::Camera* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::RaycastHit(*)(::UnityEngine::Camera*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_D679E0FE4C314C85_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Transform* Method_1_E1C9ECC43E038676(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_E1C9ECC43E038676_OFFSET))(a1, a2);
	}
};
