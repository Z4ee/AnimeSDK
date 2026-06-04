#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"

class Class_1_9C1673530BBC4E15;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_652EBD29C875FB3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB757E40)
#define CLASS_1_652EBD29C875FB3B_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xB757A00)
#define CLASS_1_652EBD29C875FB3B_METHOD_1_66F46BAD02D3714A_OFFSET UNITYSDK_OFFSET(0xB757C80)
#define CLASS_1_652EBD29C875FB3B_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xB757DC0)
#define CLASS_1_652EBD29C875FB3B_METHOD_1_EE9FBEC3350E8E2F_OFFSET UNITYSDK_OFFSET(0xB757C30)
#define CLASS_1_652EBD29C875FB3B__CTOR_OFFSET UNITYSDK_OFFSET(0xB757780)

inline static constexpr unsigned int Class_1_652EBD29C875FB3B_TypeDefinitionIndex = 72998;

class Class_1_652EBD29C875FB3B : public ::System::Object
{
public:
	::Class_1_9C1673530BBC4E15* Field_1_0; // 0x10
	::RPG::Client::Prop::ChimeraPreparationStateControllerBase* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* Field_1_2; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>*))((::PBYTE)hIl2Cpp + CLASS_1_652EBD29C875FB3B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_652EBD29C875FB3B_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_1_EE9FBEC3350E8E2F(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_652EBD29C875FB3B_METHOD_1_EE9FBEC3350E8E2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_652EBD29C875FB3B_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_66F46BAD02D3714A(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_652EBD29C875FB3B_METHOD_1_66F46BAD02D3714A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_652EBD29C875FB3B_DISPOSE_OFFSET))(this);
	}
};
