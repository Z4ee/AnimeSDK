#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Internal/SingletonBase_1.h"

namespace RichTap::Common { class HapticDataModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RICHTAP_COMMON_HAPTICDATAMANAGER_ADDTOREALPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1DE13AA0)
#define RICHTAP_COMMON_HAPTICDATAMANAGER_ADDTOVIRTUALPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1DE13F80)
#define RICHTAP_COMMON_HAPTICDATAMANAGER_CLEARPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1DE14170)
#define RICHTAP_COMMON_HAPTICDATAMANAGER_DECIDEREALPLAYBACK_OFFSET UNITYSDK_OFFSET(0x1DE13070)
#define RICHTAP_COMMON_HAPTICDATAMANAGER_GETREALPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1DE136D0)
#define RICHTAP_COMMON_HAPTICDATAMANAGER_GETVIRTUALPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1DE137D0)
#define RICHTAP_COMMON_HAPTICDATAMANAGER_REMOVEFROMREALPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1DE139A0)
#define RICHTAP_COMMON_HAPTICDATAMANAGER_REMOVEFROMVIRTUALPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1DE14080)
#define RICHTAP_COMMON_HAPTICDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE144A0)

namespace RichTap::Common
{
	inline static constexpr unsigned int HapticDataManager_TypeDefinitionIndex = 38100;

	class HapticDataManager : public ::RichTap::Internal::SingletonBase_1<::RichTap::Common::HapticDataManager*>
	{
	public:
		::System::Object* virtualLock; // 0x10
		::System::Collections::Generic::List_1<::RichTap::Common::HapticDataModel*>* virtualPlayList; // 0x18
		::System::Object* realPlayLock; // 0x20
		::System::Collections::Generic::List_1<::RichTap::Common::HapticDataModel*>* realPlayList; // 0x28
		::System::Int32 currentIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void DecideRealPlayback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER_DECIDEREALPLAYBACK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RichTap::Common::HapticDataModel*>* GetRealPlayList()
		{
			return ((::System::Collections::Generic::List_1<::RichTap::Common::HapticDataModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER_GETREALPLAYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RichTap::Common::HapticDataModel*>* GetVirtualPlayList()
		{
			return ((::System::Collections::Generic::List_1<::RichTap::Common::HapticDataModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER_GETVIRTUALPLAYLIST_OFFSET))(this);
		}

		::System::Void AddToVirtualPlayList(::RichTap::Common::HapticDataModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::RichTap::Common::HapticDataModel*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER_ADDTOVIRTUALPLAYLIST_OFFSET))(this, model);
		}

		::System::Void RemoveFromVirtualPlayList(::RichTap::Common::HapticDataModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::RichTap::Common::HapticDataModel*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER_REMOVEFROMVIRTUALPLAYLIST_OFFSET))(this, model);
		}

		::System::Void AddToRealPlayList(::RichTap::Common::HapticDataModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::RichTap::Common::HapticDataModel*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER_ADDTOREALPLAYLIST_OFFSET))(this, model);
		}

		::System::Void RemoveFromRealPlayList(::RichTap::Common::HapticDataModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::RichTap::Common::HapticDataModel*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER_REMOVEFROMREALPLAYLIST_OFFSET))(this, model);
		}

		::System::Void ClearPlaylist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER_CLEARPLAYLIST_OFFSET))(this);
		}
	};
}
