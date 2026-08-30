#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingCyclePhase.h"
#include "unitysdk/System/Object.h"

class Class_1_5452947417BCF16A;
class Class_1_89120A467F7A010D_2;
class Class_1_C5CEA8DD589BD643;
class Class_1_EF41A94FBB43C5D7_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D01AEBC83BBAFF3D_GET_AGENDAS_OFFSET UNITYSDK_OFFSET(0x1608C1A0)
#define CLASS_1_D01AEBC83BBAFF3D_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1608C0C0)
#define CLASS_1_D01AEBC83BBAFF3D_GET_CURRENTDAY_OFFSET UNITYSDK_OFFSET(0x1608C100)
#define CLASS_1_D01AEBC83BBAFF3D_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x1608C120)
#define CLASS_1_D01AEBC83BBAFF3D_GET_DRIVERS_OFFSET UNITYSDK_OFFSET(0x1608C160)
#define CLASS_1_D01AEBC83BBAFF3D_GET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x1608C180)
#define CLASS_1_D01AEBC83BBAFF3D_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1608C0E0)
#define CLASS_1_D01AEBC83BBAFF3D_GET_TARGETPARTID_OFFSET UNITYSDK_OFFSET(0x1608C140)
#define CLASS_1_D01AEBC83BBAFF3D_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0x1608C1C0)
#define CLASS_1_D01AEBC83BBAFF3D_METHOD_1_2F821AE85EE61F1A_OFFSET UNITYSDK_OFFSET(0x1608C1E0)
#define CLASS_1_D01AEBC83BBAFF3D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1608C290)
#define CLASS_1_D01AEBC83BBAFF3D_SET_AGENDAS_OFFSET UNITYSDK_OFFSET(0x1608C1B0)
#define CLASS_1_D01AEBC83BBAFF3D_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1608C0D0)
#define CLASS_1_D01AEBC83BBAFF3D_SET_CURRENTDAY_OFFSET UNITYSDK_OFFSET(0x1608C110)
#define CLASS_1_D01AEBC83BBAFF3D_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x1608C130)
#define CLASS_1_D01AEBC83BBAFF3D_SET_DRIVERS_OFFSET UNITYSDK_OFFSET(0x1608C170)
#define CLASS_1_D01AEBC83BBAFF3D_SET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x1608C190)
#define CLASS_1_D01AEBC83BBAFF3D_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x1608C0F0)
#define CLASS_1_D01AEBC83BBAFF3D_SET_TARGETPARTID_OFFSET UNITYSDK_OFFSET(0x1608C150)
#define CLASS_1_D01AEBC83BBAFF3D_SET_TEAMS_OFFSET UNITYSDK_OFFSET(0x1608C1D0)
#define CLASS_1_D01AEBC83BBAFF3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1608C2E0)
#define CLASS_1_D01AEBC83BBAFF3D__GET_CURRENTAGENDA_B__37_0_OFFSET UNITYSDK_OFFSET(0x1608C380)

inline static constexpr unsigned int Class_1_D01AEBC83BBAFF3D_TypeDefinitionIndex = 80377;

class Class_1_D01AEBC83BBAFF3D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C5CEA8DD589BD643*>* _Teams_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5452947417BCF16A*>* _Agendas_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_89120A467F7A010D_2*>* _Drivers_k__BackingField; // 0x20
	::Class_1_EF41A94FBB43C5D7_1* _Config_k__BackingField; // 0x28
	::RPG::Client::B51Racing::B51RacingCyclePhase _Phase_k__BackingField; // 0x30
	::System::UInt32 _DriverID_k__BackingField; // 0x34
	::System::UInt32 _FinishedMatchNum_k__BackingField; // 0x38
	::System::UInt32 _CurrentDay_k__BackingField; // 0x3C
	::System::UInt32 _TargetPartID_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D__CTOR_OFFSET))(this);
	}

	::Class_1_EF41A94FBB43C5D7_1* get_Config()
	{
		return ((::Class_1_EF41A94FBB43C5D7_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_1_EF41A94FBB43C5D7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF41A94FBB43C5D7_1*))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingCyclePhase get_Phase()
	{
		return ((::RPG::Client::B51Racing::B51RacingCyclePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_PHASE_OFFSET))(this);
	}

	::System::Void set_Phase(::RPG::Client::B51Racing::B51RacingCyclePhase a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCyclePhase))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_PHASE_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurrentDay()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_CURRENTDAY_OFFSET))(this);
	}

	::System::Void set_CurrentDay(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_CURRENTDAY_OFFSET))(this, a1);
	}

	::System::UInt32 get_DriverID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_DRIVERID_OFFSET))(this);
	}

	::System::Void set_DriverID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_DRIVERID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TargetPartID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_TARGETPARTID_OFFSET))(this);
	}

	::System::Void set_TargetPartID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_TARGETPARTID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_89120A467F7A010D_2*>* get_Drivers()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_89120A467F7A010D_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_DRIVERS_OFFSET))(this);
	}

	::System::Void set_Drivers(::System::Collections::Generic::List_1<::Class_1_89120A467F7A010D_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_89120A467F7A010D_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_DRIVERS_OFFSET))(this, a1);
	}

	::System::UInt32 get_FinishedMatchNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_FINISHEDMATCHNUM_OFFSET))(this);
	}

	::System::Void set_FinishedMatchNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_FINISHEDMATCHNUM_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_5452947417BCF16A*>* get_Agendas()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5452947417BCF16A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_AGENDAS_OFFSET))(this);
	}

	::System::Void set_Agendas(::System::Collections::Generic::List_1<::Class_1_5452947417BCF16A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5452947417BCF16A*>*))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_AGENDAS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_C5CEA8DD589BD643*>* get_Teams()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C5CEA8DD589BD643*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_GET_TEAMS_OFFSET))(this);
	}

	::System::Void set_Teams(::System::Collections::Generic::List_1<::Class_1_C5CEA8DD589BD643*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C5CEA8DD589BD643*>*))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_SET_TEAMS_OFFSET))(this, a1);
	}

	::Class_1_5452947417BCF16A* Method_1_2F821AE85EE61F1A()
	{
		return ((::Class_1_5452947417BCF16A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_METHOD_1_2F821AE85EE61F1A_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean _get_CurrentAgenda_b__37_0(::Class_1_5452947417BCF16A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5452947417BCF16A*))((::PBYTE)hIl2Cpp + CLASS_1_D01AEBC83BBAFF3D__GET_CURRENTAGENDA_B__37_0_OFFSET))(this, a1);
	}
};
