#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB71A60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0___HASROLE_B__0_OFFSET UNITYSDK_OFFSET(0xBB747E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0___HASROLE_B__1_OFFSET UNITYSDK_OFFSET(0xBB74820)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass182_0_TypeDefinitionIndex = 60525;

	class GridFightGameRefData___c__DisplayClass182_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::System::Boolean>* pred; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __HasRole_b__0(::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0___HASROLE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __HasRole_b__1(::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0___HASROLE_B__1_OFFSET))(this, a1);
		}
	};
}
