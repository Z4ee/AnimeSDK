#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_813743369E0E31B2.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A3725E92DC8B7EAB_CLEAR_OFFSET UNITYSDK_OFFSET(0x10B95070)
#define CLASS_2_A3725E92DC8B7EAB_METHOD_2_883D674468E05079_OFFSET UNITYSDK_OFFSET(0x10B95250)
#define CLASS_2_A3725E92DC8B7EAB_METHOD_2_CE2F374E3D8D5C7A_OFFSET UNITYSDK_OFFSET(0x10B95110)
#define CLASS_2_A3725E92DC8B7EAB__CTOR_OFFSET UNITYSDK_OFFSET(0x10B952B0)
#define CLASS_2_A3725E92DC8B7EAB___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x10B952F0)

inline static constexpr unsigned int Class_2_A3725E92DC8B7EAB_TypeDefinitionIndex = 43523;

class Class_2_A3725E92DC8B7EAB : public ::Class_1_813743369E0E31B2
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3725E92DC8B7EAB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3725E92DC8B7EAB_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CE2F374E3D8D5C7A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_A3725E92DC8B7EAB_METHOD_2_CE2F374E3D8D5C7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_883D674468E05079(::RPG::GameCore::ModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_A3725E92DC8B7EAB_METHOD_2_883D674468E05079_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3725E92DC8B7EAB___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
