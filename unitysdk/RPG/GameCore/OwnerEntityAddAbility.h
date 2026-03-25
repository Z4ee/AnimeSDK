#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OWNERENTITYADDABILITY_METHOD_3_2D3B443C7DF63007_OFFSET UNITYSDK_OFFSET(0x17484E20)
#define RPG_GAMECORE_OWNERENTITYADDABILITY_METHOD_3_49CCA5C1651B636E_OFFSET UNITYSDK_OFFSET(0x17484EA0)
#define RPG_GAMECORE_OWNERENTITYADDABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x17484E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OwnerEntityAddAbility_TypeDefinitionIndex = 20659;

	class OwnerEntityAddAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AbilityName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D3B443C7DF63007(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OwnerEntityAddAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OwnerEntityAddAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY_METHOD_3_2D3B443C7DF63007_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49CCA5C1651B636E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OwnerEntityAddAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY_METHOD_3_49CCA5C1651B636E_OFFSET))(a1, a2);
		}
	};
}
