#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole { class ZipLineSubSystem_EnterPointModel; }
namespace MoleMole { class ZipLineSubSystem_MainState; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYAVATAR_OFFSET UNITYSDK_OFFSET(0x14120080)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYFORCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x141200E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x141200A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYNOBATTLE_OFFSET UNITYSDK_OFFSET(0x14120100)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYSELF_OFFSET UNITYSDK_OFFSET(0x14120120)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYUNLOCK_OFFSET UNITYSDK_OFFSET(0x141200C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEFINAL_OFFSET UNITYSDK_OFFSET(0x14120140)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ISINZENKOV_OFFSET UNITYSDK_OFFSET(0x14120160)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14120180)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYAVATAR_OFFSET UNITYSDK_OFFSET(0x14120090)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYFORCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x141200F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x141200B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYNOBATTLE_OFFSET UNITYSDK_OFFSET(0x14120110)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYSELF_OFFSET UNITYSDK_OFFSET(0x14120130)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYUNLOCK_OFFSET UNITYSDK_OFFSET(0x141200D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEFINAL_OFFSET UNITYSDK_OFFSET(0x14120150)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ISINZENKOV_OFFSET UNITYSDK_OFFSET(0x14120170)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1411FF70)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_0_OFFSET UNITYSDK_OFFSET(0x141204A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_2_OFFSET UNITYSDK_OFFSET(0x141207C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_3_OFFSET UNITYSDK_OFFSET(0x14120AB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_4_OFFSET UNITYSDK_OFFSET(0x14120E50)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_5_OFFSET UNITYSDK_OFFSET(0x14120FA0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_CommonSkill_TypeDefinitionIndex = 63896;

	class ZipLineSubSystem_CommonSkill : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _EnableByForceUnlock_k__BackingField; // 0x80
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _IsInZenKov_k__BackingField; // 0x88
		::MoleMole::ZipLineSubSystem_EnterPointModel* _enterPoint; // 0x90
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _EnableByAvatar_k__BackingField; // 0x98
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _EnableBySelf_k__BackingField; // 0xA0
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0xA8
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _EnableFinal_k__BackingField; // 0xB0
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _EnableByGamePlay_k__BackingField; // 0xB8
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _EnableByUnlock_k__BackingField; // 0xC0
		::Class_0_16E4307DCC419505_164<::System::Boolean>* _EnableByNoBattle_k__BackingField; // 0xC8
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0xD0

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem, ::MoleMole::ZipLineSubSystem_MainState* mainState, ::MoleMole::ZipLineSubSystem_EnterPointModel* enterPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*, ::MoleMole::ZipLineSubSystem_MainState*, ::MoleMole::ZipLineSubSystem_EnterPointModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__CTOR_OFFSET))(this, ownerSubSystem, mainState, enterPoint);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_EnableByAvatar()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYAVATAR_OFFSET))(this);
		}

		::System::Void set_EnableByAvatar(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYAVATAR_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_EnableByGamePlay()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYGAMEPLAY_OFFSET))(this);
		}

		::System::Void set_EnableByGamePlay(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYGAMEPLAY_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_EnableByUnlock()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYUNLOCK_OFFSET))(this);
		}

		::System::Void set_EnableByUnlock(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYUNLOCK_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_EnableByForceUnlock()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYFORCEUNLOCK_OFFSET))(this);
		}

		::System::Void set_EnableByForceUnlock(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYFORCEUNLOCK_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_EnableByNoBattle()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYNOBATTLE_OFFSET))(this);
		}

		::System::Void set_EnableByNoBattle(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYNOBATTLE_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Boolean>* get_EnableBySelf()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYSELF_OFFSET))(this);
		}

		::System::Void set_EnableBySelf(::Class_0_16E4307DCC419505_164<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYSELF_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_EnableFinal()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEFINAL_OFFSET))(this);
		}

		::System::Void set_EnableFinal(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEFINAL_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_IsInZenKov()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ISINZENKOV_OFFSET))(this);
		}

		::System::Void set_IsInZenKov(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ISINZENKOV_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__36_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_0_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__36_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_2_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__36_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_3_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__36_4(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_4_OFFSET))(this, _);
		}

		::System::Void _OnCreateProperty_b__36_5(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__36_5_OFFSET))(this, _);
		}
	};
}
