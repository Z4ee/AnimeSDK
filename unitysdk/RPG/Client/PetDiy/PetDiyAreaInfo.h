#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_1;
class Class_1_963E317C37FB5E9A_1;
namespace RPG::Client::PetDiy { class PetDiyData; }
namespace RPG::Client::PetDiy { class PetSlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xDAC37F0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_FETCHSUMMONUNITIDS_OFFSET UNITYSDK_OFFSET(0xDAC85A0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_GETPETSLOTINFOENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDAC8500)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_GETPLACEDPETDIYDATALIST_OFFSET UNITYSDK_OFFSET(0xDAC7DF0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xDAC89C0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_CURPLACEDCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC8A60)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_GREYICONPATH_OFFSET UNITYSDK_OFFSET(0xDAC8A20)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDAC8A00)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_MAXPLACEDCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC8A40)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAC89E0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xDAC89D0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_GREYICONPATH_OFFSET UNITYSDK_OFFSET(0xDAC8A30)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDAC8A10)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_MAXPLACEDCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC8A50)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0xDAC89F0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_SYNCBYSERVERINFO_1_OFFSET UNITYSDK_OFFSET(0xDAC80C0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_SYNCBYSERVERINFO_OFFSET UNITYSDK_OFFSET(0xDAC3790)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO_TRYGETPETSLOTINFO_OFFSET UNITYSDK_OFFSET(0xDAC88C0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC5030)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetDiyAreaInfo_TypeDefinitionIndex = 74480;

	class PetDiyAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetSlotInfo*>* _PetSlotInfoList; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::String* _GreyIconPath_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::UInt32 _MaxPlacedCount_k__BackingField; // 0x38
		::System::UInt32 _AreaID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO__CTOR_OFFSET))(this);
		}

		::System::Void SyncByServerInfo(::Class_1_7FF19F6206AF6DD7_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_SYNCBYSERVERINFO_OFFSET))(this, a1);
		}

		::System::Void SyncByServerInfo_1(::System::Collections::Generic::IList_1<::Class_1_963E317C37FB5E9A_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_963E317C37FB5E9A_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_SYNCBYSERVERINFO_1_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::PetDiy::PetSlotInfo*>* GetPetSlotInfoEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::PetDiy::PetSlotInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_GETPETSLOTINFOENUMERATOR_OFFSET))(this);
		}

		::System::Void FetchSummonUnitIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_FETCHSUMMONUNITIDS_OFFSET))(this, a1);
		}

		::RPG::Client::PetDiy::PetSlotInfo* TryGetPetSlotInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetDiy::PetSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_TRYGETPETSLOTINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>* GetPlacedPetDiyDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_GETPLACEDPETDIYDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_GreyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_GREYICONPATH_OFFSET))(this);
		}

		::System::Void set_GreyIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_GREYICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPlacedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_MAXPLACEDCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxPlacedCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_SET_MAXPLACEDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurPlacedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO_GET_CURPLACEDCOUNT_OFFSET))(this);
		}
	};
}
