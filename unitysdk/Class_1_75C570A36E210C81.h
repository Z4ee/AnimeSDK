#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
class Class_1_2AE1D80996AD66EA;
namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_75C570A36E210C81_METHOD_1_BBCDDD8B5CBD2605_OFFSET UNITYSDK_OFFSET(0x109FE110)
#define CLASS_1_75C570A36E210C81_METHOD_1_F7A7EFD5E174B495_OFFSET UNITYSDK_OFFSET(0x109FDB80)
#define CLASS_1_75C570A36E210C81__CTOR_OFFSET UNITYSDK_OFFSET(0x109FDAD0)

inline static constexpr unsigned int Class_1_75C570A36E210C81_TypeDefinitionIndex = 62151;

class Class_1_75C570A36E210C81 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_7, ::Class_1_2AE1D80996AD66EA*>* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + CLASS_1_75C570A36E210C81__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_573* Method_1_BBCDDD8B5CBD2605(::Enum_3_71AA90D596A09AC8_7 a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + CLASS_1_75C570A36E210C81_METHOD_1_BBCDDD8B5CBD2605_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7A7EFD5E174B495(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + CLASS_1_75C570A36E210C81_METHOD_1_F7A7EFD5E174B495_OFFSET))(this, a1);
	}
};
