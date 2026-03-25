#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_METHOD_3_1DEE59C6718ABE3A_OFFSET UNITYSDK_OFFSET(0x1726A0F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_METHOD_3_C498F00A6D6BBCF3_OFFSET UNITYSDK_OFFSET(0x17265CE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17265C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDelItemAfterRoundBeginConfig_TypeDefinitionIndex = 17826;

	class GridFightModifierDelItemAfterRoundBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1DEE59C6718ABE3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierDelItemAfterRoundBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierDelItemAfterRoundBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_METHOD_3_1DEE59C6718ABE3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C498F00A6D6BBCF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierDelItemAfterRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierDelItemAfterRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_METHOD_3_C498F00A6D6BBCF3_OFFSET))(a1, a2);
		}
	};
}
