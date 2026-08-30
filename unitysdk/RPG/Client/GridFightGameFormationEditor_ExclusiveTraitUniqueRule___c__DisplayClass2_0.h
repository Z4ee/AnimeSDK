#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EXCLUSIVETRAITUNIQUERULE___C__DISPLAYCLASS2_0__CANDRESS_B__0_OFFSET UNITYSDK_OFFSET(0xD1B3660)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EXCLUSIVETRAITUNIQUERULE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B3650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_ExclusiveTraitUniqueRule___c__DisplayClass2_0_TypeDefinitionIndex = 64696;

	class GridFightGameFormationEditor_ExclusiveTraitUniqueRule___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EXCLUSIVETRAITUNIQUERULE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanDress_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EXCLUSIVETRAITUNIQUERULE___C__DISPLAYCLASS2_0__CANDRESS_B__0_OFFSET))(this, a1);
		}
	};
}
