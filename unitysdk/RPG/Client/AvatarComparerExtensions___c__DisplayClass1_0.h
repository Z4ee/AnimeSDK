#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9109DB0)
#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS___C__DISPLAYCLASS1_0__SETLEVELRARITYISLEVELFIRST_B__0_OFFSET UNITYSDK_OFFSET(0x9109F40)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerExtensions___c__DisplayClass1_0_TypeDefinitionIndex = 50980;

	class AvatarComparerExtensions___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Boolean isLevelFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetLevelRarityIsLevelFirst_b__0(::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS___C__DISPLAYCLASS1_0__SETLEVELRARITYISLEVELFIRST_B__0_OFFSET))(this, target);
		}
	};
}
