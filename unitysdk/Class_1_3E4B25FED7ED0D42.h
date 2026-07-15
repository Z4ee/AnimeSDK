#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1204;
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3E4B25FED7ED0D42_METHOD_1_2A6B6388A539C1B4_OFFSET UNITYSDK_OFFSET(0x15E1A520)
#define CLASS_1_3E4B25FED7ED0D42_METHOD_1_3FB128A6ED4C465D_OFFSET UNITYSDK_OFFSET(0x15E1A5C0)
#define CLASS_1_3E4B25FED7ED0D42_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x15E1A3B0)
#define CLASS_1_3E4B25FED7ED0D42_METHOD_1_D1B1E19AC459D83C_OFFSET UNITYSDK_OFFSET(0x15E1A490)
#define CLASS_1_3E4B25FED7ED0D42__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1A900)

inline static constexpr unsigned int Class_1_3E4B25FED7ED0D42_TypeDefinitionIndex = 72466;

class Class_1_3E4B25FED7ED0D42 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1204*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E4B25FED7ED0D42__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_1204* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1204*))((::PBYTE)hIl2Cpp + CLASS_1_3E4B25FED7ED0D42_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1B1E19AC459D83C(::Class_0_16E4307DCC419505_1204* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1204*))((::PBYTE)hIl2Cpp + CLASS_1_3E4B25FED7ED0D42_METHOD_1_D1B1E19AC459D83C_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingBattle::SoldierProperty* Method_1_2A6B6388A539C1B4(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::RPG::Client::ChenLingBattle::SoldierProperty*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_3E4B25FED7ED0D42_METHOD_1_2A6B6388A539C1B4_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_3FB128A6ED4C465D(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_3E4B25FED7ED0D42_METHOD_1_3FB128A6ED4C465D_OFFSET))(this, a1);
	}
};
