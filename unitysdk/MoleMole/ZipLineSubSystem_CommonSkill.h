#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

namespace MoleMole { class ZipLineSubSystem_EnterPointModel; }
namespace MoleMole { class ZipLineSubSystem_MainState; }
template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x116BED10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYNOBATTLE_OFFSET UNITYSDK_OFFSET(0x116BED50)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYSELF_OFFSET UNITYSDK_OFFSET(0x116BED70)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYUNLOCK_OFFSET UNITYSDK_OFFSET(0x116BED30)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEFINAL_OFFSET UNITYSDK_OFFSET(0x116BED90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x116BEDB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x116BED20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYNOBATTLE_OFFSET UNITYSDK_OFFSET(0x116BED60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYSELF_OFFSET UNITYSDK_OFFSET(0x116BED80)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYUNLOCK_OFFSET UNITYSDK_OFFSET(0x116BED40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEFINAL_OFFSET UNITYSDK_OFFSET(0x116BEDA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x116BECA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_0_OFFSET UNITYSDK_OFFSET(0x116BF060)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_2_OFFSET UNITYSDK_OFFSET(0x116BF380)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_3_OFFSET UNITYSDK_OFFSET(0x116BF470)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_4_OFFSET UNITYSDK_OFFSET(0x116BF6A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_5_OFFSET UNITYSDK_OFFSET(0x116BF7F0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_CommonSkill_TypeDefinitionIndex = 74655;

	class ZipLineSubSystem_CommonSkill : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _EnableByNoBattle_k__BackingField; // 0x60
		::MoleMole::ZipLineSubSystem_EnterPointModel* _enterPoint; // 0x68
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _EnableBySelf_k__BackingField; // 0x70
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _EnableByUnlock_k__BackingField; // 0x78
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _EnableFinal_k__BackingField; // 0x80
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _EnableByGamePlay_k__BackingField; // 0x88
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0x90

		::System::Void _ctor(::MoleMole::ZipLineSubSystem_MainState* mainState, ::MoleMole::ZipLineSubSystem_EnterPointModel* enterPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_MainState*, ::MoleMole::ZipLineSubSystem_EnterPointModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__CTOR_OFFSET))(this, mainState, enterPoint);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_EnableByGamePlay()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYGAMEPLAY_OFFSET))(this);
		}

		::System::Void set_EnableByGamePlay(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYGAMEPLAY_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_EnableByUnlock()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYUNLOCK_OFFSET))(this);
		}

		::System::Void set_EnableByUnlock(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYUNLOCK_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_EnableByNoBattle()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYNOBATTLE_OFFSET))(this);
		}

		::System::Void set_EnableByNoBattle(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYNOBATTLE_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_EnableBySelf()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYSELF_OFFSET))(this);
		}

		::System::Void set_EnableBySelf(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYSELF_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_EnableFinal()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEFINAL_OFFSET))(this);
		}

		::System::Void set_EnableFinal(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEFINAL_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__23_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_0_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__23_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_2_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__23_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_3_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__23_4(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_4_OFFSET))(this, _);
		}

		::System::Void _OnCreateProperty_b__23_5(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__23_5_OFFSET))(this, _);
		}
	};
}
