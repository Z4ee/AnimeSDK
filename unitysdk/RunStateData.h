#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityRunState; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RUNSTATEDATA_GETRUNSTATEKEY_OFFSET UNITYSDK_OFFSET(0x1AA28890)
#define RUNSTATEDATA_GETRUNSTATE_OFFSET UNITYSDK_OFFSET(0x1AA28750)
#define RUNSTATEDATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1AA28340)
#define RUNSTATEDATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1AA28450)
#define RUNSTATEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA28AF0)
#define RUNSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA28AE0)

inline static constexpr unsigned int RunStateData_TypeDefinitionIndex = 48510;

class RunStateData : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>** StaticGet__keyDict()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RunStateData_TypeDefinitionIndex)->GetStaticField(0x43D10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>** StaticGet__runStateDic()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>**)Il2CppClass::FromTypeDefinitionIndex(RunStateData_TypeDefinitionIndex)->GetStaticField(0x43D18);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNSTATEDATA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RUNSTATEDATA__CCTOR_OFFSET))();
	}

	static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + RUNSTATEDATA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
	}

	static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RUNSTATEDATA_RELOADFROMFILE_OFFSET))(isAync, complete);
	}

	static ::MoleMole::Config::ConfigEntityRunState* GetRunState(::System::String* key)
	{
		return ((::MoleMole::Config::ConfigEntityRunState*(*)(::System::String*))((::PBYTE)hIl2Cpp + RUNSTATEDATA_GETRUNSTATE_OFFSET))(key);
	}

	static ::System::String* GetRunStateKey(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::AnimMoveState runState)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimMoveState))((::PBYTE)hIl2Cpp + RUNSTATEDATA_GETRUNSTATEKEY_OFFSET))(entity, runState);
	}
};
