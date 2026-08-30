#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_8;
namespace RPG::Client { class ClockParkAttributeItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_GET_ATTRIBUTEITEMSDICT_OFFSET UNITYSDK_OFFSET(0x1BC06BC0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1BC06580)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_SET_ATTRIBUTEITEMSDICT_OFFSET UNITYSDK_OFFSET(0x1BC06BD0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1BC06A90)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC06BE0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC06570)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkAttributeInfo_TypeDefinitionIndex = 61577;

	class ClockParkAttributeInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::ClockParkAttributeType>** StaticGet_AttributeTypeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::ClockParkAttributeType>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkAttributeInfo_TypeDefinitionIndex)->GetStaticField(0x18D40);
		}
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>* _AttributeItemsDict_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_EA5A5E4D07C4CF2B_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>* get_AttributeItemsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_GET_ATTRIBUTEITEMSDICT_OFFSET))(this);
		}

		::System::Void set_AttributeItemsDict(::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_SET_ATTRIBUTEITEMSDICT_OFFSET))(this, a1);
		}
	};
}
