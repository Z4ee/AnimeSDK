#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

namespace MoleMole { class ZipLineSubSystem_MainState; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_FINAL_OFFSET UNITYSDK_OFFSET(0x162F7470)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_SPLINE_OFFSET UNITYSDK_OFFSET(0x162F7430)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKINGGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x162F7410)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_RESUMEGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x162F7450)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x162F7490)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_FINAL_OFFSET UNITYSDK_OFFSET(0x162F7480)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_SPLINE_OFFSET UNITYSDK_OFFSET(0x162F7440)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKINGGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x162F7420)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_RESUMEGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x162F7460)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x162F7320)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_0_OFFSET UNITYSDK_OFFSET(0x162F7640)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_1_OFFSET UNITYSDK_OFFSET(0x162F7850)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_2_OFFSET UNITYSDK_OFFSET(0x162F7A10)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_GroupState_TypeDefinitionIndex = 63895;

	class ZipLineSubSystem_GroupState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0x80
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _BlockGroupStreaming_Final_k__BackingField; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _ResumeGroupStreaming_k__BackingField; // 0x90
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _BlockingGroupStreaming_k__BackingField; // 0x98
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _BlockGroupStreaming_Spline_k__BackingField; // 0xA0

		::System::Void _ctor(::MoleMole::ZipLineSubSystem_MainState* mainState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_MainState*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__CTOR_OFFSET))(this, mainState);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_BlockingGroupStreaming()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKINGGROUPSTREAMING_OFFSET))(this);
		}

		::System::Void set_BlockingGroupStreaming(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKINGGROUPSTREAMING_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_BlockGroupStreaming_Spline()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_SPLINE_OFFSET))(this);
		}

		::System::Void set_BlockGroupStreaming_Spline(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_SPLINE_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_ResumeGroupStreaming()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_RESUMEGROUPSTREAMING_OFFSET))(this);
		}

		::System::Void set_ResumeGroupStreaming(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_RESUMEGROUPSTREAMING_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_BlockGroupStreaming_Final()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_FINAL_OFFSET))(this);
		}

		::System::Void set_BlockGroupStreaming_Final(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_FINAL_OFFSET))(this, value);
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
