#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_2;
class Class_1_F0C8375E94F25B0D;
namespace RPG::Client { class CakeRaceGameGuessCatData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F01B70)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GETGUESSENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9F01D40)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x9F019F0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_FIELDID_OFFSET UNITYSDK_OFFSET(0x9F01B00)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_GUESSCATDATALIST_OFFSET UNITYSDK_OFFSET(0x9F01A60)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x9F01A70)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x9F01A40)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F01C90)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA__INITCATDATALIST_OFFSET UNITYSDK_OFFSET(0x9F01E90)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9F01CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessData_TypeDefinitionIndex = 58072;

	class CakeRaceGameGuessData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessCatData*>* _GuessCatDataList_k__BackingField; // 0x10
		::Class_1_F0C8375E94F25B0D* _SectionViewData; // 0x18

		::System::Void _ctor(::Class_1_F0C8375E94F25B0D* sectionViewData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0C8375E94F25B0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA__CTOR_OFFSET))(this, sectionViewData);
		}

		::Class_1_1DC52A0BEDF50632_2* get_CurrentSection()
		{
			return ((::Class_1_1DC52A0BEDF50632_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_2*>* get_Sections()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessCatData*>* get_GuessCatDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_GUESSCATDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_SectionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONID_OFFSET))(this);
		}

		::System::UInt32 get_FieldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_FIELDID_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameGuessData* Create(::Class_1_F0C8375E94F25B0D* sectionViewData)
		{
			return ((::RPG::Client::CakeRaceGameGuessData*(*)(::Class_1_F0C8375E94F25B0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_CREATE_OFFSET))(sectionViewData);
		}

		::System::UInt64 GetGuessEndTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GETGUESSENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA__INIT_OFFSET))(this);
		}

		::System::Void _InitCatDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA__INITCATDATALIST_OFFSET))(this);
		}
	};
}
