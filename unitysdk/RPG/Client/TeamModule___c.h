#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_TEAMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1EC2C0)
#define RPG_CLIENT_TEAMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE1EC300)
#define RPG_CLIENT_TEAMMODULE___C__SETTEAMMEMBER_B__39_0_OFFSET UNITYSDK_OFFSET(0xE1EC310)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule___c_TypeDefinitionIndex = 68132;

	class TeamModule___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>** StaticGet___9__39_0()
		{
			return (::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(TeamModule___c_TypeDefinitionIndex)->GetStaticField(0x106C0);
		}
		static ::RPG::Client::TeamModule___c** StaticGet___9()
		{
			return (::RPG::Client::TeamModule___c**)Il2CppClass::FromTypeDefinitionIndex(TeamModule___c_TypeDefinitionIndex)->GetStaticField(0x106C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetTeamMember_b__39_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__SETTEAMMEMBER_B__39_0_OFFSET))(this, a1);
		}
	};
}
