#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole { class ZipLineSubSystem_CommonSkill; }
namespace MoleMole { class ZipLineSubSystem_EnterPointModel; }
namespace MoleMole { class ZipLineSubSystem_ExitPointModel; }
namespace MoleMole { class ZipLineSubSystem_MainState; }
namespace MoleMole { class ZipLineSubSystem_SwitchPointModel; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLEEXIT_OFFSET UNITYSDK_OFFSET(0x11667780)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLEHUDINPUT_OFFSET UNITYSDK_OFFSET(0x116677C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLESWITCH_OFFSET UNITYSDK_OFFSET(0x11667740)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLETURNBACK_OFFSET UNITYSDK_OFFSET(0x11667760)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENTERPOINTDATA_OFFSET UNITYSDK_OFFSET(0x116676E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_EXITPOINTDATA_OFFSET UNITYSDK_OFFSET(0x11667720)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_INCONSOLECOMBO_OFFSET UNITYSDK_OFFSET(0x11667840)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_INZIPLINEHUD_OFFSET UNITYSDK_OFFSET(0x11667860)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ISENTERING_OFFSET UNITYSDK_OFFSET(0x116677A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWENTERPOINT_OFFSET UNITYSDK_OFFSET(0x116677E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWEXITPOINT_OFFSET UNITYSDK_OFFSET(0x11667820)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWSWITCHPOINT_OFFSET UNITYSDK_OFFSET(0x11667800)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SWITCHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x11667700)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11667880)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLEEXIT_OFFSET UNITYSDK_OFFSET(0x11667790)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLEHUDINPUT_OFFSET UNITYSDK_OFFSET(0x116677D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLESWITCH_OFFSET UNITYSDK_OFFSET(0x11667750)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLETURNBACK_OFFSET UNITYSDK_OFFSET(0x11667770)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENTERPOINTDATA_OFFSET UNITYSDK_OFFSET(0x116676F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_EXITPOINTDATA_OFFSET UNITYSDK_OFFSET(0x11667730)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_INCONSOLECOMBO_OFFSET UNITYSDK_OFFSET(0x11667850)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_INZIPLINEHUD_OFFSET UNITYSDK_OFFSET(0x11667870)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ISENTERING_OFFSET UNITYSDK_OFFSET(0x116677B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWENTERPOINT_OFFSET UNITYSDK_OFFSET(0x116677F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWEXITPOINT_OFFSET UNITYSDK_OFFSET(0x11667830)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWSWITCHPOINT_OFFSET UNITYSDK_OFFSET(0x11667810)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SWITCHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x11667710)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11667590)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_0_OFFSET UNITYSDK_OFFSET(0x11667DF0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_10_OFFSET UNITYSDK_OFFSET(0x1166A350)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_11_OFFSET UNITYSDK_OFFSET(0x1166A450)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_12_OFFSET UNITYSDK_OFFSET(0x1166A820)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_13_OFFSET UNITYSDK_OFFSET(0x1166A920)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_14_OFFSET UNITYSDK_OFFSET(0x1166AA30)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_1_OFFSET UNITYSDK_OFFSET(0x11667F20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_2_OFFSET UNITYSDK_OFFSET(0x11668610)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_3_OFFSET UNITYSDK_OFFSET(0x11668C70)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_4_OFFSET UNITYSDK_OFFSET(0x11669360)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_5_OFFSET UNITYSDK_OFFSET(0x11669AA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_6_OFFSET UNITYSDK_OFFSET(0x11669C30)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_7_OFFSET UNITYSDK_OFFSET(0x11669C70)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_8_OFFSET UNITYSDK_OFFSET(0x11669FD0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_9_OFFSET UNITYSDK_OFFSET(0x1166A0D0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_HUDModel_TypeDefinitionIndex = 63898;

	class ZipLineSubSystem_HUDModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* _EnterPointData_k__BackingField; // 0x80
		::MoleMole::ZipLineSubSystem_CommonSkill* _commonSkill; // 0x88
		::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* _SwitchPointData_k__BackingField; // 0x90
		::MoleMole::ZipLineSubSystem_EnterPointModel* _enterPoint; // 0x98
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _InZipLineHUD_k__BackingField; // 0xA0
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _InConsoleCombo_k__BackingField; // 0xA8
		::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* _ExitPointData_k__BackingField; // 0xB0
		::MoleMole::ZipLineSubSystem_ExitPointModel* _exit; // 0xB8
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _EnableExit_k__BackingField; // 0xC0
		::Class_0_16E4307DCC419505_159<::System::Int32>* _IsEntering_k__BackingField; // 0xC8
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _EnableTurnBack_k__BackingField; // 0xD0
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _ShowEnterPoint_k__BackingField; // 0xD8
		::MoleMole::ZipLineSubSystem_SwitchPointModel* _switchPoint; // 0xE0
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _ShowSwitchPoint_k__BackingField; // 0xE8
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _ShowExitPoint_k__BackingField; // 0xF0
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _EnableSwitch_k__BackingField; // 0xF8
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0x100
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0x108
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _EnableHUDInput_k__BackingField; // 0x110

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem, ::MoleMole::ZipLineSubSystem_MainState* mainState, ::MoleMole::ZipLineSubSystem_EnterPointModel* enterPoint, ::MoleMole::ZipLineSubSystem_SwitchPointModel* switchPoint, ::MoleMole::ZipLineSubSystem_ExitPointModel* exit, ::MoleMole::ZipLineSubSystem_CommonSkill* commonSkill)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*, ::MoleMole::ZipLineSubSystem_MainState*, ::MoleMole::ZipLineSubSystem_EnterPointModel*, ::MoleMole::ZipLineSubSystem_SwitchPointModel*, ::MoleMole::ZipLineSubSystem_ExitPointModel*, ::MoleMole::ZipLineSubSystem_CommonSkill*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__CTOR_OFFSET))(this, ownerSubSystem, mainState, enterPoint, switchPoint, exit, commonSkill);
		}

		::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* get_EnterPointData()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENTERPOINTDATA_OFFSET))(this);
		}

		::System::Void set_EnterPointData(::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENTERPOINTDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* get_SwitchPointData()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SWITCHPOINTDATA_OFFSET))(this);
		}

