#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicRecommendProperty; }

#define RPG_GAMECORE_AVATARRELICRECOMMENDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE4A980)
#define RPG_GAMECORE_AVATARRELICRECOMMENDROW_GETPROPERTYTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x1CE4B290)
#define RPG_GAMECORE_AVATARRELICRECOMMENDROW_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1CE4B250)
#define RPG_GAMECORE_AVATARRELICRECOMMENDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4B240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRelicRecommendRow_TypeDefinitionIndex = 12671;

	class AvatarRelicRecommendRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Set2IDList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* PropertyList4; // 0x18
		::Il2CppArray<::System::UInt32>* Set4IDList; // 0x20
		::Il2CppArray<::System::UInt32>* ScoreRankList; // 0x28
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* PropertyList3; // 0x30
		::Il2CppArray<::RPG::GameCore::RelicRecommendProperty*>* PropertyList; // 0x38
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* PropertyList6; // 0x40
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* PropertyList5; // 0x48
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* SubAffixPropertyList; // 0x50
		::System::UInt32 AvatarID; // 0x58
		::RPG::GameCore::FixPoint LocalCriticalChance; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarRelicRecommendRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarRelicRecommendRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::RPG::GameCore::AvatarPropertyType GetPropertyType(::RPG::GameCore::RelicType a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::RelicType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDROW_GETPROPERTYTYPE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* GetPropertyTypeArray(::RPG::GameCore::RelicType a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDROW_GETPROPERTYTYPEARRAY_OFFSET))(this, a1);
		}
	};
}
