#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_METHOD_3_610FDB468D8DE0ED_OFFSET UNITYSDK_OFFSET(0x1C074AB0)
#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_METHOD_3_920370B01FDA8851_OFFSET UNITYSDK_OFFSET(0x1C074B00)
#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C074AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddReijuRerollCountConfig_TypeDefinitionIndex = 18516;

	class FateModifierAddReijuRerollCountConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_610FDB468D8DE0ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_METHOD_3_610FDB468D8DE0ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_920370B01FDA8851(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_METHOD_3_920370B01FDA8851_OFFSET))(a1, a2);
		}
	};
}
