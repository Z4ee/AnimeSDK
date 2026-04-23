#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_6_986FC6FEDF25770F_OFFSET UNITYSDK_OFFSET(0x1899D720)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_6_E6B9743F0A0E220C_OFFSET UNITYSDK_OFFSET(0x1899D890)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1899D7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddNpcConfig_TypeDefinitionIndex = 18350;

	class GridFightActionAddNpcConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_986FC6FEDF25770F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddNpcConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddNpcConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_6_986FC6FEDF25770F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E6B9743F0A0E220C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddNpcConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_6_E6B9743F0A0E220C_OFFSET))(a1, a2);
		}
	};
}
