#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEAVATARHIGHLIGHTCOMPARER__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x966E5D0)
#define RPG_CLIENT_FATEAVATARHIGHLIGHTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x966E4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateAvatarHighlightComparer_TypeDefinitionIndex = 51940;

	class FateAvatarHighlightComparer : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _TrialInstanceID2Order; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* orderedTrialAvatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAVATARHIGHLIGHTCOMPARER__CTOR_OFFSET))(this, orderedTrialAvatars);
		}

		::System::Int32 _CompareImpl(::RPG::Client::IAvatarInfoProvider* a, ::RPG::Client::IAvatarInfoProvider* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAVATARHIGHLIGHTCOMPARER__COMPAREIMPL_OFFSET))(this, a, b);
		}
	};
}
