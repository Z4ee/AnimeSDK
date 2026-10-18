#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define CLASS_2_1A304D4C36D43D86_CLASS_2_800385898DEF54E6_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xBDB95C0)
#define CLASS_2_1A304D4C36D43D86_CLASS_2_800385898DEF54E6__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB2120)

inline static constexpr unsigned int Class_2_1A304D4C36D43D86_Class_2_800385898DEF54E6_TypeDefinitionIndex = 73877;

class Class_2_1A304D4C36D43D86_Class_2_800385898DEF54E6 : public ::Class_1_8A6989C352B0F0F0
{
public:
	::System::UInt32 OFOJPFDPKHN; // 0x80

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_CLASS_2_800385898DEF54E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_CLASS_2_800385898DEF54E6_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}
};
