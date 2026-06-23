#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole { class ZipLineSubSystem_CommonSkill; }
namespace MoleMole { class ZipLineSubSystem_EnterPointModel; }
namespace MoleMole { class ZipLineSubSystem_ExitPointModel; }
namespace MoleMole { class ZipLineSubSystem_MainState; }
namespace MoleMole { class ZipLineSubSystem_SwitchPointModel; }
template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLEEXIT_OFFSET UNITYSDK_OFFSET(0x115A3670)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLEHUDINPUT_OFFSET UNITYSDK_OFFSET(0x115A3690)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLESWITCH_OFFSET UNITYSDK_OFFSET(0x115A3630)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLETURNBACK_OFFSET UNITYSDK_OFFSET(0x115A3650)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENTERPOINTDATA_OFFSET UNITYSDK_OFFSET(0x115A35D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_EXITPOINTDATA_OFFSET UNITYSDK_OFFSET(0x115A3610)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_INCONSOLECOMBO_OFFSET UNITYSDK_OFFSET(0x115A3710)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_INZIPLINEHUD_OFFSET UNITYSDK_OFFSET(0x115A3730)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWENTERPOINT_OFFSET UNITYSDK_OFFSET(0x115A36B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWEXITPOINT_OFFSET UNITYSDK_OFFSET(0x115A36F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWSWITCHPOINT_OFFSET UNITYSDK_OFFSET(0x115A36D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SWITCHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x115A35F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x115A3750)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLEEXIT_OFFSET UNITYSDK_OFFSET(0x115A3680)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLEHUDINPUT_OFFSET UNITYSDK_OFFSET(0x115A36A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLESWITCH_OFFSET UNITYSDK_OFFSET(0x115A3640)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLETURNBACK_OFFSET UNITYSDK_OFFSET(0x115A3660)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENTERPOINTDATA_OFFSET UNITYSDK_OFFSET(0x115A35E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_EXITPOINTDATA_OFFSET UNITYSDK_OFFSET(0x115A3620)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_INCONSOLECOMBO_OFFSET UNITYSDK_OFFSET(0x115A3720)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_INZIPLINEHUD_OFFSET UNITYSDK_OFFSET(0x115A3740)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWENTERPOINT_OFFSET UNITYSDK_OFFSET(0x115A36C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWEXITPOINT_OFFSET UNITYSDK_OFFSET(0x115A3700)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWSWITCHPOINT_OFFSET UNITYSDK_OFFSET(0x115A36E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SWITCHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x115A3600)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x115A3510)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_0_OFFSET UNITYSDK_OFFSET(0x115A3C90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_10_OFFSET UNITYSDK_OFFSET(0x115A6150)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_11_OFFSET UNITYSDK_OFFSET(0x115A6250)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_12_OFFSET UNITYSDK_OFFSET(0x115A6600)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_13_OFFSET UNITYSDK_OFFSET(0x115A6700)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_14_OFFSET UNITYSDK_OFFSET(0x115A6740)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_1_OFFSET UNITYSDK_OFFSET(0x115A3DC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_2_OFFSET UNITYSDK_OFFSET(0x115A44A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_3_OFFSET UNITYSDK_OFFSET(0x115A4B10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_4_OFFSET UNITYSDK_OFFSET(0x115A51F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_5_OFFSET UNITYSDK_OFFSET(0x115A58D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_6_OFFSET UNITYSDK_OFFSET(0x115A5A60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_7_OFFSET UNITYSDK_OFFSET(0x115A5AA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_8_OFFSET UNITYSDK_OFFSET(0x115A5DE0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_9_OFFSET UNITYSDK_OFFSET(0x115A5EE0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_HUDModel_TypeDefinitionIndex = 74657;

	class ZipLineSubSystem_HUDModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _InConsoleCombo_k__BackingField; // 0x60
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _EnableTurnBack_k__BackingField; // 0x68
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _ShowEnterPoint_k__BackingField; // 0x70
		::MoleMole::ZipLineSubSystem_SwitchPointModel* _switchPoint; // 0x78
		::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* _ExitPointData_k__BackingField; // 0x80
		::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* _SwitchPointData_k__BackingField; // 0x88
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _EnableExit_k__BackingField; // 0x90
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _EnableHUDInput_k__BackingField; // 0x98
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0xA0
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _InZipLineHUD_k__BackingField; // 0xA8
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0xB0
		::MoleMole::ZipLineSubSystem_CommonSkill* _commonSkill; // 0xB8
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _ShowSwitchPoint_k__BackingField; // 0xC0
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _EnableSwitch_k__BackingField; // 0xC8
		::MoleMole::ZipLineSubSystem_EnterPointModel* _enterPoint; // 0xD0
		::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* _EnterPointData_k__BackingField; // 0xD8
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _ShowExitPoint_k__BackingField; // 0xE0
		::MoleMole::ZipLineSubSystem_ExitPointModel* _exit; // 0xE8

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem, ::MoleMole::ZipLineSubSystem_MainState* mainState, ::MoleMole::ZipLineSubSystem_EnterPointModel* enterPoint, ::MoleMole::ZipLineSubSystem_SwitchPointModel* switchPoint, ::MoleMole::ZipLineSubSystem_ExitPointModel* exit, ::MoleMole::ZipLineSubSystem_CommonSkill* commonSkill)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*, ::MoleMole::ZipLineSubSystem_MainState*, ::MoleMole::ZipLineSubSystem_EnterPointModel*, ::MoleMole::ZipLineSubSystem_SwitchPointModel*, ::MoleMole::ZipLineSubSystem_ExitPointModel*, ::MoleMole::ZipLineSubSystem_CommonSkill*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__CTOR_OFFSET))(this, ownerSubSystem, mainState, enterPoint, switchPoint, exit, commonSkill);
		}

		::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* get_EnterPointData()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENTERPOINTDATA_OFFSET))(this);
		}

		::System::Void set_EnterPointData(::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENTERPOINTDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* get_SwitchPointData()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SWITCHPOINTDATA_OFFSET))(this);
		}

		::System::Void set_SwitchPointData(::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SWITCHPOINTDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* get_ExitPointData()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_EXITPOINTDATA_OFFSET))(this);
		}

		::System::Void set_ExitPointData(::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_EXITPOINTDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_EnableSwitch()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLESWITCH_OFFSET))(this);
		}

		::System::Void set_EnableSwitch(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLESWITCH_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_EnableTurnBack()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLETURNBACK_OFFSET))(this);
		}

		::System::Void set_EnableTurnBack(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLETURNBACK_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_EnableExit()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLEEXIT_OFFSET))(this);
		}

		::System::Void set_EnableExit(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLEEXIT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_EnableHUDInput()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLEHUDINPUT_OFFSET))(this);
		}

		::System::Void set_EnableHUDInput(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLEHUDINPUT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_ShowEnterPoint()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWENTERPOINT_OFFSET))(this);
		}

		::System::Void set_ShowEnterPoint(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWENTERPOINT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_ShowSwitchPoint()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWSWITCHPOINT_OFFSET))(this);
		}

		::System::Void set_ShowSwitchPoint(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWSWITCHPOINT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_ShowExitPoint()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWEXITPOINT_OFFSET))(this);
		}

		::System::Void set_ShowExitPoint(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWEXITPOINT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_InConsoleCombo()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_INCONSOLECOMBO_OFFSET))(this);
		}

		::System::Void set_InConsoleCombo(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_INCONSOLECOMBO_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_InZipLineHUD()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_INZIPLINEHUD_OFFSET))(this);
		}

		::System::Void set_InZipLineHUD(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_INZIPLINEHUD_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Nullable_1<::Struct_2_CECEDD33F79E5905> _OnCreateProperty_b__55_0()
		{
			return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_0_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__55_1(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_1_OFFSET))(this, _);
		}

		::System::Nullable_1<::Struct_2_CECEDD33F79E5905> _OnCreateProperty_b__55_2()
		{
			return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_2_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__55_3(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_3_OFFSET))(this, _);
		}

		::System::Nullable_1<::Struct_2_CECEDD33F79E5905> _OnCreateProperty_b__55_4()
		{
			return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_4_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__55_5(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_5_OFFSET))(this, _);
		}

		::System::Boolean _OnCreateProperty_b__55_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_6_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__55_7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_7_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__55_8(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_8_OFFSET))(this, _);
		}

		::System::Boolean _OnCreateProperty_b__55_9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_9_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__55_10(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_10_OFFSET))(this, _);
		}

		::System::Boolean _OnCreateProperty_b__55_11()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_11_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__55_12(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_12_OFFSET))(this, _);
		}

		::System::Boolean _OnCreateProperty_b__55_13()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_13_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__55_14(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__55_14_OFFSET))(this, _);
		}
	};
}
