#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTOWNERENTITYADDABILITY_METHOD_3_3E77564EECBEF652_OFFSET UNITYSDK_OFFSET(0x19BEEFB0)
#define RPG_GAMECORE_RTOWNERENTITYADDABILITY_METHOD_3_D79532EBC8E4BF89_OFFSET UNITYSDK_OFFSET(0x19BEF030)
#define RPG_GAMECORE_RTOWNERENTITYADDABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEF000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtOwnerEntityAddAbility_TypeDefinitionIndex = 22760;

	class RtOwnerEntityAddAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AbilityName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTOWNERENTITYADDABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E77564EECBEF652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtOwnerEntityAddAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtOwnerEntityAddAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTOWNERENTITYADDABILITY_METHOD_3_3E77564EECBEF652_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D79532EBC8E4BF89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtOwnerEntityAddAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtOwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTOWNERENTITYADDABILITY_METHOD_3_D79532EBC8E4BF89_OFFSET))(a1, a2);
		}
	};
}
