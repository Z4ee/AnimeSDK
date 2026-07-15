#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_METHOD_3_D08684E1532CF654_OFFSET UNITYSDK_OFFSET(0x1C5CF970)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_METHOD_3_ECD2CF590677AC50_OFFSET UNITYSDK_OFFSET(0x1C5CF9C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CF9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddAdditionalPropertyByRoundConfig_TypeDefinitionIndex = 18630;

	class GridFightModifierAddAdditionalPropertyByRoundConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D08684E1532CF654(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_METHOD_3_D08684E1532CF654_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ECD2CF590677AC50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_METHOD_3_ECD2CF590677AC50_OFFSET))(a1, a2);
		}
	};
}
