#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelRankData; }

#define CLASS_1_F95DD0989B6896B5___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129260E0)
#define CLASS_1_F95DD0989B6896B5___C__DISPLAYCLASS2_0__GETRANKDATABYSCORE_B__0_OFFSET UNITYSDK_OFFSET(0x129263B0)

inline static constexpr unsigned int Class_1_F95DD0989B6896B5___c__DisplayClass2_0_TypeDefinitionIndex = 58388;

class Class_1_F95DD0989B6896B5___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::UInt32 score; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F95DD0989B6896B5___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRankDataByScore_b__0(::RPG::Client::ChimeraDuelRankData* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelRankData*))((::PBYTE)hIl2Cpp + CLASS_1_F95DD0989B6896B5___C__DISPLAYCLASS2_0__GETRANKDATABYSCORE_B__0_OFFSET))(this, data);
	}
};
