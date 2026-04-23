#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS55_0__CONTAINSROLEID_B__0_OFFSET UNITYSDK_OFFSET(0xA4B50C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B0BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass55_0_TypeDefinitionIndex = 59507;

	class GridFightGameFormationEditor___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsRoleID_b__0(::Class_2_181F61C600ECA68B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS55_0__CONTAINSROLEID_B__0_OFFSET))(this, x);
		}
	};
}
