#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCEQUIP_METHOD_2_424E4F064B9B7856_OFFSET UNITYSDK_OFFSET(0x1899D8A0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCEQUIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1899D8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddNpcEquip_TypeDefinitionIndex = 18349;

	class GridFightActionAddNpcEquip : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCEQUIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_424E4F064B9B7856(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddNpcEquip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddNpcEquip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCEQUIP_METHOD_2_424E4F064B9B7856_OFFSET))(a1, a2);
		}
	};
}
