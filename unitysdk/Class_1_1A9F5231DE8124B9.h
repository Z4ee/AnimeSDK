#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1A9F5231DE8124B9_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1C751950)
#define CLASS_1_1A9F5231DE8124B9_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1C751940)
#define CLASS_1_1A9F5231DE8124B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C751960)

inline static constexpr unsigned int Class_1_1A9F5231DE8124B9_TypeDefinitionIndex = 40377;

class Class_1_1A9F5231DE8124B9 : public ::System::Object
{
public:
	::System::Int32 BEAHMFJLNCG; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType JCDIEKGKCPP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A9F5231DE8124B9__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A9F5231DE8124B9_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A9F5231DE8124B9_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
