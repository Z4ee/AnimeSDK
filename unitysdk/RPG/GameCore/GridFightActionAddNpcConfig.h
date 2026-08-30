#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_6_3609B01B14847990_OFFSET UNITYSDK_OFFSET(0x1D149670)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_6_E6B9743F0A0E220C_OFFSET UNITYSDK_OFFSET(0x1D1496C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1496B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddNpcConfig_TypeDefinitionIndex = 19085;

	class GridFightActionAddNpcConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3609B01B14847990(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddNpcConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddNpcConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_6_3609B01B14847990_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E6B9743F0A0E220C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddNpcConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_6_E6B9743F0A0E220C_OFFSET))(a1, a2);
		}
	};
}
