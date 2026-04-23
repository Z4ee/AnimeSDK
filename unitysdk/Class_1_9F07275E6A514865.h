#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatCommunicateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_9F07275E6A514865_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x1836F630)
#define CLASS_1_9F07275E6A514865__CTOR_OFFSET UNITYSDK_OFFSET(0x1836F830)

inline static constexpr unsigned int Class_1_9F07275E6A514865_TypeDefinitionIndex = 10788;

class Class_1_9F07275E6A514865 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::RPG::GameCore::DiceCombatCommunicateType Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F07275E6A514865__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_9F07275E6A514865*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_9F07275E6A514865*&))((::PBYTE)hIl2Cpp + CLASS_1_9F07275E6A514865_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
