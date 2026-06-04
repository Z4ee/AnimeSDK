#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolyGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_A4F0FA6F81B0B135;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A05547227AB13156__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1CD10)

inline static constexpr unsigned int Class_1_A05547227AB13156_TypeDefinitionIndex = 39575;

class Class_1_A05547227AB13156 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>* Field_1_0; // 0x10
	::Class_1_A4F0FA6F81B0B135* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::RPG::Client::LittleGame::MonopolyGameState Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A05547227AB13156__CTOR_OFFSET))(this);
	}
};
