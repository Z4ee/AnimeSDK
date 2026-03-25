#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0ACE77AB9981A526_Class_1_1D86127F16B40D4B;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0ACE77AB9981A526_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BDABA0)
#define CLASS_2_0ACE77AB9981A526_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10BDA9C0)
#define CLASS_2_0ACE77AB9981A526_METHOD_2_3658BD3488A73B2E_OFFSET UNITYSDK_OFFSET(0x10BDA790)
#define CLASS_2_0ACE77AB9981A526_METHOD_2_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x10BDA6B0)
#define CLASS_2_0ACE77AB9981A526_METHOD_2_8FF8DD937E21C137_OFFSET UNITYSDK_OFFSET(0x10BDA410)
#define CLASS_2_0ACE77AB9981A526_METHOD_2_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0x10BDA740)
#define CLASS_2_0ACE77AB9981A526_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x10BDA350)
#define CLASS_2_0ACE77AB9981A526_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x10BDAC60)
#define CLASS_2_0ACE77AB9981A526_METHOD_2_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x10BDAA30)
#define CLASS_2_0ACE77AB9981A526__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDAC70)
#define CLASS_2_0ACE77AB9981A526___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10BDAD50)

inline static constexpr unsigned int Class_2_0ACE77AB9981A526_TypeDefinitionIndex = 45838;

class Class_2_0ACE77AB9981A526 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_0ACE77AB9981A526_Class_1_1D86127F16B40D4B*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_8FF8DD937E21C137(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_METHOD_2_8FF8DD937E21C137_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_METHOD_2_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_METHOD_2_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_METHOD_2_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Void Method_2_3658BD3488A73B2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_METHOD_2_3658BD3488A73B2E_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0ACE77AB9981A526___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
