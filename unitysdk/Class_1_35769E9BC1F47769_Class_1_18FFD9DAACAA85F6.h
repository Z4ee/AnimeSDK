#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9;
class Class_1_35769E9BC1F47769_Class_1_EA09F20FCF92DD72;
namespace System { class String; }

#define CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xB4C7A80)
#define CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6_METHOD_1_AC3F1A74EF597DE1_OFFSET UNITYSDK_OFFSET(0xB4C7A30)
#define CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C7B00)

inline static constexpr unsigned int Class_1_35769E9BC1F47769_Class_1_18FFD9DAACAA85F6_TypeDefinitionIndex = 64777;

class Class_1_35769E9BC1F47769_Class_1_18FFD9DAACAA85F6 : public ::System::Object
{
public:
	::System::String* ShareCode; // 0x10
	::Il2CppArray<::System::UInt32>* BasicEquips; // 0x18
	::System::String* Lang; // 0x20
	::Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9* FinalRoles; // 0x28
	::System::String* Author; // 0x30
	::Class_1_35769E9BC1F47769_Class_1_EA09F20FCF92DD72* EarlyRoles; // 0x38
	::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x40
	::Class_1_35769E9BC1F47769_Class_1_EA09F20FCF92DD72* MiddleRoles; // 0x48
	::System::String* Description; // 0x50
	::Il2CppArray<::System::String*>* Tags; // 0x58
	::Il2CppArray<::System::UInt32>* Portals; // 0x60
	::Il2CppArray<::System::UInt32>* CoreEquips; // 0x68
	::System::String* Title; // 0x70
	::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x78
	::System::Boolean IsLike; // 0x80
	::System::Boolean IsFavour; // 0x81
	::System::Boolean IsSupportHard; // 0x82
	::System::UInt32 LikeCountForSort; // 0x84
	::System::UInt32 RecentFavourCnt; // 0x88
	::System::UInt32 SubSeasonID; // 0x8C
	::System::Int32 level; // 0x90
	::System::UInt32 SeasonID; // 0x94
	::System::UInt32 FavourCnt; // 0x98
	::System::UInt32 TimeStamp; // 0x9C
	::System::UInt32 GameVersion; // 0xA0
	::RPG::Client::MongoObjectId NJFKHPIHDEF; // 0xA4
	::System::UInt32 RecentLikeCnt; // 0xB0
	::System::Single Weight; // 0xB4
	::System::UInt32 RecentUseCnt; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AC3F1A74EF597DE1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6_METHOD_1_AC3F1A74EF597DE1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}
};
