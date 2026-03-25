#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfitUnit; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_AVATAROUTFITSLOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x914FE90)
#define RPG_CLIENT_AVATAROUTFITSLOT___C__CHECKISEMPTY_B__23_0_OFFSET UNITYSDK_OFFSET(0x914FEE0)
#define RPG_CLIENT_AVATAROUTFITSLOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x914FED0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitSlot___c_TypeDefinitionIndex = 50801;

	class AvatarOutfitSlot___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarOutfitSlot___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarOutfitSlot___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarOutfitSlot___c_TypeDefinitionIndex)->GetStaticField(0x36EC0);
		}
		static ::System::Predicate_1<::RPG::Client::AvatarOutfitUnit*>** StaticGet___9__23_0()
		{
			return (::System::Predicate_1<::RPG::Client::AvatarOutfitUnit*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarOutfitSlot___c_TypeDefinitionIndex)->GetStaticField(0x36EC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckIsEmpty_b__23_0(::RPG::Client::AvatarOutfitUnit* unit)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT___C__CHECKISEMPTY_B__23_0_OFFSET))(this, unit);
		}
	};
}
