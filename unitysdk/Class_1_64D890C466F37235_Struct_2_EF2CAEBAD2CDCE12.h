#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_64D890C466F37235_PoseSwitchState.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E3CC6BC1F6AE3962;

#define CLASS_1_64D890C466F37235_STRUCT_2_EF2CAEBAD2CDCE12_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x39CC540)
#define CLASS_1_64D890C466F37235_STRUCT_2_EF2CAEBAD2CDCE12_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x39CC5A0)
#define CLASS_1_64D890C466F37235_STRUCT_2_EF2CAEBAD2CDCE12_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x39CC590)

inline static constexpr unsigned int Class_1_64D890C466F37235_Struct_2_EF2CAEBAD2CDCE12_TypeDefinitionIndex = 57862;

struct alignas(8) Class_1_64D890C466F37235_Struct_2_EF2CAEBAD2CDCE12
{
	::Class_1_E3CC6BC1F6AE3962* Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x28
	::UnityEngine::Quaternion Field_2_3; // 0x2C
	::UnityEngine::Vector3 Field_2_4; // 0x3C
	::System::Single Field_2_5; // 0x48
	::System::Single Field_2_6; // 0x4C
	::System::Boolean Field_2_7; // 0x50
	::Class_1_64D890C466F37235_PoseSwitchState Field_2_8; // 0x54
	::System::UInt32 Field_2_9; // 0x58
	::System::UInt32 Field_2_10; // 0x5C

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64D890C466F37235_STRUCT_2_EF2CAEBAD2CDCE12_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64D890C466F37235_STRUCT_2_EF2CAEBAD2CDCE12_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64D890C466F37235_STRUCT_2_EF2CAEBAD2CDCE12_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
