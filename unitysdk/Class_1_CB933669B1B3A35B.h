#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CB933669B1B3A35B__CTOR_OFFSET UNITYSDK_OFFSET(0x155A7770)

inline static constexpr unsigned int Class_1_CB933669B1B3A35B_TypeDefinitionIndex = 54189;

class Class_1_CB933669B1B3A35B : public ::System::Object
{
public:
	::System::Boolean BNIMJJNOLAI; // 0x10
	::System::Int32 NOIIIOKMIIN; // 0x14
	::RPG::GameCore::FixPoint CNGOBEKKLPO; // 0x18
	::RPG::GameCore::FixPoint GCJMFBKLGHI; // 0x20
	::RPG::GameCore::FixPoint CCAOGMEFNLB; // 0x28
	::RPG::GameCore::FixPoint MENJMMPPBNM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB933669B1B3A35B__CTOR_OFFSET))(this);
	}
};
