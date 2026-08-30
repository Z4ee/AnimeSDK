#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_METHOD_3_6308F2F2586A6347_OFFSET UNITYSDK_OFFSET(0x1EE6C150)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_METHOD_3_B58AF6780D4CCBEB_OFFSET UNITYSDK_OFFSET(0x1EE6C1A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6C190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddExpertRestrictConfig_TypeDefinitionIndex = 19239;

	class GridFightModifierAddExpertRestrictConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6308F2F2586A6347(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddExpertRestrictConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddExpertRestrictConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_METHOD_3_6308F2F2586A6347_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B58AF6780D4CCBEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddExpertRestrictConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddExpertRestrictConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_METHOD_3_B58AF6780D4CCBEB_OFFSET))(a1, a2);
		}
	};
}
