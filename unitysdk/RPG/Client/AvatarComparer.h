#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarComparer; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_AVATARCOMPARER__ACCEPTIMPL_OFFSET UNITYSDK_OFFSET(0x1811D5F0)
#define RPG_CLIENT_AVATARCOMPARER__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x1811DB70)
#define RPG_CLIENT_AVATARCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1811D590)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparer_TypeDefinitionIndex = 60031;

	class AvatarComparer : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IAvatarComparer*>* _Comparers; // 0x18

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IAvatarComparer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IAvatarComparer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _AcceptImpl(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARER__ACCEPTIMPL_OFFSET))(this, a1);
		}

		::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARER__COMPAREIMPL_OFFSET))(this, a1, a2);
		}
	};
}
