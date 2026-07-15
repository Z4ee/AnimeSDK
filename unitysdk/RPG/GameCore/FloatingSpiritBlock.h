#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOATINGSPIRITBLOCK_METHOD_2_76F73BA0F24720AC_OFFSET UNITYSDK_OFFSET(0x1BEBACA0)
#define RPG_GAMECORE_FLOATINGSPIRITBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBADC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatingSpiritBlock_TypeDefinitionIndex = 17846;

	class FloatingSpiritBlock : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt16 LevelVarValue; // 0x10
		::System::UInt16 BlockIndex; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATINGSPIRITBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_76F73BA0F24720AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloatingSpiritBlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloatingSpiritBlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATINGSPIRITBLOCK_METHOD_2_76F73BA0F24720AC_OFFSET))(a1, a2);
		}
	};
}
