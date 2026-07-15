#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_719;
class Class_1_2AE1D80996AD66EA;
namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DAD3487E4FA7C4C6_METHOD_1_1C42F6AA302DA962_OFFSET UNITYSDK_OFFSET(0x16FC1440)
#define CLASS_1_DAD3487E4FA7C4C6_METHOD_1_BBCDDD8B5CBD2605_OFFSET UNITYSDK_OFFSET(0x16FC1820)
#define CLASS_1_DAD3487E4FA7C4C6__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC1390)

inline static constexpr unsigned int Class_1_DAD3487E4FA7C4C6_TypeDefinitionIndex = 72475;

class Class_1_DAD3487E4FA7C4C6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_9, ::Class_1_2AE1D80996AD66EA*>* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + CLASS_1_DAD3487E4FA7C4C6__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_719* Method_1_BBCDDD8B5CBD2605(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::Class_0_16E4307DCC419505_719*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_DAD3487E4FA7C4C6_METHOD_1_BBCDDD8B5CBD2605_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C42F6AA302DA962(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + CLASS_1_DAD3487E4FA7C4C6_METHOD_1_1C42F6AA302DA962_OFFSET))(this, a1);
	}
};
