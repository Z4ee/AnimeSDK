#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_3_912CC478F2B21832;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelRuntimeInspector; }

#define CLASS_1_2FFA47DAC39A5D43_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCF8B9E0)
#define CLASS_1_2FFA47DAC39A5D43_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xCF8B8E0)
#define CLASS_1_2FFA47DAC39A5D43_METHOD_1_F75A8ECE5CAA5D87_OFFSET UNITYSDK_OFFSET(0xCF8C050)
#define CLASS_1_2FFA47DAC39A5D43_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xCF8BF20)
#define CLASS_1_2FFA47DAC39A5D43__CTOR_OFFSET UNITYSDK_OFFSET(0xCF8B8D0)

inline static constexpr unsigned int Class_1_2FFA47DAC39A5D43_TypeDefinitionIndex = 76335;

class Class_1_2FFA47DAC39A5D43 : public ::System::Object
{
public:
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x10
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelRuntimeInspector* AJICFFBAAKJ; // 0x20
	::System::Boolean MHLHNOLKFNE; // 0x28

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_1_2FFA47DAC39A5D43__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_F75A8ECE5CAA5D87(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2FFA47DAC39A5D43_METHOD_1_F75A8ECE5CAA5D87_OFFSET))(this, a1);
	}
};
