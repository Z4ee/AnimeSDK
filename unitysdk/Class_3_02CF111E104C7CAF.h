#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_501C04C699F96C4C;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchMascotBulletTriggerAttack; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_02CF111E104C7CAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105E7BF0)
#define CLASS_3_02CF111E104C7CAF_METHOD_3_24D4EB641B41AC50_OFFSET UNITYSDK_OFFSET(0x105E8900)
#define CLASS_3_02CF111E104C7CAF_METHOD_3_7FB8C68212C15822_OFFSET UNITYSDK_OFFSET(0x105E89C0)
#define CLASS_3_02CF111E104C7CAF_METHOD_3_94BBA0669C7A3611_OFFSET UNITYSDK_OFFSET(0x105E8B70)
#define CLASS_3_02CF111E104C7CAF_METHOD_3_E979D0B202FB5BD8_OFFSET UNITYSDK_OFFSET(0x105E8F40)
#define CLASS_3_02CF111E104C7CAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105E7C40)
#define CLASS_3_02CF111E104C7CAF__CTOR_OFFSET UNITYSDK_OFFSET(0x105E7B30)
#define CLASS_3_02CF111E104C7CAF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105E90F0)

inline static constexpr unsigned int Class_3_02CF111E104C7CAF_TypeDefinitionIndex = 47425;

class Class_3_02CF111E104C7CAF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotBulletTriggerAttack*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_2; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotBulletTriggerAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotBulletTriggerAttack*))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_24D4EB641B41AC50(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF_METHOD_3_24D4EB641B41AC50_OFFSET))(this, a1);
	}

	::System::Void Method_3_7FB8C68212C15822(::RPG::GameCore::AdventureAbilityComponent* a1, ::Class_2_501C04C699F96C4C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*, ::Class_2_501C04C699F96C4C*))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF_METHOD_3_7FB8C68212C15822_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_3_94BBA0669C7A3611(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF_METHOD_3_94BBA0669C7A3611_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_3_E979D0B202FB5BD8(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF_METHOD_3_E979D0B202FB5BD8_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
