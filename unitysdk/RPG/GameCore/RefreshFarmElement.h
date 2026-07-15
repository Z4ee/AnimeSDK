#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REFRESHFARMELEMENT_METHOD_3_938DEA15CF2B0356_OFFSET UNITYSDK_OFFSET(0x1B9C0860)
#define RPG_GAMECORE_REFRESHFARMELEMENT_METHOD_3_945AB9A6BF89E093_OFFSET UNITYSDK_OFFSET(0x1B9C0790)
#define RPG_GAMECORE_REFRESHFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C0850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshFarmElement_TypeDefinitionIndex = 21283;

	class RefreshFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_945AB9A6BF89E093(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFARMELEMENT_METHOD_3_945AB9A6BF89E093_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_938DEA15CF2B0356(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFARMELEMENT_METHOD_3_938DEA15CF2B0356_OFFSET))(a1, a2);
		}
	};
}
