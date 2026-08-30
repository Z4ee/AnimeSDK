#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_METHOD_4_01DDF2B50410FF07_OFFSET UNITYSDK_OFFSET(0x1BBB6760)
#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_METHOD_4_4C1AB6D0C424A2AB_OFFSET UNITYSDK_OFFSET(0x1BBB67B0)
#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB67A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueUnfinishDialogueNpcNum_TypeDefinitionIndex = 20561;

	class ByCompareRogueUnfinishDialogueNpcNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_01DDF2B50410FF07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_METHOD_4_01DDF2B50410FF07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C1AB6D0C424A2AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_METHOD_4_4C1AB6D0C424A2AB_OFFSET))(a1, a2);
		}
	};
}
