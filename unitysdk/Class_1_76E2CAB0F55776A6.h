#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/PieceRemoveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_76E2CAB0F55776A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE44C40)

inline static constexpr unsigned int Class_1_76E2CAB0F55776A6_TypeDefinitionIndex = 40095;

class Class_1_76E2CAB0F55776A6 : public ::System::Object
{
public:
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_0; // 0x10
	::RPG::Client::LittleGame::Match3::PieceRemoveReason Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E2CAB0F55776A6__CTOR_OFFSET))(this);
	}
};
