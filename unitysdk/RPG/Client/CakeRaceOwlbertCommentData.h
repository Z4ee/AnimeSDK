#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_626F93E2306641CC;
namespace RPG::Client { class CakeRaceHUDRichTextMsgData; }
namespace RPG::Client::CakeRace { class CakeRaceOwlbertAnimDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x924AD50)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETOWLBERTANIMLIST_OFFSET UNITYSDK_OFFSET(0x924B200)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTID_OFFSET UNITYSDK_OFFSET(0x924B0E0)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTPARAMS_OFFSET UNITYSDK_OFFSET(0x924B180)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTSTR_OFFSET UNITYSDK_OFFSET(0x924B090)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GET_PREEMPTLEVEL_OFFSET UNITYSDK_OFFSET(0x924B240)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x924B260)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_SET_PREEMPTLEVEL_OFFSET UNITYSDK_OFFSET(0x924B250)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x924B270)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x924AEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceOwlbertCommentData_TypeDefinitionIndex = 51174;

	class CakeRaceOwlbertCommentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem*>* _OwlbertAnimList; // 0x10
		::RPG::Client::CakeRaceHUDRichTextMsgData* _Message; // 0x18
		::System::UInt32 _PreemptLevel_k__BackingField; // 0x20
		::System::UInt32 _Priority_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 preemptLevel, ::System::UInt32 priority, ::Il2CppArray<::System::String*>* animNames, ::RPG::Client::CakeRaceHUDRichTextMsgData* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::String*>*, ::RPG::Client::CakeRaceHUDRichTextMsgData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA__CTOR_OFFSET))(this, preemptLevel, priority, animNames, message);
		}

		static ::RPG::Client::CakeRaceOwlbertCommentData* Create(::System::UInt32 preemptLevel, ::System::UInt32 priority, ::Il2CppArray<::System::String*>* animNames, ::RPG::Client::TextID text, ::Class_1_7D0B754E2D8CECAF* eventParam, ::Class_3_626F93E2306641CC* services)
		{
			return ((::RPG::Client::CakeRaceOwlbertCommentData*(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::String*>*, ::RPG::Client::TextID, ::Class_1_7D0B754E2D8CECAF*, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_CREATE_OFFSET))(preemptLevel, priority, animNames, text, eventParam, services);
		}

		::System::String* GetTextStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTSTR_OFFSET))(this);
		}

		::RPG::Client::TextID GetTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetTextParams()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTPARAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem*>* GetOwlbertAnimList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETOWLBERTANIMLIST_OFFSET))(this);
		}

		::System::UInt32 get_PreemptLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GET_PREEMPTLEVEL_OFFSET))(this);
		}

		::System::Void set_PreemptLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_SET_PREEMPTLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_SET_PRIORITY_OFFSET))(this, value);
		}
	};
}
