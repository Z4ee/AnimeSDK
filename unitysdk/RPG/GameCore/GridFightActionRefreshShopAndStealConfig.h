#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_METHOD_6_6C2AAEF0DEC0217A_OFFSET UNITYSDK_OFFSET(0x17250DA0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_METHOD_6_AF8A811E81B80F41_OFFSET UNITYSDK_OFFSET(0x17250310)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17250270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRefreshShopAndStealConfig_TypeDefinitionIndex = 17729;

	class GridFightActionRefreshShopAndStealConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6C2AAEF0DEC0217A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_METHOD_6_6C2AAEF0DEC0217A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AF8A811E81B80F41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_METHOD_6_AF8A811E81B80F41_OFFSET))(a1, a2);
		}
	};
}
