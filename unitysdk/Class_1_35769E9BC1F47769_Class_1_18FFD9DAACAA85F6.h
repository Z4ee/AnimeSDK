#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9;
class Class_1_35769E9BC1F47769_Class_1_EA09F20FCF92DD72;
namespace System { class String; }

#define CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xB62DF20)
#define CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6_METHOD_1_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0xB62DE90)
#define CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6__CTOR_OFFSET UNITYSDK_OFFSET(0xB62DFA0)

inline static constexpr unsigned int Class_1_35769E9BC1F47769_Class_1_18FFD9DAACAA85F6_TypeDefinitionIndex = 64837;

class Class_1_35769E9BC1F47769_Class_1_18FFD9DAACAA85F6 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x10
	::System::String* Lang; // 0x18
	::Class_1_35769E9BC1F47769_Class_1_EA09F20FCF92DD72* MiddleRoles; // 0x20
	::System::String* Title; // 0x28
	::Il2CppArray<::System::String*>* Tags; // 0x30
	::System::String* ShareCode; // 0x38
	::Il2CppArray<::System::UInt32>* CoreEquips; // 0x40
	::System::String* Author; // 0x48
	::System::String* Description; // 0x50
	::Il2CppArray<::System::UInt32>* BasicEquips; // 0x58
	::Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9* FinalRoles; // 0x60
	::Il2CppArray<::System::UInt32>* Portals; // 0x68
	::Class_1_35769E9BC1F47769_Class_1_EA09F20FCF92DD72* EarlyRoles; // 0x70
	::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x78
	::System::UInt32 SubSeasonID; // 0x80
	::System::Boolean IsLike; // 0x84
	::System::Boolean IsFavour; // 0x85
	::System::Boolean IsSupportHard; // 0x86
	::System::UInt32 TimeStamp; // 0x88
	::System::UInt32 LikeCountForSort; // 0x8C
	::System::UInt32 RecentLikeCnt; // 0x90
	::System::Single Weight; // 0x94
	::RPG::Client::MongoObjectId NJFKHPIHDEF; // 0x98
	::System::UInt32 FavourCnt; // 0xA4
	::System::UInt32 SeasonID; // 0xA8
	::System::UInt32 GameVersion; // 0xAC
	::System::Int32 level; // 0xB0
	::System::UInt32 RecentUseCnt; // 0xB4
	::System::UInt32 RecentFavourCnt; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7857B385C2B6C0EB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6_METHOD_1_7857B385C2B6C0EB_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_18FFD9DAACAA85F6_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}
};
