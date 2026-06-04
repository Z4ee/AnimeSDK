#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONLIST_METHOD_2_0D9901B3119E3398_OFFSET UNITYSDK_OFFSET(0x197D8710)
#define RPG_GAMECORE_GRIDFIGHTACTIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x197D8750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionList_TypeDefinitionIndex = 18342;

	class GridFightActionList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0D9901B3119E3398(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONLIST_METHOD_2_0D9901B3119E3398_OFFSET))(a1, a2);
		}
	};
}
