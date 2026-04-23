#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0DAF7E6A8AC2BD0A;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchMascotBulletTriggerAttack; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_02CF111E104C7CAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A46C60)
#define CLASS_3_02CF111E104C7CAF_METHOD_3_24D4EB641B41AC50_OFFSET UNITYSDK_OFFSET(0x11A47970)
#define CLASS_3_02CF111E104C7CAF_METHOD_3_7FB8C68212C15822_OFFSET UNITYSDK_OFFSET(0x11A47A30)
#define CLASS_3_02CF111E104C7CAF_METHOD_3_94BBA0669C7A3611_OFFSET UNITYSDK_OFFSET(0x11A47BF0)
#define CLASS_3_02CF111E104C7CAF_METHOD_3_E979D0B202FB5BD8_OFFSET UNITYSDK_OFFSET(0x11A47FE0)
#define CLASS_3_02CF111E104C7CAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A46CB0)
#define CLASS_3_02CF111E104C7CAF__CTOR_OFFSET UNITYSDK_OFFSET(0x11A46BA0)
#define CLASS_3_02CF111E104C7CAF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A48190)

inline static constexpr unsigned int Class_3_02CF111E104C7CAF_TypeDefinitionIndex = 54160;

class Class_3_02CF111E104C7CAF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotBulletTriggerAttack*>
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_2; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_1; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_0; // 0x38

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

	::System::Void Method_3_7FB8C68212C15822(::RPG::GameCore::AdventureAbilityComponent* a1, ::Class_2_0DAF7E6A8AC2BD0A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*, ::Class_2_0DAF7E6A8AC2BD0A*))((::PBYTE)hIl2Cpp + CLASS_3_02CF111E104C7CAF_METHOD_3_7FB8C68212C15822_OFFSET))(this, a1, a2);
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
