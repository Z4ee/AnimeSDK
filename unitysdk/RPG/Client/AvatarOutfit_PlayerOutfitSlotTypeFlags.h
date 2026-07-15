#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_ADD_OFFSET UNITYSDK_OFFSET(0x39799A0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_CLEAR_OFFSET UNITYSDK_OFFSET(0x3979A10)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x3979900)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x3979910)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x39797B0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x3979AB0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x3979A60)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x3979B00)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x18145910)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_REMOVE_OFFSET UNITYSDK_OFFSET(0x3979920)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3979860)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x181461A0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x3979770)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfit_PlayerOutfitSlotTypeFlags_TypeDefinitionIndex = 59734;

	struct alignas(8) AvatarOutfit_PlayerOutfitSlotTypeFlags
	{
		static ::System::Int32* StaticGet_CAPACITY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AvatarOutfit_PlayerOutfitSlotTypeFlags_TypeDefinitionIndex)->GetStaticField(0xED20);
		}
		::System::UInt64 _Flags; // 0x10
		::System::Int32 _Count; // 0x18

		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__CCTOR_OFFSET))();
		}

		static ::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags op_OnesComplement(::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags a1)
		{
			return ((::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags(*)(::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::PlayerOutfitSlotType>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::PlayerOutfitSlotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Contains(::RPG::GameCore::PlayerOutfitSlotType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::RPG::GameCore::PlayerOutfitSlotType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Add(::RPG::GameCore::PlayerOutfitSlotType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_CLEAR_OFFSET))(this);
		}

		::System::UInt64 get_Flags()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_FLAGS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_ISREADONLY_OFFSET))(this);
		}
	};
}
