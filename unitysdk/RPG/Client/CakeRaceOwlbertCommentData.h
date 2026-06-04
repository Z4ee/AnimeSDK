#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client { class CakeRaceHUDRichTextMsgData; }
namespace RPG::Client::CakeRace { class CakeRaceOwlbertAnimDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB4AA3E0)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETOWLBERTANIMLIST_OFFSET UNITYSDK_OFFSET(0xB4AA900)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTID_OFFSET UNITYSDK_OFFSET(0xB4AA7D0)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTPARAMS_OFFSET UNITYSDK_OFFSET(0xB4AA880)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GETTEXTSTR_OFFSET UNITYSDK_OFFSET(0xB4AA780)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GET_PREEMPTLEVEL_OFFSET UNITYSDK_OFFSET(0xB4AA940)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB4AA960)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_SET_PREEMPTLEVEL_OFFSET UNITYSDK_OFFSET(0xB4AA950)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB4AA970)
#define RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4AA570)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceOwlbertCommentData_TypeDefinitionIndex = 59011;

	class CakeRaceOwlbertCommentData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceHUDRichTextMsgData* _Message; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem*>* _OwlbertAnimList; // 0x18
		::System::UInt32 _Priority_k__BackingField; // 0x20
		::System::UInt32 _PreemptLevel_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::String*>* a3, ::RPG::Client::CakeRaceHUDRichTextMsgData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::String*>*, ::RPG::Client::CakeRaceHUDRichTextMsgData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::CakeRaceOwlbertCommentData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::String*>* a3, ::RPG::Client::TextID a4, ::Class_1_7D0B754E2D8CECAF* a5, ::Class_3_FA020C2C23A72B3F* a6)
		{
			return ((::RPG::Client::CakeRaceOwlbertCommentData*(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::String*>*, ::RPG::Client::TextID, ::Class_1_7D0B754E2D8CECAF*, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
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

		::System::Void set_PreemptLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_SET_PREEMPTLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEOWLBERTCOMMENTDATA_SET_PRIORITY_OFFSET))(this, a1);
		}
	};
}
