#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDirection.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesPosition; }

#define CLASS_1_5AF45EC9C8E21EF3_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1C4DCE90)
#define CLASS_1_5AF45EC9C8E21EF3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C4DCE40)
#define CLASS_1_5AF45EC9C8E21EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DCEE0)

inline static constexpr unsigned int Class_1_5AF45EC9C8E21EF3_TypeDefinitionIndex = 42066;

class Class_1_5AF45EC9C8E21EF3 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingFesPosition* FOCNBOANONM; // 0x10
	::System::UInt32 CENIOCNLPCC; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x1C
	::RPG::GameCore::ChenLingFesDirection PDMOFFGHMJF; // 0x20
	::System::Boolean MNBBCAMDGDI; // 0x24
	::System::Boolean DPKBLOIGNHD; // 0x25
	::System::Int32 DJCOAFFJAID; // 0x28
	::RPG::GameCore::ChenLingFesCellType GDIGGOLJIBJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AF45EC9C8E21EF3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AF45EC9C8E21EF3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AF45EC9C8E21EF3_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}
};
