#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingStageWaveType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingStageWaveRow; }

#define CLASS_1_8CF94E0F14A91ED3_2_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x13643260)
#define CLASS_1_8CF94E0F14A91ED3_2_GET_WAVEID_OFFSET UNITYSDK_OFFSET(0x13643280)
#define CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_1686D292B5BE993F_OFFSET UNITYSDK_OFFSET(0x13643390)
#define CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_34FF058A289273E0_OFFSET UNITYSDK_OFFSET(0x136432A0)
#define CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_6683C3A790489A0F_OFFSET UNITYSDK_OFFSET(0x13643310)
#define CLASS_1_8CF94E0F14A91ED3_2_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x13643270)
#define CLASS_1_8CF94E0F14A91ED3_2_SET_WAVEID_OFFSET UNITYSDK_OFFSET(0x13643290)
#define CLASS_1_8CF94E0F14A91ED3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13643250)

inline static constexpr unsigned int Class_1_8CF94E0F14A91ED3_2_TypeDefinitionIndex = 57461;

class Class_1_8CF94E0F14A91ED3_2 : public ::System::Object
{
public:
	::System::UInt32 _WaveID_k__BackingField; // 0x10
	::System::UInt32 _StageID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_StageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_GET_STAGEID_OFFSET))(this);
	}

	::System::Void set_StageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_SET_STAGEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_WaveID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_GET_WAVEID_OFFSET))(this);
	}

	::System::Void set_WaveID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_SET_WAVEID_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingStageWaveRow* Method_1_34FF058A289273E0()
	{
		return ((::RPG::GameCore::ChenLingStageWaveRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_34FF058A289273E0_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingStageWaveType Method_1_6683C3A790489A0F()
	{
		return ((::RPG::GameCore::ChenLingStageWaveType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_6683C3A790489A0F_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_1686D292B5BE993F()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_1686D292B5BE993F_OFFSET))(this);
	}
};
