#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_METHOD_3_2ADF032589B8FFA8_OFFSET UNITYSDK_OFFSET(0x1EE6C5C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_METHOD_3_61D5A254B6D0FC2C_OFFSET UNITYSDK_OFFSET(0x1EE6C570)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6C5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddPresentConfig_TypeDefinitionIndex = 19236;

	class GridFightModifierAddPresentConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61D5A254B6D0FC2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddPresentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddPresentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_METHOD_3_61D5A254B6D0FC2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2ADF032589B8FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddPresentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddPresentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_METHOD_3_2ADF032589B8FFA8_OFFSET))(a1, a2);
		}
	};
}
