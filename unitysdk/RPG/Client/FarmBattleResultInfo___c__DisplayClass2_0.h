#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MultipleDropUsedData; }

#define RPG_CLIENT_FARMBATTLERESULTINFO___C__DISPLAYCLASS2_0__ADDBATTLEMULTIPLEDROP_B__0_OFFSET UNITYSDK_OFFSET(0xA327360)
#define RPG_CLIENT_FARMBATTLERESULTINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA327220)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmBattleResultInfo___c__DisplayClass2_0_TypeDefinitionIndex = 58848;

	class FarmBattleResultInfo___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::MultipleDropUsedData* multipleDropUsedData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddBattleMultipleDrop_b__0(::RPG::Client::MultipleDropUsedData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropUsedData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO___C__DISPLAYCLASS2_0__ADDBATTLEMULTIPLEDROP_B__0_OFFSET))(this, x);
		}
	};
}
