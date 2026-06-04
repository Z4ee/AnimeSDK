#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_3F4D673D3F90D12C;
namespace RPG::GameCore { class ST_Side_OverrideVision; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VisionBaseConfig; }

#define CLASS_3_7799B94350B5686C_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x141F3080)
#define CLASS_3_7799B94350B5686C_METHOD_3_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x141F30D0)
#define CLASS_3_7799B94350B5686C_METHOD_3_DC2BF54A2A3B31B5_OFFSET UNITYSDK_OFFSET(0x141F3520)
#define CLASS_3_7799B94350B5686C_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x141F3480)
#define CLASS_3_7799B94350B5686C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141F2F60)
#define CLASS_3_7799B94350B5686C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x141F3610)
#define CLASS_3_7799B94350B5686C__CTOR_OFFSET UNITYSDK_OFFSET(0x141F2F30)

inline static constexpr unsigned int Class_3_7799B94350B5686C_TypeDefinitionIndex = 48852;

class Class_3_7799B94350B5686C : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_OverrideVision*>
{
public:
	::Class_2_3F4D673D3F90D12C* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_OverrideVision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_OverrideVision*))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C_METHOD_3_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_DC2BF54A2A3B31B5(::RPG::GameCore::VisionBaseConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionBaseConfig*))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C_METHOD_3_DC2BF54A2A3B31B5_OFFSET))(this, a1);
	}

	::System::Void Method_3_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C_METHOD_3_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C_ONTASKRESET_OFFSET))(this);
	}
};
