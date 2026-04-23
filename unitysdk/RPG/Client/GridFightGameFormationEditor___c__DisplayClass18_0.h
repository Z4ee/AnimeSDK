#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS18_0__CANPUTROLE_B__1_OFFSET UNITYSDK_OFFSET(0xA4B4FF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4AF7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass18_0_TypeDefinitionIndex = 59506;

	class GridFightGameFormationEditor___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::UInt32 posIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanPutRole_b__1(::Class_2_181F61C600ECA68B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS18_0__CANPUTROLE_B__1_OFFSET))(this, x);
		}
	};
}
