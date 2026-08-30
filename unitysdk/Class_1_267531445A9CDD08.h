#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingMatchUIShowType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1427;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_267531445A9CDD08_METHOD_1_1AF59241C0DE3445_OFFSET UNITYSDK_OFFSET(0x1AA33EE0)
#define CLASS_1_267531445A9CDD08_METHOD_1_7E10213B9F381044_OFFSET UNITYSDK_OFFSET(0x1AA33E20)
#define CLASS_1_267531445A9CDD08__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA34300)

inline static constexpr unsigned int Class_1_267531445A9CDD08_TypeDefinitionIndex = 80583;

class Class_1_267531445A9CDD08 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::B51RacingMatchUIShowType, ::Class_0_16E4307DCC419505_1427*>* IOEFEFMMKFP; // 0x10
	::RPG::Client::B51Racing::B51RacingMatchUIShowType HBDGFLPGFJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_267531445A9CDD08__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E10213B9F381044(::RPG::Client::B51Racing::B51RacingMatchUIShowType a1, ::Class_0_16E4307DCC419505_1427* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingMatchUIShowType, ::Class_0_16E4307DCC419505_1427*))((::PBYTE)hIl2Cpp + CLASS_1_267531445A9CDD08_METHOD_1_7E10213B9F381044_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1AF59241C0DE3445(::RPG::Client::B51Racing::B51RacingMatchUIShowType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingMatchUIShowType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_267531445A9CDD08_METHOD_1_1AF59241C0DE3445_OFFSET))(this, a1, a2);
	}
};
