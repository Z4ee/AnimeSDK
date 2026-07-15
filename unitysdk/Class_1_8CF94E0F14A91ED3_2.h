#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingStageWaveType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingStageWaveRow; }

#define CLASS_1_8CF94E0F14A91ED3_2_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x17F08610)
#define CLASS_1_8CF94E0F14A91ED3_2_GET_WAVEID_OFFSET UNITYSDK_OFFSET(0x17F08630)
#define CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_0413FFB2E96D1B7C_OFFSET UNITYSDK_OFFSET(0x17F08760)
#define CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_04A75B4514D3808C_OFFSET UNITYSDK_OFFSET(0x17F086C0)
#define CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_34FF058A289273E0_OFFSET UNITYSDK_OFFSET(0x17F08650)
#define CLASS_1_8CF94E0F14A91ED3_2_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x17F08620)
#define CLASS_1_8CF94E0F14A91ED3_2_SET_WAVEID_OFFSET UNITYSDK_OFFSET(0x17F08640)
#define CLASS_1_8CF94E0F14A91ED3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17F08600)

inline static constexpr unsigned int Class_1_8CF94E0F14A91ED3_2_TypeDefinitionIndex = 58723;

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

	::RPG::GameCore::ChenLingStageWaveType Method_1_04A75B4514D3808C()
	{
		return ((::RPG::GameCore::ChenLingStageWaveType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_04A75B4514D3808C_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_0413FFB2E96D1B7C()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_2_METHOD_1_0413FFB2E96D1B7C_OFFSET))(this);
	}
};
