#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class SwordTrainingMoodRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGMOODDATA_ADDMOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xB2580B0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GETDISPLAYMOODVALUE_OFFSET UNITYSDK_OFFSET(0xB258150)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GETEFFECTTIPS_OFFSET UNITYSDK_OFFSET(0xB2582B0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GETMOODROW_OFFSET UNITYSDK_OFFSET(0xB2581F0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GET_MOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xB2583D0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GET_MOODVALUE_OFFSET UNITYSDK_OFFSET(0xB2583B0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB251D10)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SETMOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xB251620)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SETMOODVALUE_OFFSET UNITYSDK_OFFSET(0xB253DA0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SET_MOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xB2583E0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SET_MOODVALUE_OFFSET UNITYSDK_OFFSET(0xB2583C0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SUBMOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xB258100)
#define RPG_CLIENT_SWORDTRAININGMOODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB251D00)
#define RPG_CLIENT_SWORDTRAININGMOODDATA__INITMOOD_OFFSET UNITYSDK_OFFSET(0xB257EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingMoodData_TypeDefinitionIndex = 57175;

	class SwordTrainingMoodData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _Moodintervals; // 0x10
		::System::UInt32 _MoodValue_k__BackingField; // 0x18
		::System::UInt32 _MoodMaxValue_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_INIT_OFFSET))(this);
		}

		::System::Void SetMoodValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SETMOODVALUE_OFFSET))(this, value);
		}

		::System::Void AddMoodMaxValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_ADDMOODMAXVALUE_OFFSET))(this, value);
		}

		::System::Void SubMoodMaxValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SUBMOODMAXVALUE_OFFSET))(this, value);
		}

		::System::Void SetMoodMaxValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SETMOODMAXVALUE_OFFSET))(this, value);
		}

		::System::UInt32 GetDisplayMoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GETDISPLAYMOODVALUE_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingMoodRow* GetMoodRow(::System::UInt32 val)
		{
			return ((::RPG::GameCore::SwordTrainingMoodRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GETMOODROW_OFFSET))(this, val);
		}

		::RPG::Client::TextID GetEffectTips(::RPG::GameCore::SwordTrainingMoodRow* row)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::SwordTrainingMoodRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GETEFFECTTIPS_OFFSET))(this, row);
		}

		::System::Void _InitMood()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA__INITMOOD_OFFSET))(this);
		}

		::System::UInt32 get_MoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GET_MOODVALUE_OFFSET))(this);
		}

		::System::Void set_MoodValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SET_MOODVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_MoodMaxValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GET_MOODMAXVALUE_OFFSET))(this);
		}

		::System::Void set_MoodMaxValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SET_MOODMAXVALUE_OFFSET))(this, value);
		}
	};
}
