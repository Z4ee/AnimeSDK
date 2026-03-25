#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1A9F5231DE8124B9_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x167E9A30)
#define CLASS_1_1A9F5231DE8124B9_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x167E9A20)
#define CLASS_1_1A9F5231DE8124B9__CTOR_OFFSET UNITYSDK_OFFSET(0x167E9A40)

inline static constexpr unsigned int Class_1_1A9F5231DE8124B9_TypeDefinitionIndex = 32239;

class Class_1_1A9F5231DE8124B9 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelTeamType Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

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
