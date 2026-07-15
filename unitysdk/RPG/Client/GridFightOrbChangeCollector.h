#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_CONTAINSORBTYPE_OFFSET UNITYSDK_OFFSET(0x1AE83D60)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_ADDORBLIST_OFFSET UNITYSDK_OFFSET(0x1AE84C30)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_REMOVEORBLIST_OFFSET UNITYSDK_OFFSET(0x1AE84CC0)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_GET_UPDATEPRESENTUIDLIST_OFFSET UNITYSDK_OFFSET(0x1AE84D50)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1AE840F0)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1AE83DF0)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AE83B20)
#define RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE84DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbChangeCollector_TypeDefinitionIndex = 61635;

	class GridFightOrbChangeCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightOrbType>* UpdatedOrbTypes; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* RemovePresentUIDs; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AddPresentUIDs; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AddOrbUIDs; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* RemoveOrbUIDs; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UpdatePresentUIDs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Boolean ContainsOrbType(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_CONTAINSORBTYPE_OFFSET))(this, a1);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
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
