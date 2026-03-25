#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseChestSystem_1.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;

#define CLASS_2_F9870DE8592C94DF__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0xA9D3930)
#define CLASS_2_F9870DE8592C94DF__CTOR_OFFSET UNITYSDK_OFFSET(0xA9D3470)
#define CLASS_2_F9870DE8592C94DF__REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0xA9D3E10)
#define CLASS_2_F9870DE8592C94DF__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xA9D3750)
#define CLASS_2_F9870DE8592C94DF___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xA9D3F60)

inline static constexpr unsigned int Class_2_F9870DE8592C94DF_TypeDefinitionIndex = 62756;

class Class_2_F9870DE8592C94DF : public ::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_0; // 0x40

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_F9870DE8592C94DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9870DE8592C94DF__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateTrigger(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_F9870DE8592C94DF__CREATETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _RemoveTrigger(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_F9870DE8592C94DF__REMOVETRIGGER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9870DE8592C94DF___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}
};
