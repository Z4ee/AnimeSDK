#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_31.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingStatusRow; }

#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETMAXSTATUSVALUE_OFFSET UNITYSDK_OFFSET(0xC9AF700)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSMAXVALUE_OFFSET UNITYSDK_OFFSET(0xC9A49A0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSROW_OFFSET UNITYSDK_OFFSET(0xC99A390)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSSUM_OFFSET UNITYSDK_OFFSET(0xC9A5EB0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSVALUE_OFFSET UNITYSDK_OFFSET(0xC99A400)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_GET_MAXTYPEINT_OFFSET UNITYSDK_OFFSET(0xC9AF890)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_INIT_OFFSET UNITYSDK_OFFSET(0xC99E660)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA_SETSTATUSVALUE_OFFSET UNITYSDK_OFFSET(0xC9A06F0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC99E5A0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDATA__INITSTATUS_OFFSET UNITYSDK_OFFSET(0xC9AF620)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStatusData_TypeDefinitionIndex = 57967;

	class SwordTrainingStatusData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _StatusMax; // 0x10
		::Il2CppArray<::System::UInt32>* _Status; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_INIT_OFFSET))(this);
		}

		::System::Void SetStatusValue(::Enum_3_96F6662CA3713095_31 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_31, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_SETSTATUSVALUE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetStatusSum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSSUM_OFFSET))(this);
		}

		::System::UInt32 GetStatusValue(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 GetStatusMaxValue(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSMAXVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxStatusValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETMAXSTATUSVALUE_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingStatusRow* GetStatusRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingStatusRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDATA_GETSTATUSROW_OFFSET))(this, a1);
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
