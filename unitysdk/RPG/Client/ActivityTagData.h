#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityTagRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ACTIVITYTAGDATA_GETALLTAGS_OFFSET UNITYSDK_OFFSET(0x9C70E20)
#define RPG_CLIENT_ACTIVITYTAGDATA_GETTAG_OFFSET UNITYSDK_OFFSET(0x9C70AD0)
#define RPG_CLIENT_ACTIVITYTAGDATA_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x9C71110)
#define RPG_CLIENT_ACTIVITYTAGDATA_GET_TAGTEXT_OFFSET UNITYSDK_OFFSET(0x9C71120)
#define RPG_CLIENT_ACTIVITYTAGDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9C711F0)
#define RPG_CLIENT_ACTIVITYTAGDATA_ISVALIDTAG_OFFSET UNITYSDK_OFFSET(0x9C70C60)
#define RPG_CLIENT_ACTIVITYTAGDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C71250)
#define RPG_CLIENT_ACTIVITYTAGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C70AC0)
#define RPG_CLIENT_ACTIVITYTAGDATA__TRYCREATEFLYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9C70CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTagData_TypeDefinitionIndex = 56907;

	class ActivityTagData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTagData*>** StaticGet__Instances()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTagData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTagData_TypeDefinitionIndex)->GetStaticField(0x3E690);
		}
		::System::UInt32 _TagID; // 0x10

		::System::Void _ctor(::System::UInt32 tagID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA__CTOR_OFFSET))(this, tagID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityTagData* GetTag(::System::UInt32 tagID)
		{
			return ((::RPG::Client::ActivityTagData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA_GETTAG_OFFSET))(tagID);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* GetAllTags()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA_GETALLTAGS_OFFSET))();
		}

		static ::System::Void _TryCreateFlyweight(::System::UInt32 tagID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA__TRYCREATEFLYWEIGHT_OFFSET))(tagID);
		}

		static ::System::Boolean IsValidTag(::System::UInt32 tagID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA_ISVALIDTAG_OFFSET))(tagID);
		}

		::System::UInt32 get_TagID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA_GET_TAGID_OFFSET))(this);
		}

		::RPG::Client::TextID get_TagText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA_GET_TAGTEXT_OFFSET))(this);
		}

		::RPG::GameCore::ActivityTagRow* get__Row()
		{
			return ((::RPG::GameCore::ActivityTagRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATA_GET__ROW_OFFSET))(this);
		}
	};
}
