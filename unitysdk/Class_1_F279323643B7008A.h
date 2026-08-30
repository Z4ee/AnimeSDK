#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongPatrolType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F279323643B7008A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53E190)

inline static constexpr unsigned int Class_1_F279323643B7008A_TypeDefinitionIndex = 41357;

class Class_1_F279323643B7008A : public ::System::Object
{
public:
	::System::Int32 DEICFHOKPOB; // 0x10
	::System::Single EMNHIJAIMBE; // 0x14
	::System::Single KKHAELMENEH; // 0x18
	::System::Int32 HNLLIOJDOEL; // 0x1C
	::RPG::GameCore::PingPongPatrolType GMPGDEINODK; // 0x20
	::System::Int32 AAHCOCFCAJD; // 0x24
	::System::UInt32 FEFGPOPNHDI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F279323643B7008A__CTOR_OFFSET))(this);
	}
};
