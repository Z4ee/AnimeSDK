#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealSkillInfo; }
namespace RPG::GameCore { class MarbleSealRow; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GETSKILLINFOBYLEVEL_OFFSET UNITYSDK_OFFSET(0x19A93900)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ENOUGHTOBUY_OFFSET UNITYSDK_OFFSET(0x19A93D70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19A83B80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISCANBUY_OFFSET UNITYSDK_OFFSET(0x19A93BE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISSEALVISIBLE_OFFSET UNITYSDK_OFFSET(0x19A93CA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x19A93BC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x19A93B70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x19A93B50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SETISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19A938B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x19A93BD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x19A93B60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19A93880)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealData_TypeDefinitionIndex = 71263;

	class MarbleSealData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MAX_LEVEL = 0x3; // 0x0
		::RPG::GameCore::MarbleSealRow* _Row_k__BackingField; // 0x10
		::System::Boolean _IsUnlock_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::MarbleSealRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetIsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SETISUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleSealSkillInfo* GetSkillInfoByLevel(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealSkillInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GETSKILLINFOBYLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::MarbleSealRow* get_Row()
		{
			return ((::RPG::GameCore::MarbleSealRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MarbleSealRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALDATA_SET_ISUNLOCK_OFFSET))(this, a1);
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
