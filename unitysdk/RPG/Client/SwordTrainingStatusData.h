#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_32.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingStatusRow; }

#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETMAXSTATUSVALUE_OFFSET UNITYSDK_OFFSET(0xB2628D0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSMAXVALUE_OFFSET UNITYSDK_OFFSET(0xB257E60)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSROW_OFFSET UNITYSDK_OFFSET(0xB24D910)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSSUM_OFFSET UNITYSDK_OFFSET(0xB259190)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSVALUE_OFFSET UNITYSDK_OFFSET(0xB24D980)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GET_MAXTYPEINT_OFFSET UNITYSDK_OFFSET(0xB262A60)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB251CB0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_SETSTATUSVALUE_OFFSET UNITYSDK_OFFSET(0xB253DF0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB251BF0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA__INITSTATUS_OFFSET UNITYSDK_OFFSET(0xB2627D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStatusData_TypeDefinitionIndex = 57177;

	class SwordTrainingStatusData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _Status; // 0x10
		::Il2CppArray<::System::UInt32>* _StatusMax; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_INIT_OFFSET))(this);
		}

		::System::Void SetStatusValue(::Enum_3_96F6662CA3713095_32 type, ::System::UInt32 val)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_SETSTATUSVALUE_OFFSET))(this, type, val);
		}

		::System::UInt32 GetStatusSum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSSUM_OFFSET))(this);
		}

		::System::UInt32 GetStatusValue(::System::Int32 typeInt)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSVALUE_OFFSET))(this, typeInt);
		}

		::System::UInt32 GetStatusMaxValue(::System::Int32 typeInt)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSMAXVALUE_OFFSET))(this, typeInt);
		}

		::System::UInt32 GetMaxStatusValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETMAXSTATUSVALUE_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingStatusRow* GetStatusRow(::System::UInt32 typeInt)
		{
			return ((::RPG::GameCore::SwordTrainingStatusRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSROW_OFFSET))(this, typeInt);
		}

		::System::Void _InitStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA__INITSTATUS_OFFSET))(this);
		}

		::System::Int32 get_MaxTypeInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GET_MAXTYPEINT_OFFSET))(this);
		}
	};
}
