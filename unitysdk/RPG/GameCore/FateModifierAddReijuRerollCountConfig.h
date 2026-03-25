#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_METHOD_3_920370B01FDA8851_OFFSET UNITYSDK_OFFSET(0x171C5770)
#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_METHOD_3_FC14B2F464DA79B8_OFFSET UNITYSDK_OFFSET(0x171C56A0)
#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddReijuRerollCountConfig_TypeDefinitionIndex = 17696;

	class FateModifierAddReijuRerollCountConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC14B2F464DA79B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_METHOD_3_FC14B2F464DA79B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_920370B01FDA8851(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_METHOD_3_920370B01FDA8851_OFFSET))(a1, a2);
		}
	};
}
