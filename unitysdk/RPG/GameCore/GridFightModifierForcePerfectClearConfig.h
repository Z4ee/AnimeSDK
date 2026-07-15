#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_METHOD_3_84A9160FB188C1C1_OFFSET UNITYSDK_OFFSET(0x1D069D90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_METHOD_3_B06667034137DE25_OFFSET UNITYSDK_OFFSET(0x1D069DE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D069DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForcePerfectClearConfig_TypeDefinitionIndex = 18702;

	class GridFightModifierForcePerfectClearConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_84A9160FB188C1C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForcePerfectClearConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForcePerfectClearConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_METHOD_3_84A9160FB188C1C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B06667034137DE25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForcePerfectClearConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForcePerfectClearConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_METHOD_3_B06667034137DE25_OFFSET))(a1, a2);
		}
	};
}