		::System::Void set_SwitchPointData(::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SWITCHPOINTDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* get_ExitPointData()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_EXITPOINTDATA_OFFSET))(this);
		}

		::System::Void set_ExitPointData(::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_EXITPOINTDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_EnableSwitch()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLESWITCH_OFFSET))(this);
		}

		::System::Void set_EnableSwitch(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLESWITCH_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_EnableTurnBack()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLETURNBACK_OFFSET))(this);
		}

		::System::Void set_EnableTurnBack(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLETURNBACK_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_EnableExit()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLEEXIT_OFFSET))(this);
		}

		::System::Void set_EnableExit(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLEEXIT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Int32>* get_IsEntering()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ISENTERING_OFFSET))(this);
		}

		::System::Void set_IsEntering(::Class_0_16E4307DCC419505_159<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ISENTERING_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_EnableHUDInput()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_ENABLEHUDINPUT_OFFSET))(this);
		}

		::System::Void set_EnableHUDInput(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_ENABLEHUDINPUT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_ShowEnterPoint()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWENTERPOINT_OFFSET))(this);
		}

		::System::Void set_ShowEnterPoint(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWENTERPOINT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_ShowSwitchPoint()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWSWITCHPOINT_OFFSET))(this);
		}

		::System::Void set_ShowSwitchPoint(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWSWITCHPOINT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_ShowExitPoint()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_SHOWEXITPOINT_OFFSET))(this);
		}

		::System::Void set_ShowExitPoint(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_SHOWEXITPOINT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_InConsoleCombo()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_INCONSOLECOMBO_OFFSET))(this);
		}

		::System::Void set_InConsoleCombo(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_INCONSOLECOMBO_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_InZipLineHUD()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_GET_INZIPLINEHUD_OFFSET))(this);
		}

		::System::Void set_InZipLineHUD(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_SET_INZIPLINEHUD_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Nullable_1<::Struct_2_CECEDD33F79E5905> _OnCreateProperty_b__59_0()
		{
			return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_0_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__59_1(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_1_OFFSET))(this, _);
		}

		::System::Nullable_1<::Struct_2_CECEDD33F79E5905> _OnCreateProperty_b__59_2()
		{
			return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_2_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__59_3(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_3_OFFSET))(this, _);
		}

		::System::Nullable_1<::Struct_2_CECEDD33F79E5905> _OnCreateProperty_b__59_4()
		{
			return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_4_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__59_5(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_5_OFFSET))(this, _);
		}

		::System::Boolean _OnCreateProperty_b__59_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_6_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__59_7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_7_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__59_8(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_8_OFFSET))(this, _);
		}

		::System::Boolean _OnCreateProperty_b__59_9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_9_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__59_10(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_10_OFFSET))(this, _);
		}

		::System::Boolean _OnCreateProperty_b__59_11()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_11_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__59_12(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_12_OFFSET))(this, _);
		}

		::System::Boolean _OnCreateProperty_b__59_13()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_13_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__59_14(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_HUDMODEL__ONCREATEPROPERTY_B__59_14_OFFSET))(this, _);
		}
	};
}
