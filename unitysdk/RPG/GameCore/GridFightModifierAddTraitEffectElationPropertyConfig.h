#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_METHOD_3_6B4E536F9318D577_OFFSET UNITYSDK_OFFSET(0x1C5D0320)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_METHOD_3_EC664215F6527333_OFFSET UNITYSDK_OFFSET(0x1C5D02D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D0310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddTraitEffectElationPropertyConfig_TypeDefinitionIndex = 18733;

	class GridFightModifierAddTraitEffectElationPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC664215F6527333(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddTraitEffectElationPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddTraitEffectElationPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_METHOD_3_EC664215F6527333_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B4E536F9318D577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddTraitEffectElationPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddTraitEffectElationPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_METHOD_3_6B4E536F9318D577_OFFSET))(a1, a2);
		}
	};
}
