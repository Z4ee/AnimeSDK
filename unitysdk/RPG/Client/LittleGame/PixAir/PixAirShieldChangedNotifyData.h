#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x19AC1E70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_ISADD_OFFSET UNITYSDK_OFFSET(0x19AC1E80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x19AC1E60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_NEWSHIELD_OFFSET UNITYSDK_OFFSET(0x19AC1E50)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19AC1E40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC1E90)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirShieldChangedNotifyData_TypeDefinitionIndex = 73357;

	class PixAirShieldChangedNotifyData : public ::System::Object
	{
	public:
		::System::Boolean _IsAdd_k__BackingField; // 0x10
		::System::Int32 _MaxHP_k__BackingField; // 0x14
		::System::Int32 _ChangeValue_k__BackingField; // 0x18
		::System::Int32 _RuntimeID_k__BackingField; // 0x1C
		::System::Int32 _NewShield_k__BackingField; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_RuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Int32 get_NewShield()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_NEWSHIELD_OFFSET))(this);
		}

		::System::Int32 get_MaxHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_MAXHP_OFFSET))(this);
		}

		::System::Int32 get_ChangeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_CHANGEVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsAdd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRSHIELDCHANGEDNOTIFYDATA_GET_ISADD_OFFSET))(this);
		}
	};
}
