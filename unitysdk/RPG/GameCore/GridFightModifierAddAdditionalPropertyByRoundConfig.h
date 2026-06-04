#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_METHOD_3_56D9E0E23E601EF9_OFFSET UNITYSDK_OFFSET(0x197E7D60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_METHOD_3_ECD2CF590677AC50_OFFSET UNITYSDK_OFFSET(0x197E7E30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197E7DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddAdditionalPropertyByRoundConfig_TypeDefinitionIndex = 18385;

	class GridFightModifierAddAdditionalPropertyByRoundConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56D9E0E23E601EF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_METHOD_3_56D9E0E23E601EF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ECD2CF590677AC50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_METHOD_3_ECD2CF590677AC50_OFFSET))(a1, a2);
		}
	};
}
