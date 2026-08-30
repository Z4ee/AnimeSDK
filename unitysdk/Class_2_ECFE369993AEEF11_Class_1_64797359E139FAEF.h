#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CharacterEffect; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_2_ECFE369993AEEF11_CLASS_1_64797359E139FAEF_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x188A92E0)
#define CLASS_2_ECFE369993AEEF11_CLASS_1_64797359E139FAEF_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x188AA1A0)
#define CLASS_2_ECFE369993AEEF11_CLASS_1_64797359E139FAEF_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x188A9770)
#define CLASS_2_ECFE369993AEEF11_CLASS_1_64797359E139FAEF__CTOR_OFFSET UNITYSDK_OFFSET(0x188A9DB0)

inline static constexpr unsigned int Class_2_ECFE369993AEEF11_Class_1_64797359E139FAEF_TypeDefinitionIndex = 69833;

class Class_2_ECFE369993AEEF11_Class_1_64797359E139FAEF : public ::System::Object
{
public:
	::UnityEngine::Material* EEOCHLOPPCH; // 0x10
	::UnityEngine::Material* DOLIHDOBGEI; // 0x18
	::RPG::Client::CharacterEffect* FIJPFBNGMJL; // 0x20
	::UnityEngine::GameObject* GIGLHCOCKMP; // 0x28
	::UnityEngine::Transform* LEMMBOLAPII; // 0x30
	::UnityEngine::Vector3 GBELOEHECEC; // 0x38

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Transform* a3, ::System::Single a4, ::RPG::Client::CharacterEffect* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Single, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_CLASS_1_64797359E139FAEF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_CLASS_1_64797359E139FAEF_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_CLASS_1_64797359E139FAEF_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_CLASS_1_64797359E139FAEF_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
