#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEAVATARHIGHLIGHTCOMPARER__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x196F0990)
#define RPG_CLIENT_FATEAVATARHIGHLIGHTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x196F0880)

namespace RPG::Client
{
	inline static constexpr unsigned int FateAvatarHighlightComparer_TypeDefinitionIndex = 61104;

	class FateAvatarHighlightComparer : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _TrialInstanceID2Order; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAVATARHIGHLIGHTCOMPARER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAVATARHIGHLIGHTCOMPARER__COMPAREIMPL_OFFSET))(this, a1, a2);
		}
	};
}
