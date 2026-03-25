#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_AVATARCOMPARERBASE_ACCEPT_OFFSET UNITYSDK_OFFSET(0x91097C0)
#define RPG_CLIENT_AVATARCOMPARERBASE_COMPARE_OFFSET UNITYSDK_OFFSET(0x9109B80)
#define RPG_CLIENT_AVATARCOMPARERBASE_GET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0x9109B70)
#define RPG_CLIENT_AVATARCOMPARERBASE_SET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0x9109B60)
#define RPG_CLIENT_AVATARCOMPARERBASE__ACCEPTIMPL_OFFSET UNITYSDK_OFFSET(0x9109B00)
#define RPG_CLIENT_AVATARCOMPARERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9109460)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerBase_TypeDefinitionIndex = 50972;

	class AvatarComparerBase : public ::System::Object
	{
	public:
		::System::Boolean _IsDescending_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE__CTOR_OFFSET))(this);
		}

		::System::Void set_IsDescending(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE_SET_ISDESCENDING_OFFSET))(this, value);
		}

		::System::Boolean get_IsDescending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE_GET_ISDESCENDING_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::IAvatarInfoProvider* left, ::RPG::Client::IAvatarInfoProvider* right)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE_COMPARE_OFFSET))(this, left, right);
		}

		::System::Void Accept(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Void _AcceptImpl(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERBASE__ACCEPTIMPL_OFFSET))(this, visitor);
		}
	};
}
