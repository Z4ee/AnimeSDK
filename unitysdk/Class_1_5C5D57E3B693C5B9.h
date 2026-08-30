#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_5C5D57E3B693C5B9_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1C8C2D70)
#define CLASS_1_5C5D57E3B693C5B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C2EA0)

inline static constexpr unsigned int Class_1_5C5D57E3B693C5B9_TypeDefinitionIndex = 15144;

class Class_1_5C5D57E3B693C5B9 : public ::System::Object
{
public:
	::RPG::GameCore::TrainPartyStatType LLCOEPJFGPE; // 0x10
	::System::UInt32 GPIGNHPKFFB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D57E3B693C5B9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5C5D57E3B693C5B9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5C5D57E3B693C5B9*&))((::PBYTE)hIl2Cpp + CLASS_1_5C5D57E3B693C5B9_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
