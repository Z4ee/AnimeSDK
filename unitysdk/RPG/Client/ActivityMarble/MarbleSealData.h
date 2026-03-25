#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealSkillInfo; }
namespace RPG::GameCore { class MarbleSealRow; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GETSKILLINFOBYLEVEL_OFFSET UNITYSDK_OFFSET(0x8F69570)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ENOUGHTOBUY_OFFSET UNITYSDK_OFFSET(0x8F69960)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8F5C6A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISCANBUY_OFFSET UNITYSDK_OFFSET(0x8F697D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISSEALVISIBLE_OFFSET UNITYSDK_OFFSET(0x8F69890)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F697B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8F697A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8F69780)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SETISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8F69520)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F697C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x8F69790)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F694F0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealData_TypeDefinitionIndex = 61422;

	class MarbleSealData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MAX_LEVEL = 0x3; // 0x0
		::RPG::GameCore::MarbleSealRow* _Row_k__BackingField; // 0x10
		::System::Boolean _IsUnlock_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::MarbleSealRow* marbleSealConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA__CTOR_OFFSET))(this, marbleSealConfig);
		}

		::System::Void SetIsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SETISUNLOCKED_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarbleSealSkillInfo* GetSkillInfoByLevel(::System::UInt32 level)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealSkillInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GETSKILLINFOBYLEVEL_OFFSET))(this, level);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::MarbleSealRow* get_Row()
		{
			return ((::RPG::GameCore::MarbleSealRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MarbleSealRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SET_ISUNLOCK_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanBuy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISCANBUY_OFFSET))(this);
		}

		::System::Boolean get_EnoughToBuy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ENOUGHTOBUY_OFFSET))(this);
		}

		::System::Boolean get_IsSealVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISSEALVISIBLE_OFFSET))(this);
		}
	};
}
