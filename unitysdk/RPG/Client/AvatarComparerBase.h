#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_AVATARCOMPARERBASE_ACCEPT_OFFSET UNITYSDK_OFFSET(0x193BC540)
#define RPG_CLIENT_AVATARCOMPARERBASE_COMPARE_OFFSET UNITYSDK_OFFSET(0x193BCA00)
#define RPG_CLIENT_AVATARCOMPARERBASE_GET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0x193BC9F0)
#define RPG_CLIENT_AVATARCOMPARERBASE_SET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0x193BC9E0)
#define RPG_CLIENT_AVATARCOMPARERBASE__ACCEPTIMPL_OFFSET UNITYSDK_OFFSET(0x193BCAD0)
#define RPG_CLIENT_AVATARCOMPARERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x193BC070)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerBase_TypeDefinitionIndex = 62865;

	class AvatarComparerBase : public ::System::Object
	{
	public:
		::System::Boolean _IsDescending_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE__CTOR_OFFSET))(this);
		}

		::System::Void set_IsDescending(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE_SET_ISDESCENDING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDescending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE_GET_ISDESCENDING_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void Accept(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE_ACCEPT_OFFSET))(this, a1);
		}

		::System::Void _AcceptImpl(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE__ACCEPTIMPL_OFFSET))(this, a1);
		}
	};
}
