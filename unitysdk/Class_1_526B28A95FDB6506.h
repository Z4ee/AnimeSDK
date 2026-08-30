#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_27;
namespace RPG::Client { class ChimeraDuelGameShopStallData; }
namespace System { class Action; }

#define CLASS_1_526B28A95FDB6506_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16911E10)
#define CLASS_1_526B28A95FDB6506_TICK_OFFSET UNITYSDK_OFFSET(0x16911E90)
#define CLASS_1_526B28A95FDB6506__CTOR_OFFSET UNITYSDK_OFFSET(0x16911E00)

inline static constexpr unsigned int Class_1_526B28A95FDB6506_TypeDefinitionIndex = 77878;

class Class_1_526B28A95FDB6506 : public ::System::Object
{
public:
	::RPG::Client::ChimeraDuelGameShopStallData* JBMJPJEKNGN; // 0x10

	::System::Void _ctor(::RPG::Client::ChimeraDuelGameShopStallData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameShopStallData*))((::PBYTE)hIl2Cpp + CLASS_1_526B28A95FDB6506__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_526B28A95FDB6506_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_526B28A95FDB6506_TICK_OFFSET))(this, a1);
	}
};
