#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::Client { class IAvatarComparer; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_AVATARCOMPARER__ACCEPTIMPL_OFFSET UNITYSDK_OFFSET(0x9D6B8B0)
#define RPG_CLIENT_AVATARCOMPARER__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x9D6BC60)
#define RPG_CLIENT_AVATARCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D6B850)
#define RPG_CLIENT_AVATARCOMPARER___IFIXBASEPROXY__ACCEPTIMPL_OFFSET UNITYSDK_OFFSET(0x9D6BEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparer_TypeDefinitionIndex = 57867;

	class AvatarComparer : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IAvatarComparer*>* _Comparers; // 0x18

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IAvatarComparer*>* comparers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IAvatarComparer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARER__CTOR_OFFSET))(this, comparers);
		}

		::System::Void _AcceptImpl(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARER__ACCEPTIMPL_OFFSET))(this, visitor);
		}

		::System::Int32 _CompareImpl(::RPG::Client::IAvatarInfoProvider* left, ::RPG::Client::IAvatarInfoProvider* right)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARER__COMPAREIMPL_OFFSET))(this, left, right);
		}

		::System::Void __iFixBaseProxy__AcceptImpl(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARER___IFIXBASEPROXY__ACCEPTIMPL_OFFSET))(this, P0);
		}
	};
}
