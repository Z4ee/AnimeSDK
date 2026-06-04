#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_6_619700563B8CD398_OFFSET UNITYSDK_OFFSET(0x197D5C50)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_6_621EE1C5E7A75233_OFFSET UNITYSDK_OFFSET(0x197D5AE0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197D5BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddPosCntConfig_TypeDefinitionIndex = 18319;

	class GridFightActionAddPosCntConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_621EE1C5E7A75233(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddPosCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddPosCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_6_621EE1C5E7A75233_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_619700563B8CD398(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddPosCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_6_619700563B8CD398_OFFSET))(a1, a2);
		}
	};
}
