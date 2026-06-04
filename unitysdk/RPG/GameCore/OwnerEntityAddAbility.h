#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OWNERENTITYADDABILITY_METHOD_3_184482C3DAA87523_OFFSET UNITYSDK_OFFSET(0x199E01F0)
#define RPG_GAMECORE_OWNERENTITYADDABILITY_METHOD_3_31C8A9130A317B78_OFFSET UNITYSDK_OFFSET(0x199E0170)
#define RPG_GAMECORE_OWNERENTITYADDABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x199E01C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OwnerEntityAddAbility_TypeDefinitionIndex = 21248;

	class OwnerEntityAddAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AbilityName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_31C8A9130A317B78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OwnerEntityAddAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OwnerEntityAddAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY_METHOD_3_31C8A9130A317B78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_184482C3DAA87523(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OwnerEntityAddAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY_METHOD_3_184482C3DAA87523_OFFSET))(a1, a2);
		}
	};
}
