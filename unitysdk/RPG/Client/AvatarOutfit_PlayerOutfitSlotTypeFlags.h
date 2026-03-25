#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_ADD_OFFSET UNITYSDK_OFFSET(0x7BB40)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_CLEAR_OFFSET UNITYSDK_OFFSET(0x7BB50)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x7BAC0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x7BB20)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7BA20)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xD250)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x5580)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x7BBA0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x914D6E0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_REMOVE_OFFSET UNITYSDK_OFFSET(0x7BB30)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7BAB0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x914DDE0)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x7B9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfit_PlayerOutfitSlotTypeFlags_TypeDefinitionIndex = 50794;

	struct alignas(8) AvatarOutfit_PlayerOutfitSlotTypeFlags
	{
		static ::System::Int32* StaticGet_CAPACITY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AvatarOutfit_PlayerOutfitSlotTypeFlags_TypeDefinitionIndex)->GetStaticField(0x10F80);
		}
		::System::UInt64 _Flags; // 0x10
		::System::Int32 _Count; // 0x18

		::System::Void _ctor(::System::UInt64 flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__CTOR_OFFSET))(this, flags);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__CCTOR_OFFSET))();
		}

		static ::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags op_OnesComplement(::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags flags)
		{
			return ((::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags(*)(::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_OP_ONESCOMPLEMENT_OFFSET))(flags);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::PlayerOutfitSlotType>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::PlayerOutfitSlotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Contains(::RPG::GameCore::PlayerOutfitSlotType item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_CONTAINS_OFFSET))(this, item);
		}

		::System::Void CopyTo(::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Boolean Remove(::RPG::GameCore::PlayerOutfitSlotType item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_REMOVE_OFFSET))(this, item);
		}

		::System::Void Add(::RPG::GameCore::PlayerOutfitSlotType item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS_ADD_OFFSET))(this, item);
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
