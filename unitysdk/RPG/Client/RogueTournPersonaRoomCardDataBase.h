#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_ATTRIBUTESETEQUALS_OFFSET UNITYSDK_OFFSET(0x1AA6D4F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA6D480)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AA6DC30)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AA6D400)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AA6D440)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA6D280)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA60F50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardDataBase_TypeDefinitionIndex = 64733;

	class RogueTournPersonaRoomCardDataBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaRoomAttributeData*>* _Attributes; // 0x10
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType; // 0x18
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournPersonaRoomAttributeData*>* _Attributes_ReadOnly; // 0x20
		::System::UInt32 _Level; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AttributeSetEquals(::RPG::Client::RogueTournPersonaRoomCardDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardDataBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_ATTRIBUTESETEQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_CompositionType()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_Attributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATABASE_GET_ATTRIBUTES_OFFSET))(this);
		}
	};
}
