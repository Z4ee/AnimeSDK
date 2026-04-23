#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETLEVELRARITYISDESCENDING_OFFSET UNITYSDK_OFFSET(0x9D6C200)
#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETLEVELRARITYISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x9D6C110)
#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETPINNING_OFFSET UNITYSDK_OFFSET(0x9D6C030)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerExtensions_TypeDefinitionIndex = 57861;

	class AvatarComparerExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetPinning(::RPG::Client::IAvatarComparer* comparer, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IAvatarInfoProvider*>* pinningAvatars)
		{
			return ((::System::Void(*)(::RPG::Client::IAvatarComparer*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETPINNING_OFFSET))(comparer, pinningAvatars);
		}

		static ::System::Void SetLevelRarityIsLevelFirst(::RPG::Client::IAvatarComparer* comparer, ::System::Boolean isLevelFirst)
		{
			return ((::System::Void(*)(::RPG::Client::IAvatarComparer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETLEVELRARITYISLEVELFIRST_OFFSET))(comparer, isLevelFirst);
		}

		static ::System::Void SetLevelRarityIsDescending(::RPG::Client::IAvatarComparer* comparer, ::System::Boolean isDescending)
		{
			return ((::System::Void(*)(::RPG::Client::IAvatarComparer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETLEVELRARITYISDESCENDING_OFFSET))(comparer, isDescending);
		}
	};
}
