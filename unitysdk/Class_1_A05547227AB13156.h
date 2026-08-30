#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolyGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_A4F0FA6F81B0B135;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A05547227AB13156__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CC3B0)

inline static constexpr unsigned int Class_1_A05547227AB13156_TypeDefinitionIndex = 41263;

class Class_1_A05547227AB13156 : public ::System::Object
{
public:
	::Class_1_A4F0FA6F81B0B135* DLGJKBMEFON; // 0x10
	::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>* MFJDOHANPFF; // 0x18
	::System::UInt32 DGKGNHLCJKN; // 0x20
	::RPG::Client::LittleGame::MonopolyGameState ADCPPJNMGJP; // 0x24
	::System::UInt32 HBPECADBGBB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A05547227AB13156__CTOR_OFFSET))(this);
	}
};
