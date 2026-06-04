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

#define CLASS_1_6135324DB18E6F67_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13690FE0)
#define CLASS_1_6135324DB18E6F67_METHOD_1_25BB49F51A3018E8_OFFSET UNITYSDK_OFFSET(0x13690930)
#define CLASS_1_6135324DB18E6F67_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x136908F0)
#define CLASS_1_6135324DB18E6F67_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x13690F50)
#define CLASS_1_6135324DB18E6F67_METHOD_1_D40CDB84B43A4CE0_OFFSET UNITYSDK_OFFSET(0x13690980)
#define CLASS_1_6135324DB18E6F67__CTOR_OFFSET UNITYSDK_OFFSET(0x136906E0)

inline static constexpr unsigned int Class_1_6135324DB18E6F67_TypeDefinitionIndex = 72989;

class Class_1_6135324DB18E6F67 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* Field_1_0; // 0x10
	::RPG::Client::Prop::ChimeraPreparationStateControllerBase* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::UnityEngine::GameObject*>* Field_1_2; // 0x20
	::UnityEngine::Transform* Field_1_3; // 0x28
	::Class_1_9C1673530BBC4E15* Field_1_4; // 0x30

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::UnityEngine::Transform* a2, ::Class_1_9C1673530BBC4E15* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::Class_1_9C1673530BBC4E15*))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_25BB49F51A3018E8(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_METHOD_1_25BB49F51A3018E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D40CDB84B43A4CE0(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_METHOD_1_D40CDB84B43A4CE0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_DISPOSE_OFFSET))(this);
	}
};
