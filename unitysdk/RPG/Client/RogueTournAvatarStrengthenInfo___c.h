#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198450A0)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CREATESTRENGTHENEDAVATARCOMPARER_B__3_0_OFFSET UNITYSDK_OFFSET(0x198450F0)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CREATESTRENGTHENEDAVATARCOMPARER_B__3_1_OFFSET UNITYSDK_OFFSET(0x19845190)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198450E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAvatarStrengthenInfo___c_TypeDefinitionIndex = 64503;

	class RogueTournAvatarStrengthenInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAvatarStrengthenInfo___c_TypeDefinitionIndex)->GetStaticField(0x28950);
		}
		static ::RPG::Client::RogueTournAvatarStrengthenInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournAvatarStrengthenInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAvatarStrengthenInfo___c_TypeDefinitionIndex)->GetStaticField(0x28958);
		}
		static ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>** StaticGet___9__3_1()
		{
			return (::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAvatarStrengthenInfo___c_TypeDefinitionIndex)->GetStaticField(0x28960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateStrengthenedAvatarComparer_b__3_0(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CREATESTRENGTHENEDAVATARCOMPARER_B__3_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CreateStrengthenedAvatarComparer_b__3_1(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CREATESTRENGTHENEDAVATARCOMPARER_B__3_1_OFFSET))(this, a1, a2);
		}
	};
}
