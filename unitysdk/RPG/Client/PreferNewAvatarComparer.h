#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PREFERNEWAVATARCOMPARER_SETOVERRIDENEWROLES_OFFSET UNITYSDK_OFFSET(0xDBBFCC0)
#define RPG_CLIENT_PREFERNEWAVATARCOMPARER__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0xDBBFDC0)
#define RPG_CLIENT_PREFERNEWAVATARCOMPARER__COMPAREWITHNEWROLEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xDBBFE60)
#define RPG_CLIENT_PREFERNEWAVATARCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xDBBFF80)

namespace RPG::Client
{
	inline static constexpr unsigned int PreferNewAvatarComparer_TypeDefinitionIndex = 62881;

	class PreferNewAvatarComparer : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _OverrideNewRoleIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFERNEWAVATARCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void SetOverrideNewRoles(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFERNEWAVATARCOMPARER_SETOVERRIDENEWROLES_OFFSET))(this, a1);
		}

		::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFERNEWAVATARCOMPARER__COMPAREIMPL_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CompareWithNewRoleOverride(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFERNEWAVATARCOMPARER__COMPAREWITHNEWROLEOVERRIDE_OFFSET))(this, a1, a2);
		}
	};
}
