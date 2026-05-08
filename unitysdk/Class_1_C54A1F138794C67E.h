#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_C54A1F138794C67E_METHOD_1_72B7C957F94CEEFF_OFFSET UNITYSDK_OFFSET(0x12550E60)
#define CLASS_1_C54A1F138794C67E_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x125512F0)
#define CLASS_1_C54A1F138794C67E_METHOD_1_BE84C6F9C650F18D_OFFSET UNITYSDK_OFFSET(0x125514C0)
#define CLASS_1_C54A1F138794C67E_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x125519A0)
#define CLASS_1_C54A1F138794C67E_METHOD_1_F87C911526C7A42E_OFFSET UNITYSDK_OFFSET(0x125516C0)
#define CLASS_1_C54A1F138794C67E__CTOR_OFFSET UNITYSDK_OFFSET(0x12550E50)

inline static constexpr unsigned int Class_1_C54A1F138794C67E_TypeDefinitionIndex = 73222;

class Class_1_C54A1F138794C67E : public ::System::Object
{
public:
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_1_4; // 0x10
	::Nap::NapECS::EcsWorld* Field_1_2; // 0x18
	::Nap::NapECS::EcsFilter* Field_1_1; // 0x20
	::MoleMole::UIWindowController* Field_1_0; // 0x28
	::System::Boolean Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C54A1F138794C67E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_72B7C957F94CEEFF(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C54A1F138794C67E_METHOD_1_72B7C957F94CEEFF_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C54A1F138794C67E_METHOD_1_8F059A365E90744C_OFFSET))();
	}

	::System::Void Method_1_BE84C6F9C650F18D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_C54A1F138794C67E_METHOD_1_BE84C6F9C650F18D_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_F87C911526C7A42E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C54A1F138794C67E_METHOD_1_F87C911526C7A42E_OFFSET))(a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C54A1F138794C67E_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
