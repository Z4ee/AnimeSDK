#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C02BE68C85BC5BB7_METHOD_1_26655C7737A37F64_OFFSET UNITYSDK_OFFSET(0x182324F0)
#define CLASS_1_C02BE68C85BC5BB7_METHOD_1_4E21FEB4F41A9F72_OFFSET UNITYSDK_OFFSET(0x18232350)
#define CLASS_1_C02BE68C85BC5BB7_METHOD_1_576BB094A34DCF79_OFFSET UNITYSDK_OFFSET(0x18232260)
#define CLASS_1_C02BE68C85BC5BB7_METHOD_1_5AB9BBC02DFC15C8_OFFSET UNITYSDK_OFFSET(0x182328E0)
#define CLASS_1_C02BE68C85BC5BB7_METHOD_1_80DC27EA772A9678_OFFSET UNITYSDK_OFFSET(0x18233150)
#define CLASS_1_C02BE68C85BC5BB7_METHOD_1_D973EB69B6F67D8A_OFFSET UNITYSDK_OFFSET(0x18232700)
#define CLASS_1_C02BE68C85BC5BB7_METHOD_1_E6084B9BBC36465E_OFFSET UNITYSDK_OFFSET(0x18233390)

inline static constexpr unsigned int Class_1_C02BE68C85BC5BB7_TypeDefinitionIndex = 88989;

class Class_1_C02BE68C85BC5BB7 : public ::System::Object
{
public:
	static ::System::Double Method_1_576BB094A34DCF79(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Double(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_METHOD_1_576BB094A34DCF79_OFFSET))(a1);
	}

	static ::System::Void Method_1_4E21FEB4F41A9F72(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_METHOD_1_4E21FEB4F41A9F72_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Battle::Entity* Method_1_26655C7737A37F64(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_METHOD_1_26655C7737A37F64_OFFSET))(a1);
	}

	static ::System::Void Method_1_D973EB69B6F67D8A(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action_1<::System::Boolean>* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Action_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_METHOD_1_D973EB69B6F67D8A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_5AB9BBC02DFC15C8(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_METHOD_1_5AB9BBC02DFC15C8_OFFSET))(a1);
	}

	static ::System::Single Method_1_E6084B9BBC36465E(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_METHOD_1_E6084B9BBC36465E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_80DC27EA772A9678(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_METHOD_1_80DC27EA772A9678_OFFSET))(a1, a2, a3);
	}
};
