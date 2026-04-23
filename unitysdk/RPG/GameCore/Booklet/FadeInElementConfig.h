#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_METHOD_3_847194E34086FEEA_OFFSET UNITYSDK_OFFSET(0x18710C80)
#define RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_METHOD_3_FA70FED62A51102D_OFFSET UNITYSDK_OFFSET(0x18710A80)
#define RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1870F100)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int FadeInElementConfig_TypeDefinitionIndex = 23770;

	class FadeInElementConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::System::Boolean IsAutoFadeIn; // 0x18
		::System::Boolean IsAlwayShow; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA70FED62A51102D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::FadeInElementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::FadeInElementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_METHOD_3_FA70FED62A51102D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_847194E34086FEEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::FadeInElementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::FadeInElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_METHOD_3_847194E34086FEEA_OFFSET))(a1, a2);
		}
	};
}
