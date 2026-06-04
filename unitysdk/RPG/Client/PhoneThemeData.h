#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PhoneThemeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHONETHEMEDATA_ADDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC36BF20)
#define RPG_CLIENT_PHONETHEMEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xC3721A0)
#define RPG_CLIENT_PHONETHEMEDATA_GETDISPLAYPHONETHEMES_OFFSET UNITYSDK_OFFSET(0xC372220)
#define RPG_CLIENT_PHONETHEMEDATA_GET_CURRENTID_OFFSET UNITYSDK_OFFSET(0xC372720)
#define RPG_CLIENT_PHONETHEMEDATA_GET_CURRENTIMAGEL_OFFSET UNITYSDK_OFFSET(0xC372740)
#define RPG_CLIENT_PHONETHEMEDATA_GET_CURRENTIMAGER_OFFSET UNITYSDK_OFFSET(0xC3727F0)
#define RPG_CLIENT_PHONETHEMEDATA_GET_UNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0xC372700)
#define RPG_CLIENT_PHONETHEMEDATA_SET_CURRENTID_OFFSET UNITYSDK_OFFSET(0xC372730)
#define RPG_CLIENT_PHONETHEMEDATA_SET_UNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0xC372710)
#define RPG_CLIENT_PHONETHEMEDATA_SYNCCURRENT_OFFSET UNITYSDK_OFFSET(0xC36B410)
#define RPG_CLIENT_PHONETHEMEDATA_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC36AF70)
#define RPG_CLIENT_PHONETHEMEDATA__CANDISPLAY_OFFSET UNITYSDK_OFFSET(0xC372610)
#define RPG_CLIENT_PHONETHEMEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3728A0)
#define RPG_CLIENT_PHONETHEMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC36C470)
#define RPG_CLIENT_PHONETHEMEDATA__NOTIFYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC372120)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneThemeData_TypeDefinitionIndex = 62133;

	class PhoneThemeData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_DefaultID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PhoneThemeData_TypeDefinitionIndex)->GetStaticField(0x28F0);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedIDs_k__BackingField; // 0x10
		::System::UInt32 _CurrentID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA__CCTOR_OFFSET))();
		}

		::System::Void SyncUnlocked(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void AddUnlocked(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_ADDUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void SyncCurrent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_SYNCCURRENT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDisplayPhoneThemes()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_GETDISPLAYPHONETHEMES_OFFSET))(this);
		}

		::System::Void _NotifyTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA__NOTIFYTUTORIAL_OFFSET))(this);
		}

		::System::Boolean _CanDisplay(::RPG::GameCore::PhoneThemeRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhoneThemeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA__CANDISPLAY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_GET_UNLOCKEDIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_SET_UNLOCKEDIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_GET_CURRENTID_OFFSET))(this);
		}

		::System::Void set_CurrentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_SET_CURRENTID_OFFSET))(this, a1);
		}

		::System::String* get_CurrentImageL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_GET_CURRENTIMAGEL_OFFSET))(this);
		}

		::System::String* get_CurrentImageR()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONETHEMEDATA_GET_CURRENTIMAGER_OFFSET))(this);
		}
	};
}
