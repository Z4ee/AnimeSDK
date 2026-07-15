#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_GET_ARMYNUMBER_OFFSET UNITYSDK_OFFSET(0x19B84090)
#define RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_GET_ISALLY_OFFSET UNITYSDK_OFFSET(0x19B84070)
#define RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_GET_MAXARMYNUMBER_OFFSET UNITYSDK_OFFSET(0x19B840B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_SET_ARMYNUMBER_OFFSET UNITYSDK_OFFSET(0x19B840A0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_SET_ISALLY_OFFSET UNITYSDK_OFFSET(0x19B84080)
#define RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_SET_MAXARMYNUMBER_OFFSET UNITYSDK_OFFSET(0x19B840C0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B84060)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ArmyNumberChangeData_TypeDefinitionIndex = 73868;

	class ArmyNumberChangeData : public ::System::Object
	{
	public:
		::System::Int32 _MaxArmyNumber_k__BackingField; // 0x10
		::System::Int32 _ArmyNumber_k__BackingField; // 0x14
		::System::Boolean _IsAlly_k__BackingField; // 0x18

		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsAlly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_GET_ISALLY_OFFSET))(this);
		}

		::System::Void set_IsAlly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_SET_ISALLY_OFFSET))(this, a1);
		}

		::System::Int32 get_ArmyNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_GET_ARMYNUMBER_OFFSET))(this);
		}

		::System::Void set_ArmyNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_SET_ARMYNUMBER_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxArmyNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_GET_MAXARMYNUMBER_OFFSET))(this);
		}

		::System::Void set_MaxArmyNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_ARMYNUMBERCHANGEDATA_SET_MAXARMYNUMBER_OFFSET))(this, a1);
		}
	};
}
