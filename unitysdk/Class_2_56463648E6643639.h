#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class Class_2_56463648E6643639_Class_1_B9DD8EEFA2E1204F;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class CharacterAnimEventConfig; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_56463648E6643639_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9085140)
#define CLASS_2_56463648E6643639_METHOD_2_29FF70238AFEFE30_1_OFFSET UNITYSDK_OFFSET(0x9085870)
#define CLASS_2_56463648E6643639_METHOD_2_29FF70238AFEFE30_OFFSET UNITYSDK_OFFSET(0x9085790)
#define CLASS_2_56463648E6643639_METHOD_2_803E9CF4DE8E4452_OFFSET UNITYSDK_OFFSET(0x90844E0)
#define CLASS_2_56463648E6643639_METHOD_2_97755001E44ED570_OFFSET UNITYSDK_OFFSET(0x9085690)
#define CLASS_2_56463648E6643639_METHOD_2_BE68D50CB10E7320_OFFSET UNITYSDK_OFFSET(0x90846D0)
#define CLASS_2_56463648E6643639_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x9084AA0)
#define CLASS_2_56463648E6643639_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x9085610)
#define CLASS_2_56463648E6643639_TICK_OFFSET UNITYSDK_OFFSET(0x9085380)
#define CLASS_2_56463648E6643639__CTOR_OFFSET UNITYSDK_OFFSET(0x9085950)
#define CLASS_2_56463648E6643639___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x90859F0)

inline static constexpr unsigned int Class_2_56463648E6643639_TypeDefinitionIndex = 52943;

class Class_2_56463648E6643639 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::AnimGroupEventConfig*>* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_56463648E6643639_Class_1_B9DD8EEFA2E1204F*>* Field_2_3; // 0x28
	::RPG::GameCore::CharacterModelComponent* Field_2_4; // 0x30
	::System::Boolean Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_803E9CF4DE8E4452(::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_METHOD_2_803E9CF4DE8E4452_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_TICK_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_29FF70238AFEFE30(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_METHOD_2_29FF70238AFEFE30_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_29FF70238AFEFE30_1(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_METHOD_2_29FF70238AFEFE30_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BE68D50CB10E7320(::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_METHOD_2_BE68D50CB10E7320_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_97755001E44ED570(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639_METHOD_2_97755001E44ED570_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56463648E6643639___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
