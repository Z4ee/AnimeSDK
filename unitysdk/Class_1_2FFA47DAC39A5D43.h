#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_3_D6E9A038FA23103A;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelRuntimeInspector; }

#define CLASS_1_2FFA47DAC39A5D43_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD1AA260)
#define CLASS_1_2FFA47DAC39A5D43_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xD1AA160)
#define CLASS_1_2FFA47DAC39A5D43_METHOD_1_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0xD1AA880)
#define CLASS_1_2FFA47DAC39A5D43_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD1AA760)
#define CLASS_1_2FFA47DAC39A5D43__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AA150)

inline static constexpr unsigned int Class_1_2FFA47DAC39A5D43_TypeDefinitionIndex = 62515;

class Class_1_2FFA47DAC39A5D43 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelRuntimeInspector* Field_1_3; // 0x10
	::Class_1_867B6CE75953535A_1* Field_1_1; // 0x18
	::Class_3_D6E9A038FA23103A* Field_1_2; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_2FFA47DAC39A5D43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FFA47DAC39A5D43_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FFA47DAC39A5D43_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FFA47DAC39A5D43_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2FFA47DAC39A5D43_METHOD_1_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}
};
