#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChessStageRow; }

#define CLASS_1_93D8A4074FEDDB77_METHOD_1_EBBB9674D04BC371_OFFSET UNITYSDK_OFFSET(0xA1B40E0)
#define CLASS_1_93D8A4074FEDDB77__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B4390)

inline static constexpr unsigned int Class_1_93D8A4074FEDDB77_TypeDefinitionIndex = 49500;

class Class_1_93D8A4074FEDDB77 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D8A4074FEDDB77__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_EBBB9674D04BC371(::RPG::GameCore::ChessStageRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChessStageRow*))((::PBYTE)hIl2Cpp + CLASS_1_93D8A4074FEDDB77_METHOD_1_EBBB9674D04BC371_OFFSET))(a1);
	}
};
