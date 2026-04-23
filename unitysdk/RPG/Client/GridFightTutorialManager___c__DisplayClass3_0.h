#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C5480)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS3_0__ISGRIDBLOCKBYTUTORIAL_B__0_OFFSET UNITYSDK_OFFSET(0xA5C8EF0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS3_0__ISGRIDBLOCKBYTUTORIAL_B__1_OFFSET UNITYSDK_OFFSET(0xA5C8F10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTutorialManager___c__DisplayClass3_0_TypeDefinitionIndex = 60307;

	class GridFightTutorialManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 posIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsGridBlockByTutorial_b__0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS3_0__ISGRIDBLOCKBYTUTORIAL_B__0_OFFSET))(this, x);
		}

		::System::Boolean _IsGridBlockByTutorial_b__1(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS3_0__ISGRIDBLOCKBYTUTORIAL_B__1_OFFSET))(this, x);
		}
	};
}
