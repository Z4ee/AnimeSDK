#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class Class_2_CAB9E8A911AAF446_Class_1_B9DD8EEFA2E1204F;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class CharacterAnimEventConfig; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CAB9E8A911AAF446_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138201C0)
#define CLASS_2_CAB9E8A911AAF446_METHOD_2_2F3EC817524B7F5B_OFFSET UNITYSDK_OFFSET(0x1381F610)
#define CLASS_2_CAB9E8A911AAF446_METHOD_2_36611C69F16ABA75_1_OFFSET UNITYSDK_OFFSET(0x138208C0)
#define CLASS_2_CAB9E8A911AAF446_METHOD_2_36611C69F16ABA75_OFFSET UNITYSDK_OFFSET(0x13820790)
#define CLASS_2_CAB9E8A911AAF446_METHOD_2_97755001E44ED570_OFFSET UNITYSDK_OFFSET(0x13820690)
#define CLASS_2_CAB9E8A911AAF446_METHOD_2_FEF721E2504A48B2_OFFSET UNITYSDK_OFFSET(0x1381F780)
#define CLASS_2_CAB9E8A911AAF446_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x1381FA60)
#define CLASS_2_CAB9E8A911AAF446_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x13820610)
#define CLASS_2_CAB9E8A911AAF446_TICK_OFFSET UNITYSDK_OFFSET(0x138203E0)
#define CLASS_2_CAB9E8A911AAF446__CTOR_OFFSET UNITYSDK_OFFSET(0x138209F0)
#define CLASS_2_CAB9E8A911AAF446___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13820A90)

inline static constexpr unsigned int Class_2_CAB9E8A911AAF446_TypeDefinitionIndex = 53652;

class Class_2_CAB9E8A911AAF446 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::AnimGroupEventConfig*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_CAB9E8A911AAF446_Class_1_B9DD8EEFA2E1204F*>* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::CharacterModelComponent* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2F3EC817524B7F5B(::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_METHOD_2_2F3EC817524B7F5B_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_TICK_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_36611C69F16ABA75(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_METHOD_2_36611C69F16ABA75_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_36611C69F16ABA75_1(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_METHOD_2_36611C69F16ABA75_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FEF721E2504A48B2(::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_METHOD_2_FEF721E2504A48B2_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_97755001E44ED570(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446_METHOD_2_97755001E44ED570_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CAB9E8A911AAF446___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
