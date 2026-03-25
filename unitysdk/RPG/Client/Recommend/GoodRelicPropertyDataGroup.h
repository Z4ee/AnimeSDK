#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Recommend/GoodRelicRecommendType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_ADDSUBPROPERTY_OFFSET UNITYSDK_OFFSET(0xA28F3A0)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA28F6E0)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_GETSUBPROPERTYMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xA28F350)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_GET_ISGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xA28F640)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_ISMATCHSUBPROPERTY_OFFSET UNITYSDK_OFFSET(0xA28F860)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA28DF50)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int GoodRelicPropertyDataGroup_TypeDefinitionIndex = 61218;

	class GoodRelicPropertyDataGroup : public ::System::Object
	{
	public:
		::System::String* AvatarIconPath; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::AvatarPropertyType>* _SubPropertyTypes; // 0x18
		::RPG::Client::ItemData* ItemData; // 0x20
		::RPG::Client::Recommend::GoodRelicRecommendType Type; // 0x28
		::System::Boolean IsHaveAvatar; // 0x2C
		::System::Boolean IsMarked; // 0x2D
		::System::UInt32 AvatarID; // 0x30

		::System::Void _ctor(::System::UInt32 avatarID, ::RPG::Client::Recommend::GoodRelicRecommendType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Recommend::GoodRelicRecommendType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP__CTOR_OFFSET))(this, avatarID, type);
		}

		::System::Boolean get_IsGrowthTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_GET_ISGROWTHTARGET_OFFSET))(this);
		}

		::System::Void AddSubProperty(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_ADDSUBPROPERTY_OFFSET))(this, propertyType);
		}

		::System::Int32 GetSubPropertyMatchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_GETSUBPROPERTYMATCHCOUNT_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::Recommend::GoodRelicPropertyDataGroup* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Recommend::GoodRelicPropertyDataGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_COMPARETO_OFFSET))(this, other);
		}

		::System::Boolean IsMatchSubProperty(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_ISMATCHSUBPROPERTY_OFFSET))(this, propertyType);
		}
	};
}
