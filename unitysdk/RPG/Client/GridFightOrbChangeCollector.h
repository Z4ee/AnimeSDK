#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_CONTAINSORBTYPE_OFFSET UNITYSDK_OFFSET(0x986EAB0)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_ADDORBLIST_OFFSET UNITYSDK_OFFSET(0x986F500)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_REMOVEORBLIST_OFFSET UNITYSDK_OFFSET(0x986F590)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_UPDATEPRESENTUIDLIST_OFFSET UNITYSDK_OFFSET(0x986F620)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x986ED60)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x986EB40)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x986E870)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x986F6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbChangeCollector_TypeDefinitionIndex = 52452;

	class GridFightOrbChangeCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightOrbType>* UpdatedOrbTypes; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AddOrbUIDs; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AddPresentUIDs; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* RemoveOrbUIDs; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* RemovePresentUIDs; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UpdatePresentUIDs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Boolean ContainsOrbType(::RPG::GameCore::GridFightOrbType orbType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_CONTAINSORBTYPE_OFFSET))(this, orbType);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AddOrbList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_ADDORBLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RemoveOrbList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_REMOVEORBLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UpdatePresentUIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_UPDATEPRESENTUIDLIST_OFFSET))(this);
		}
	};
}
