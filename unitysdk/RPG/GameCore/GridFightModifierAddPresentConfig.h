#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_METHOD_3_2ADF032589B8FFA8_OFFSET UNITYSDK_OFFSET(0x197E8E00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_METHOD_3_54DDDAC855FD1E91_OFFSET UNITYSDK_OFFSET(0x197E8D30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197E8DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddPresentConfig_TypeDefinitionIndex = 18461;

	class GridFightModifierAddPresentConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54DDDAC855FD1E91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddPresentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddPresentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_METHOD_3_54DDDAC855FD1E91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2ADF032589B8FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddPresentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddPresentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_METHOD_3_2ADF032589B8FFA8_OFFSET))(a1, a2);
		}
	};
}
