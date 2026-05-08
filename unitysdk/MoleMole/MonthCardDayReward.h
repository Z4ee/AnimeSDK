#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A511516860DB81AC.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_18149FBAC001C9F0;

#define MOLEMOLE_MONTHCARDDAYREWARD_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x1177F230)
#define MOLEMOLE_MONTHCARDDAYREWARD_GET_DAYINDEX_OFFSET UNITYSDK_OFFSET(0x1177F210)
#define MOLEMOLE_MONTHCARDDAYREWARD_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1177F200)
#define MOLEMOLE_MONTHCARDDAYREWARD_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1177F250)
#define MOLEMOLE_MONTHCARDDAYREWARD_METHOD_1_3E4243BB348DE0D4_OFFSET UNITYSDK_OFFSET(0x1177F3C0)
#define MOLEMOLE_MONTHCARDDAYREWARD_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x1177F760)
#define MOLEMOLE_MONTHCARDDAYREWARD_METHOD_1_F9B57DBF3518EF48_OFFSET UNITYSDK_OFFSET(0x1177F330)
#define MOLEMOLE_MONTHCARDDAYREWARD_SET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x1177F240)
#define MOLEMOLE_MONTHCARDDAYREWARD_SET_DAYINDEX_OFFSET UNITYSDK_OFFSET(0x1177F220)
#define MOLEMOLE_MONTHCARDDAYREWARD_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1177F260)
#define MOLEMOLE_MONTHCARDDAYREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1177F270)

namespace MoleMole
{
	inline static constexpr unsigned int MonthCardDayReward_TypeDefinitionIndex = 45300;

	class MonthCardDayReward : public ::System::Object
	{
	public:
		::System::DateTime _day; // 0x10
		::System::Int64 startTime; // 0x18
		::System::Int64 endTime; // 0x20
		::Class_1_18149FBAC001C9F0* OwnerMonth; // 0x28
		::System::Int32 _DayIndex_k__BackingField; // 0x30
		::System::Int32 _CardIndex_k__BackingField; // 0x34
		::Enum_3_A511516860DB81AC _State_k__BackingField; // 0x38
		::System::Int32 weekNumber; // 0x3C

		::System::Void _ctor(::System::DateTime a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD__CTOR_OFFSET))(this, a1, a2);
		}

		::System::DateTime get_Day()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_GET_DAY_OFFSET))(this);
		}

		::System::Int32 get_DayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_GET_DAYINDEX_OFFSET))(this);
		}

		::System::Void set_DayIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_SET_DAYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_CardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_GET_CARDINDEX_OFFSET))(this);
		}

		::System::Void set_CardIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_SET_CARDINDEX_OFFSET))(this, a1);
		}

		::Enum_3_A511516860DB81AC get_State()
		{
			return ((::Enum_3_A511516860DB81AC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Enum_3_A511516860DB81AC a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A511516860DB81AC))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void Method_1_F9B57DBF3518EF48(::Class_1_18149FBAC001C9F0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_18149FBAC001C9F0*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_METHOD_1_F9B57DBF3518EF48_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_18149FBAC001C9F0* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_18149FBAC001C9F0*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
		}

		::System::Void Method_1_3E4243BB348DE0D4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_METHOD_1_3E4243BB348DE0D4_OFFSET))(this);
		}
	};
}
