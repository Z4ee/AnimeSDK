#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"

class Class_1_9C1673530BBC4E15;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46BC35DFEC1DBADB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106889A0)
#define CLASS_1_46BC35DFEC1DBADB_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x106885C0)
#define CLASS_1_46BC35DFEC1DBADB_METHOD_1_66F46BAD02D3714A_OFFSET UNITYSDK_OFFSET(0x106887E0)
#define CLASS_1_46BC35DFEC1DBADB_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x10688920)
#define CLASS_1_46BC35DFEC1DBADB_METHOD_1_EE9FBEC3350E8E2F_OFFSET UNITYSDK_OFFSET(0x10688790)
#define CLASS_1_46BC35DFEC1DBADB__CTOR_OFFSET UNITYSDK_OFFSET(0x10688380)

inline static constexpr unsigned int Class_1_46BC35DFEC1DBADB_TypeDefinitionIndex = 63929;

class Class_1_46BC35DFEC1DBADB : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraPreparationStateControllerBase* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* Field_1_0; // 0x18
	::Class_1_9C1673530BBC4E15* Field_1_2; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>*))((::PBYTE)hIl2Cpp + CLASS_1_46BC35DFEC1DBADB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46BC35DFEC1DBADB_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_EE9FBEC3350E8E2F(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_46BC35DFEC1DBADB_METHOD_1_EE9FBEC3350E8E2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_46BC35DFEC1DBADB_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_66F46BAD02D3714A(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_46BC35DFEC1DBADB_METHOD_1_66F46BAD02D3714A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46BC35DFEC1DBADB_DISPOSE_OFFSET))(this);
	}
};
