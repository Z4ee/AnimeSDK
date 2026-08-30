#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9DB62E0B1DD0ABEE;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A4633252561E9217_METHOD_1_2988687DA022D0E4_OFFSET UNITYSDK_OFFSET(0x160B8AB0)
#define CLASS_1_A4633252561E9217_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x160B8ED0)
#define CLASS_1_A4633252561E9217_METHOD_1_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x160B9060)
#define CLASS_1_A4633252561E9217_METHOD_1_8B53C27E5E20AF02_OFFSET UNITYSDK_OFFSET(0x160B8C70)
#define CLASS_1_A4633252561E9217_METHOD_1_A9C355BD643DDEBB_OFFSET UNITYSDK_OFFSET(0x160B90E0)
#define CLASS_1_A4633252561E9217_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x160B8CF0)
#define CLASS_1_A4633252561E9217_METHOD_1_ECA72114536D14FE_OFFSET UNITYSDK_OFFSET(0x160B93A0)
#define CLASS_1_A4633252561E9217__CTOR_OFFSET UNITYSDK_OFFSET(0x160B9460)

inline static constexpr unsigned int Class_1_A4633252561E9217_TypeDefinitionIndex = 72673;

class Class_1_A4633252561E9217 : public ::System::Object
{
public:
	::System::String* GBFLBJMMPGJ; // 0x10
	::RPG::Client::UIFollow3DTarget* KKCNMLOOPHE; // 0x18
	::Class_2_9DB62E0B1DD0ABEE* NHNHKBJJKPP; // 0x20
	::RPG::Client::UIController* CFKHNPGEAJA; // 0x28
	::RPG::Client::IAssetOperation* DKCONOOEOBK; // 0x30
	::System::String* PJIMDFGEALJ; // 0x38
	::UnityEngine::GameObject* DIHCNFOOEFF; // 0x40
	::System::Boolean FIOCJFMLCIB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4633252561E9217__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2988687DA022D0E4(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A4633252561E9217_METHOD_1_2988687DA022D0E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B53C27E5E20AF02(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A4633252561E9217_METHOD_1_8B53C27E5E20AF02_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4633252561E9217_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A4633252561E9217_METHOD_1_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9C355BD643DDEBB(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_A4633252561E9217_METHOD_1_A9C355BD643DDEBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_ECA72114536D14FE(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A4633252561E9217_METHOD_1_ECA72114536D14FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4633252561E9217_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}
};
