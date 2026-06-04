#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_METHOD_4_4C1AB6D0C424A2AB_OFFSET UNITYSDK_OFFSET(0x1952D6C0)
#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_METHOD_4_8F250B7116B2FE52_OFFSET UNITYSDK_OFFSET(0x1952D5F0)
#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1952D670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueUnfinishDialogueNpcNum_TypeDefinitionIndex = 19655;

	class ByCompareRogueUnfinishDialogueNpcNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F250B7116B2FE52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_METHOD_4_8F250B7116B2FE52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C1AB6D0C424A2AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_METHOD_4_4C1AB6D0C424A2AB_OFFSET))(a1, a2);
		}
	};
}
