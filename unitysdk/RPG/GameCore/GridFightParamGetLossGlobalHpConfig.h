#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_METHOD_6_84CE9F650E53A10D_OFFSET UNITYSDK_OFFSET(0x17271570)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_METHOD_6_FFA1F78AB58BECC3_OFFSET UNITYSDK_OFFSET(0x17271820)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172716F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLossGlobalHpConfig_TypeDefinitionIndex = 17902;

	class GridFightParamGetLossGlobalHpConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_84CE9F650E53A10D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_METHOD_6_84CE9F650E53A10D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FFA1F78AB58BECC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_METHOD_6_FFA1F78AB58BECC3_OFFSET))(a1, a2);
		}
	};
}
