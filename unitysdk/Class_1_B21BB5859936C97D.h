#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_107413F390DDC212;

#define CLASS_1_B21BB5859936C97D_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x12E9B440)
#define CLASS_1_B21BB5859936C97D_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x12E9B410)
#define CLASS_1_B21BB5859936C97D_GET_ROUTEENDDATA_OFFSET UNITYSDK_OFFSET(0x12E9B450)
#define CLASS_1_B21BB5859936C97D_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x12E9B420)
#define CLASS_1_B21BB5859936C97D_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x12E9B430)
#define CLASS_1_B21BB5859936C97D_GET_TEAMMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12E9B460)
#define CLASS_1_B21BB5859936C97D_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x12E9B540)
#define CLASS_1_B21BB5859936C97D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12E9B470)
#define CLASS_1_B21BB5859936C97D_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x12E9B4D0)
#define CLASS_1_B21BB5859936C97D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x12E9B5B0)
#define CLASS_1_B21BB5859936C97D__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9B600)

inline static constexpr unsigned int Class_1_B21BB5859936C97D_TypeDefinitionIndex = 63947;

class Class_1_B21BB5859936C97D : public ::System::Object
{
public:
	::Class_1_107413F390DDC212* _RouteEndData_k__BackingField; // 0x10
	::System::UInt32 _TeamMemberCount_k__BackingField; // 0x18
	::System::UInt32 _LevelIndex_k__BackingField; // 0x1C
	::RPG::GameCore::ExpeditionBattleFlowStateType _StateType_k__BackingField; // 0x20
	::System::UInt32 _RouteID_k__BackingField; // 0x24
	::System::UInt32 _MapID_k__BackingField; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ExpeditionBattleFlowStateType a3, ::System::UInt32 a4, ::Class_1_107413F390DDC212* a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::Class_1_107413F390DDC212*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 get_MapID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_GET_MAPID_OFFSET))(this);
	}

	::System::UInt32 get_RouteID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_GET_ROUTEID_OFFSET))(this);
	}

	::RPG::GameCore::ExpeditionBattleFlowStateType get_StateType()
	{
		return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_GET_STATETYPE_OFFSET))(this);
	}

	::System::UInt32 get_LevelIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_GET_LEVELINDEX_OFFSET))(this);
	}

	::Class_1_107413F390DDC212* get_RouteEndData()
	{
		return ((::Class_1_107413F390DDC212*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_GET_ROUTEENDDATA_OFFSET))(this);
	}

	::System::UInt32 get_TeamMemberCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_GET_TEAMMEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_METHOD_1_77577333B4681208_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21BB5859936C97D_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
