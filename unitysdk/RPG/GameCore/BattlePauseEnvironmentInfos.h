#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_410;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_1_OFFSET UNITYSDK_OFFSET(0xCD37B20)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0xCD37A40)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_CLEARINFOS_OFFSET UNITYSDK_OFFSET(0xCD37BE0)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_GET_ENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0xCD37C80)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_SET_ENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0xCD37C90)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0xCD37CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePauseEnvironmentInfos_TypeDefinitionIndex = 50074;

	class BattlePauseEnvironmentInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>* _EnvironmentInfos_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS__CTOR_OFFSET))(this);
		}

		::System::Void AddEnvironmentInfos(::Class_0_16E4307DCC419505_410* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_410*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_OFFSET))(this, a1);
		}

		::System::Void AddEnvironmentInfos_1(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_1_OFFSET))(this, a1);
		}

		::System::Void ClearInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_CLEARINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>* get_EnvironmentInfos()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_GET_ENVIRONMENTINFOS_OFFSET))(this);
		}

		::System::Void set_EnvironmentInfos(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_SET_ENVIRONMENTINFOS_OFFSET))(this, a1);
		}
	};
}
