#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA307A80)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSAEONID_OFFSET UNITYSDK_OFFSET(0xA308150)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSAEONSTORYID_OFFSET UNITYSDK_OFFSET(0xA308170)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSCOUNT_OFFSET UNITYSDK_OFFSET(0xA308100)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONIDS_OFFSET UNITYSDK_OFFSET(0xA3080E0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA3078F0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONDOCSUBKEYSAEONID_OFFSET UNITYSDK_OFFSET(0xA308160)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONDOCSUBKEYSAEONSTORYID_OFFSET UNITYSDK_OFFSET(0xA308180)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONIDS_OFFSET UNITYSDK_OFFSET(0xA3080F0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0xA307BA0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA308190)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA308220)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA3081A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookAeonRedDotFilter_TypeDefinitionIndex = 54393;

	class RogueHandbookAeonRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewAeonIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _NewAeonDocSubKeysAeonStoryID_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NewAeonDocSubKeysAeonID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewAeonIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONIDS_OFFSET))(this);
		}

		::System::Void set_NewAeonIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONIDS_OFFSET))(this, value);
		}

		::System::Int32 get_NewAeonDocSubKeysCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewAeonDocSubKeysAeonID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSAEONID_OFFSET))(this);
		}

		::System::Void set_NewAeonDocSubKeysAeonID(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONDOCSUBKEYSAEONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewAeonDocSubKeysAeonStoryID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSAEONSTORYID_OFFSET))(this);
		}

		::System::Void set_NewAeonDocSubKeysAeonStoryID(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONDOCSUBKEYSAEONSTORYID_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
