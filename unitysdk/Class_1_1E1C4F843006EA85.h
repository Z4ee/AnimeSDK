#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_3_1A92845FAFA5EC77;
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyPuzzleData; }

#define CLASS_1_1E1C4F843006EA85_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8AAE510)
#define CLASS_1_1E1C4F843006EA85_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8AAE800)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x8AAE5A0)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x8AAE790)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8AAECE0)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_CF6B1B6136BF54E5_OFFSET UNITYSDK_OFFSET(0x8AAEAA0)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_D949B3DCD224D31E_OFFSET UNITYSDK_OFFSET(0x8AAEBB0)
#define CLASS_1_1E1C4F843006EA85_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x8AAE8E0)
#define CLASS_1_1E1C4F843006EA85__CTOR_OFFSET UNITYSDK_OFFSET(0x8AAE440)

inline static constexpr unsigned int Class_1_1E1C4F843006EA85_TypeDefinitionIndex = 62624;

class Class_1_1E1C4F843006EA85 : public ::System::Object
{
public:
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x18
	::System::UInt64 Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_EXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}

	::System::Boolean Method_1_D949B3DCD224D31E(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_D949B3DCD224D31E_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData* Method_1_CF6B1B6136BF54E5()
	{
		return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_CF6B1B6136BF54E5_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
