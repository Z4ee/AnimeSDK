#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PREFERNEWAVATARCOMPARER_SETOVERRIDENEWROLES_OFFSET UNITYSDK_OFFSET(0x9FF8550)
#define RPG_CLIENT_PREFERNEWAVATARCOMPARER__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x9FF8620)
#define RPG_CLIENT_PREFERNEWAVATARCOMPARER__COMPAREWITHNEWROLEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9FF86C0)
#define RPG_CLIENT_PREFERNEWAVATARCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF87E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PreferNewAvatarComparer_TypeDefinitionIndex = 50988;

	class PreferNewAvatarComparer : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _OverrideNewRoleIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFERNEWAVATARCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void SetOverrideNewRoles(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* roleIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFERNEWAVATARCOMPARER_SETOVERRIDENEWROLES_OFFSET))(this, roleIDs);
		}

		::System::Int32 _CompareImpl(::RPG::Client::IAvatarInfoProvider* left, ::RPG::Client::IAvatarInfoProvider* right)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFERNEWAVATARCOMPARER__COMPAREIMPL_OFFSET))(this, left, right);
		}

		::System::Int32 _CompareWithNewRoleOverride(::RPG::Client::IAvatarInfoProvider* left, ::RPG::Client::IAvatarInfoProvider* right)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFERNEWAVATARCOMPARER__COMPAREWITHNEWROLEOVERRIDE_OFFSET))(this, left, right);
		}
	};
}
