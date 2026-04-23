#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"

class Class_1_9C1673530BBC4E15;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_33123250A57418EB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE006EC0)
#define CLASS_1_33123250A57418EB_METHOD_1_5A5E4AE689816AC0_OFFSET UNITYSDK_OFFSET(0xE0068E0)
#define CLASS_1_33123250A57418EB_METHOD_1_5C81E349D6D431CD_OFFSET UNITYSDK_OFFSET(0xE006890)
#define CLASS_1_33123250A57418EB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE006850)
#define CLASS_1_33123250A57418EB_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xE006E30)
#define CLASS_1_33123250A57418EB__CTOR_OFFSET UNITYSDK_OFFSET(0xE006670)

inline static constexpr unsigned int Class_1_33123250A57418EB_TypeDefinitionIndex = 71967;

class Class_1_33123250A57418EB : public ::System::Object
{
public:
	::Class_1_9C1673530BBC4E15* Field_1_4; // 0x10
	::RPG::Client::Prop::ChimeraPreparationStateControllerBase* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* Field_1_0; // 0x20
	::UnityEngine::Transform* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::UnityEngine::GameObject*>* Field_1_1; // 0x30

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::UnityEngine::Transform* a2, ::Class_1_9C1673530BBC4E15* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::Class_1_9C1673530BBC4E15*))((::PBYTE)hIl2Cpp + CLASS_1_33123250A57418EB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33123250A57418EB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_5C81E349D6D431CD(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_33123250A57418EB_METHOD_1_5C81E349D6D431CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33123250A57418EB_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A5E4AE689816AC0(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_33123250A57418EB_METHOD_1_5A5E4AE689816AC0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33123250A57418EB_DISPOSE_OFFSET))(this);
	}
};
