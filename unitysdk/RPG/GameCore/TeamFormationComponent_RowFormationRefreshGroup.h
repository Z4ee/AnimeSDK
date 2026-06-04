#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BF927CBEA754F6BE;
namespace RPG::GameCore { class TeamFormationComponent_RowFormationLocationData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_FINDFORMATIONWITHFILTER_OFFSET UNITYSDK_OFFSET(0xCF24EC0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_GETFORMATIONLIST_OFFSET UNITYSDK_OFFSET(0xCF249E0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_GETINDEX_OFFSET UNITYSDK_OFFSET(0xCF250F0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xCF24680)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_GET_REALLENGTH_OFFSET UNITYSDK_OFFSET(0xCF24EA0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_INIT_OFFSET UNITYSDK_OFFSET(0xCF243D0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_RESET_OFFSET UNITYSDK_OFFSET(0xCF244E0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_SET_REALLENGTH_OFFSET UNITYSDK_OFFSET(0xCF24EB0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP__ADDFORMATION_OFFSET UNITYSDK_OFFSET(0xCF24F60)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xCF24A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_RowFormationRefreshGroup_TypeDefinitionIndex = 53915;

	class TeamFormationComponent_RowFormationRefreshGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*>* _formationList; // 0x10
		::System::Int32 _RealLength_k__BackingField; // 0x18
		::System::Int32 RowIndex; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_RealLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_GET_REALLENGTH_OFFSET))(this);
		}

		::System::Void set_RealLength(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_SET_REALLENGTH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*>* GetFormationList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_GETFORMATIONLIST_OFFSET))(this);
		}

		::RPG::GameCore::TeamFormationComponent_RowFormationLocationData* get_Item(::System::Int32 a1)
		{
			return ((::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_RESET_OFFSET))(this);
		}

		::RPG::GameCore::TeamFormationComponent_RowFormationLocationData* FindFormationWithFilter(::System::Int32 a1)
		{
			return ((::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_FINDFORMATIONWITHFILTER_OFFSET))(this, a1);
		}

		::System::Void _AddFormation(::Class_2_BF927CBEA754F6BE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP__ADDFORMATION_OFFSET))(this, a1);
		}

		::System::Int32 GetIndex(::Class_2_BF927CBEA754F6BE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_GETINDEX_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Collections::Generic::List_1<::Class_2_BF927CBEA754F6BE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_BF927CBEA754F6BE*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONREFRESHGROUP_INIT_OFFSET))(this, a1);
		}
	};
}
