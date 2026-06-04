#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
class Class_1_2AE1D80996AD66EA;
namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5F07E8C3D18E192E_METHOD_1_087E1460FC15C78E_OFFSET UNITYSDK_OFFSET(0x12A952A0)
#define CLASS_1_5F07E8C3D18E192E_METHOD_1_BBCDDD8B5CBD2605_OFFSET UNITYSDK_OFFSET(0x12A95820)
#define CLASS_1_5F07E8C3D18E192E__CTOR_OFFSET UNITYSDK_OFFSET(0x12A951F0)

inline static constexpr unsigned int Class_1_5F07E8C3D18E192E_TypeDefinitionIndex = 70962;

class Class_1_5F07E8C3D18E192E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_9, ::Class_1_2AE1D80996AD66EA*>* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + CLASS_1_5F07E8C3D18E192E__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_684* Method_1_BBCDDD8B5CBD2605(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_5F07E8C3D18E192E_METHOD_1_BBCDDD8B5CBD2605_OFFSET))(this, a1);
	}

	::System::Void Method_1_087E1460FC15C78E(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + CLASS_1_5F07E8C3D18E192E_METHOD_1_087E1460FC15C78E_OFFSET))(this, a1);
	}
};
