#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC800620)
#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS___C__DISPLAYCLASS2_0__SETLEVELRARITYISDESCENDING_B__0_OFFSET UNITYSDK_OFFSET(0xC800730)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerExtensions___c__DisplayClass2_0_TypeDefinitionIndex = 62874;

	class AvatarComparerExtensions___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Boolean isDescending; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetLevelRarityIsDescending_b__0(::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS___C__DISPLAYCLASS2_0__SETLEVELRARITYISDESCENDING_B__0_OFFSET))(this, a1);
		}
	};
}
