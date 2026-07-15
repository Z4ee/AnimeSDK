#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_3_001D9EA49F6215B6;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelRuntimeInspector; }

#define CLASS_1_2FFA47DAC39A5D43_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x169D13D0)
#define CLASS_1_2FFA47DAC39A5D43_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x169D12D0)
#define CLASS_1_2FFA47DAC39A5D43_METHOD_1_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x169D1990)
#define CLASS_1_2FFA47DAC39A5D43_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x169D1890)
#define CLASS_1_2FFA47DAC39A5D43__CTOR_OFFSET UNITYSDK_OFFSET(0x169D12C0)

inline static constexpr unsigned int Class_1_2FFA47DAC39A5D43_TypeDefinitionIndex = 72868;

class Class_1_2FFA47DAC39A5D43 : public ::System::Object
{
public:
	::Class_3_001D9EA49F6215B6* Field_1_0; // 0x10
	::Class_1_2CDF619C23140440* Field_1_1; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelRuntimeInspector* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_1_2FFA47DAC39A5D43__CTOR_OFFSET))(this, a1, a2);
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
