#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0A6EAC348CB01D91_METHOD_1_20064D9C10410D3D_OFFSET UNITYSDK_OFFSET(0x1808FDD0)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_3C1DB4AC06722D16_OFFSET UNITYSDK_OFFSET(0x1808FB10)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_64497D8887A24FCC_OFFSET UNITYSDK_OFFSET(0x1808F6D0)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_8939EFC36C788980_OFFSET UNITYSDK_OFFSET(0x1808F940)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_90559D17D3CDF819_OFFSET UNITYSDK_OFFSET(0x1808FCE0)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_D679E0FE4C314C85_OFFSET UNITYSDK_OFFSET(0x18090200)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_DABF8E579AFFBDA4_OFFSET UNITYSDK_OFFSET(0x1808FE50)
#define CLASS_1_0A6EAC348CB01D91_METHOD_1_E1C9ECC43E038676_OFFSET UNITYSDK_OFFSET(0x18090540)
#define CLASS_1_0A6EAC348CB01D91__CCTOR_OFFSET UNITYSDK_OFFSET(0x180907F0)

inline static constexpr unsigned int Class_1_0A6EAC348CB01D91_TypeDefinitionIndex = 73980;

class Class_1_0A6EAC348CB01D91 : public ::System::Object
{
public:
	static ::UnityEngine::RaycastHit* StaticGet_EBAMJBAHGIB()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A6EAC348CB01D91_TypeDefinitionIndex)->GetStaticField(0x124A0);
	}
	static ::UnityEngine::RaycastHit* StaticGet_OOEBFCMJMBJ()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A6EAC348CB01D91_TypeDefinitionIndex)->GetStaticField(0x124D0);
	}
	static ::UnityEngine::RaycastHit* StaticGet_ADKIAOLDKGM()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A6EAC348CB01D91_TypeDefinitionIndex)->GetStaticField(0x12500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_64497D8887A24FCC(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_64497D8887A24FCC_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackComponent* Method_1_8939EFC36C788980()
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_8939EFC36C788980_OFFSET))();
	}

	static ::RPG::Client::ActivityAlley::AlleyPackAnchor* Method_1_3C1DB4AC06722D16()
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackAnchor*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_3C1DB4AC06722D16_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_90559D17D3CDF819()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_90559D17D3CDF819_OFFSET))();
	}

	static ::UnityEngine::RaycastHit Method_1_20064D9C10410D3D()
	{
		return ((::UnityEngine::RaycastHit(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A6EAC348CB01D91_METHOD_1_20064D9C10410D3D_OFFSET))();
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
