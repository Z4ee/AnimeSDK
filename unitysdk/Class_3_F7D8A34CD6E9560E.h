#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_8FF724B7EB760D40;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F7D8A34CD6E9560E_METHOD_3_2A5052CF4FC01953_OFFSET UNITYSDK_OFFSET(0xBD37DE0)
#define CLASS_3_F7D8A34CD6E9560E_METHOD_3_C91758E9F50178F5_OFFSET UNITYSDK_OFFSET(0xBD375C0)
#define CLASS_3_F7D8A34CD6E9560E_METHOD_3_CEFAD4DD6D77081E_OFFSET UNITYSDK_OFFSET(0xBD38050)
#define CLASS_3_F7D8A34CD6E9560E_METHOD_3_D3839D75592F183F_OFFSET UNITYSDK_OFFSET(0xBD37D60)
#define CLASS_3_F7D8A34CD6E9560E_METHOD_3_D75A2DACDE8B27CD_OFFSET UNITYSDK_OFFSET(0xBD37A40)
#define CLASS_3_F7D8A34CD6E9560E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD37330)
#define CLASS_3_F7D8A34CD6E9560E__CTOR_OFFSET UNITYSDK_OFFSET(0xBD372D0)

inline static constexpr unsigned int Class_3_F7D8A34CD6E9560E_TypeDefinitionIndex = 55260;

class Class_3_F7D8A34CD6E9560E : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8FF724B7EB760D40*>
{
public:
	::RPG::GameCore::StringHash JJOIEPIHIPG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8FF724B7EB760D40* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8FF724B7EB760D40*))((::PBYTE)hIl2Cpp + CLASS_3_F7D8A34CD6E9560E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7D8A34CD6E9560E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C91758E9F50178F5(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_F7D8A34CD6E9560E_METHOD_3_C91758E9F50178F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D75A2DACDE8B27CD(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_3_F7D8A34CD6E9560E_METHOD_3_D75A2DACDE8B27CD_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_3_CEFAD4DD6D77081E(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_F7D8A34CD6E9560E_METHOD_3_CEFAD4DD6D77081E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_D3839D75592F183F(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_F7D8A34CD6E9560E_METHOD_3_D3839D75592F183F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2A5052CF4FC01953(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_F7D8A34CD6E9560E_METHOD_3_2A5052CF4FC01953_OFFSET))(this, a1, a2);
	}
};
