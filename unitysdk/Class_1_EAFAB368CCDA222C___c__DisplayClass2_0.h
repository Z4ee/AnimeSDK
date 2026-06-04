#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelRankData; }

#define CLASS_1_EAFAB368CCDA222C___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF3710)
#define CLASS_1_EAFAB368CCDA222C___C__DISPLAYCLASS2_0__GETRANKDATABYSCORE_B__0_OFFSET UNITYSDK_OFFSET(0xAFF39F0)

inline static constexpr unsigned int Class_1_EAFAB368CCDA222C___c__DisplayClass2_0_TypeDefinitionIndex = 59318;

class Class_1_EAFAB368CCDA222C___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::UInt32 score; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRankDataByScore_b__0(::RPG::Client::ChimeraDuelRankData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelRankData*))((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C___C__DISPLAYCLASS2_0__GETRANKDATABYSCORE_B__0_OFFSET))(this, a1);
	}
};
