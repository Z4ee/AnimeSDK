#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_1_OFFSET UNITYSDK_OFFSET(0xA88CE90)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0xA88CDF0)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_CLEARINFOS_OFFSET UNITYSDK_OFFSET(0xA88CF50)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_GET_ENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0xA88CFC0)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_SET_ENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0xA88CFD0)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0xA88CFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePauseEnvironmentInfos_TypeDefinitionIndex = 43408;

	class BattlePauseEnvironmentInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_384*>* _EnvironmentInfos_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS__CTOR_OFFSET))(this);
		}

		::System::Void AddEnvironmentInfos(::Class_0_16E4307DCC419505_384* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_384*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_OFFSET))(this, info);
		}

		::System::Void AddEnvironmentInfos_1(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_384*>* infos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_384*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_1_OFFSET))(this, infos);
		}

		::System::Void ClearInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_CLEARINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_384*>* get_EnvironmentInfos()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_384*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_GET_ENVIRONMENTINFOS_OFFSET))(this);
		}

		::System::Void set_EnvironmentInfos(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_384*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_384*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_SET_ENVIRONMENTINFOS_OFFSET))(this, value);
		}
	};
}
