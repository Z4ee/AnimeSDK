#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_2_4A27D8D16ED10A2B___c__DisplayClass13_0;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_1__CHECKRECONNECTTOFIGHT_B__2_OFFSET UNITYSDK_OFFSET(0xBC48F20)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBC48E60)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass13_1_TypeDefinitionIndex = 73746;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass13_1 : public ::System::Object
{
public:
	::Class_2_4A27D8D16ED10A2B___c__DisplayClass13_0* CS___8__locals1; // 0x10
	::Enum_3_A35B38E5F9115A76_2 reconnectGameMode; // 0x18
	::System::Boolean isInFighting; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_1__CHECKRECONNECTTOFIGHT_B__2_OFFSET))(this);
	}
};
