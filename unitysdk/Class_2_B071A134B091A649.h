#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

#define CLASS_2_B071A134B091A649_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1594AE70)
#define CLASS_2_B071A134B091A649_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x1594AE80)
#define CLASS_2_B071A134B091A649_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x1594B120)
#define CLASS_2_B071A134B091A649_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1594B0E0)
#define CLASS_2_B071A134B091A649__CTOR_OFFSET UNITYSDK_OFFSET(0x1594B260)

inline static constexpr unsigned int Class_2_B071A134B091A649_TypeDefinitionIndex = 56111;

class Class_2_B071A134B091A649 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::RPG::GameCore::TurnState MEPFOEEGBEA; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
	::System::UInt32 HCDEOKNIGKG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B071A134B091A649__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B071A134B091A649_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B071A134B091A649_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B071A134B091A649_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B071A134B091A649_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
