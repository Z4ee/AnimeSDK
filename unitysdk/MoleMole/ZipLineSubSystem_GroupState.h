#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

namespace MoleMole { class ZipLineSubSystem_MainState; }
template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_FINAL_OFFSET UNITYSDK_OFFSET(0x139E3250)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_SPLINE_OFFSET UNITYSDK_OFFSET(0x139E3210)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKINGGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x139E31F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_RESUMEGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x139E3230)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x139E3270)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_FINAL_OFFSET UNITYSDK_OFFSET(0x139E3260)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_SPLINE_OFFSET UNITYSDK_OFFSET(0x139E3220)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKINGGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x139E3200)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_RESUMEGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x139E3240)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x139E3190)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_0_OFFSET UNITYSDK_OFFSET(0x139E3410)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_1_OFFSET UNITYSDK_OFFSET(0x139E3610)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_2_OFFSET UNITYSDK_OFFSET(0x139E37D0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_GroupState_TypeDefinitionIndex = 74661;

	class ZipLineSubSystem_GroupState : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _BlockGroupStreaming_Spline_k__BackingField; // 0x60
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0x68
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _ResumeGroupStreaming_k__BackingField; // 0x70
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _BlockingGroupStreaming_k__BackingField; // 0x78
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _BlockGroupStreaming_Final_k__BackingField; // 0x80

		::System::Void _ctor(::MoleMole::ZipLineSubSystem_MainState* mainState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_MainState*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__CTOR_OFFSET))(this, mainState);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_BlockingGroupStreaming()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKINGGROUPSTREAMING_OFFSET))(this);
		}

		::System::Void set_BlockingGroupStreaming(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKINGGROUPSTREAMING_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_BlockGroupStreaming_Spline()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_SPLINE_OFFSET))(this);
		}

		::System::Void set_BlockGroupStreaming_Spline(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_SPLINE_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_ResumeGroupStreaming()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_RESUMEGROUPSTREAMING_OFFSET))(this);
		}

		::System::Void set_ResumeGroupStreaming(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_RESUMEGROUPSTREAMING_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_153<::System::Boolean>* get_BlockGroupStreaming_Final()
		{
			return ((::Class_0_16E4307DCC419505_153<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_FINAL_OFFSET))(this);
		}

		::System::Void set_BlockGroupStreaming_Final(::Class_0_16E4307DCC419505_153<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_FINAL_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__18_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_0_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__18_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_1_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__18_2(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_2_OFFSET))(this, _);
		}
	};
}
