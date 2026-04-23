#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE___C__DISPLAYCLASS2_0__CANDRESS_B__0_OFFSET UNITYSDK_OFFSET(0xA4B8090)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B8080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_UniqueDressRule___c__DisplayClass2_0_TypeDefinitionIndex = 59488;

	class GridFightGameFormationEditor_UniqueDressRule___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanDress_b__0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE___C__DISPLAYCLASS2_0__CANDRESS_B__0_OFFSET))(this, x);
		}
	};
}
