#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_3;
class Class_1_F0C8375E94F25B0D;
namespace RPG::Client { class CakeRaceGameGuessCatData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB49D5F0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GETGUESSENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB49D7C0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xB49D480)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_FIELDID_OFFSET UNITYSDK_OFFSET(0xB49D590)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_GUESSCATDATALIST_OFFSET UNITYSDK_OFFSET(0xB49D4F0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xB49D500)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xB49D4D0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB49D710)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA__INITCATDATALIST_OFFSET UNITYSDK_OFFSET(0xB49D8F0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA__INIT_OFFSET UNITYSDK_OFFSET(0xB49D770)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessData_TypeDefinitionIndex = 58988;

	class CakeRaceGameGuessData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessCatData*>* _GuessCatDataList_k__BackingField; // 0x10
		::Class_1_F0C8375E94F25B0D* _SectionViewData; // 0x18

		::System::Void _ctor(::Class_1_F0C8375E94F25B0D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0C8375E94F25B0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA__CTOR_OFFSET))(this, a1);
		}

		::Class_1_1DC52A0BEDF50632_3* get_CurrentSection()
		{
			return ((::Class_1_1DC52A0BEDF50632_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>* get_Sections()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONS_OFFSET))(this);
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

		static ::RPG::Client::CakeRaceGameGuessData* Create(::Class_1_F0C8375E94F25B0D* a1)
		{
			return ((::RPG::Client::CakeRaceGameGuessData*(*)(::Class_1_F0C8375E94F25B0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_CREATE_OFFSET))(a1);
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
