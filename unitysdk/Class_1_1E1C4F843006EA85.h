#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyPuzzleData; }

#define CLASS_1_1E1C4F843006EA85_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAC72D40)
#define CLASS_1_1E1C4F843006EA85_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAC73020)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xAC72DD0)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAC73490)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_B9999439DB2F3546_OFFSET UNITYSDK_OFFSET(0xAC72FB0)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_BADD8232FA0D859E_OFFSET UNITYSDK_OFFSET(0xAC732C0)
#define CLASS_1_1E1C4F843006EA85_METHOD_1_D949B3DCD224D31E_OFFSET UNITYSDK_OFFSET(0xAC733E0)
#define CLASS_1_1E1C4F843006EA85_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xAC73170)
#define CLASS_1_1E1C4F843006EA85__CTOR_OFFSET UNITYSDK_OFFSET(0xAC72C70)

inline static constexpr unsigned int Class_1_1E1C4F843006EA85_TypeDefinitionIndex = 71457;

class Class_1_1E1C4F843006EA85 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B* Field_1_0; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_1; // 0x18
	::System::UInt64 Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_B9999439DB2F3546()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_B9999439DB2F3546_OFFSET))(this);
	}

	::System::Boolean Method_1_D949B3DCD224D31E(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_D949B3DCD224D31E_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData* Method_1_BADD8232FA0D859E()
	{
		return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_BADD8232FA0D859E_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1C4F843006EA85_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
