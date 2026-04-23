#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBD9A77671154634;
namespace RPG::Client { class GridFightGameModifier; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F4CF0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS16_0__UPDATEADD_B__0_OFFSET UNITYSDK_OFFSET(0xA4F5D50)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS16_0__UPDATEADD_B__1_OFFSET UNITYSDK_OFFSET(0xA4F5DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass16_0_TypeDefinitionIndex = 59884;

	class GridFightModifierInfo___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_1_EBD9A77671154634* info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAdd_b__0(::RPG::Client::GridFightGameModifier* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS16_0__UPDATEADD_B__0_OFFSET))(this, x);
		}

		::System::Boolean _UpdateAdd_b__1(::RPG::Client::GridFightGameModifier* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS16_0__UPDATEADD_B__1_OFFSET))(this, x);
		}
	};
}
