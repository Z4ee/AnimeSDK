#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_7EB7282BD1E12885_METHOD_2_28DE09C5FA2F6A3A_OFFSET UNITYSDK_OFFSET(0xA837870)
#define CLASS_2_7EB7282BD1E12885_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA837BF0)
#define CLASS_2_7EB7282BD1E12885_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xA837B10)
#define CLASS_2_7EB7282BD1E12885_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0xA837860)
#define CLASS_2_7EB7282BD1E12885__CTOR_OFFSET UNITYSDK_OFFSET(0xA837850)

inline static constexpr unsigned int Class_2_7EB7282BD1E12885_TypeDefinitionIndex = 69908;

class Class_2_7EB7282BD1E12885 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Boolean Field_2_0; // 0x28

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7EB7282BD1E12885__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB7282BD1E12885_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_28DE09C5FA2F6A3A(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB7282BD1E12885_METHOD_2_28DE09C5FA2F6A3A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB7282BD1E12885_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB7282BD1E12885_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
