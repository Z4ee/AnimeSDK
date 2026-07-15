#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_6_619700563B8CD398_OFFSET UNITYSDK_OFFSET(0x1C5C1400)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_6_E532A688734D865C_OFFSET UNITYSDK_OFFSET(0x1C5C13B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C13F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddPosCntConfig_TypeDefinitionIndex = 18556;

	class GridFightActionAddPosCntConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E532A688734D865C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddPosCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddPosCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_6_E532A688734D865C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_619700563B8CD398(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddPosCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_6_619700563B8CD398_OFFSET))(a1, a2);
		}
	};
}
