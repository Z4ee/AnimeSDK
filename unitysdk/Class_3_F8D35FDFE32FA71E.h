#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_271E6243562E73F4;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_F8D35FDFE32FA71E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15168700)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_02A6DF52656DF908_OFFSET UNITYSDK_OFFSET(0x15169D00)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_38E1627E4DD996F7_OFFSET UNITYSDK_OFFSET(0x1516A970)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_3C26D5DDEE9325CF_OFFSET UNITYSDK_OFFSET(0x1516AB00)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_826D78AFC3A54C43_OFFSET UNITYSDK_OFFSET(0x15169420)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_8581271691F5D84B_OFFSET UNITYSDK_OFFSET(0x151695A0)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_919D21E2A0F4A061_OFFSET UNITYSDK_OFFSET(0x15168A60)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_9F01B448AD7A04F2_OFFSET UNITYSDK_OFFSET(0x1516A600)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_A495B86A75B7AD65_OFFSET UNITYSDK_OFFSET(0x151689C0)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1516AA70)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_C2720ACCFA0F472F_OFFSET UNITYSDK_OFFSET(0x15169E20)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_C8E18BA4042A0948_OFFSET UNITYSDK_OFFSET(0x1516AC20)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_E33D24F17DD0EB27_OFFSET UNITYSDK_OFFSET(0x1516A450)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_E8AE5BF3C13BD4FB_OFFSET UNITYSDK_OFFSET(0x151692F0)
#define CLASS_3_F8D35FDFE32FA71E_METHOD_3_F3BB885843BD0E09_OFFSET UNITYSDK_OFFSET(0x15169F70)
#define CLASS_3_F8D35FDFE32FA71E__CTOR_OFFSET UNITYSDK_OFFSET(0x15168970)

inline static constexpr unsigned int Class_3_F8D35FDFE32FA71E_TypeDefinitionIndex = 43382;

class Class_3_F8D35FDFE32FA71E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_A495B86A75B7AD65(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_A495B86A75B7AD65_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_919D21E2A0F4A061(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_919D21E2A0F4A061_OFFSET))(a1);
	}

	::System::Void Method_3_E8AE5BF3C13BD4FB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_E8AE5BF3C13BD4FB_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_826D78AFC3A54C43(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_826D78AFC3A54C43_OFFSET))(a1);
	}

	static ::System::Void Method_3_02A6DF52656DF908(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_02A6DF52656DF908_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_C2720ACCFA0F472F(::Class_3_F97B015544BE936B* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::Class_3_F97B015544BE936B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_C2720ACCFA0F472F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F3BB885843BD0E09(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_F3BB885843BD0E09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E33D24F17DD0EB27(::Class_3_271E6243562E73F4* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_271E6243562E73F4*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_E33D24F17DD0EB27_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8581271691F5D84B(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_8581271691F5D84B_OFFSET))(a1, a2);
	}

	::System::Void Method_3_9F01B448AD7A04F2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_9F01B448AD7A04F2_OFFSET))(this, a1);
	}

	::System::Void Method_3_38E1627E4DD996F7(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_38E1627E4DD996F7_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_3C26D5DDEE9325CF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_3C26D5DDEE9325CF_OFFSET))(a1);
	}

	static ::System::Void Method_3_C8E18BA4042A0948(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5, ::System::Boolean a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F8D35FDFE32FA71E_METHOD_3_C8E18BA4042A0948_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
