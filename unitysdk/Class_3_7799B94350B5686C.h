#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_3F4D673D3F90D12C;
namespace RPG::GameCore { class ST_Side_OverrideVision; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VisionBaseConfig; }

#define CLASS_3_7799B94350B5686C_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x164D15D0)
#define CLASS_3_7799B94350B5686C_METHOD_3_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x164D1620)
#define CLASS_3_7799B94350B5686C_METHOD_3_DC2BF54A2A3B31B5_OFFSET UNITYSDK_OFFSET(0x164D1AE0)
#define CLASS_3_7799B94350B5686C_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x164D1A40)
#define CLASS_3_7799B94350B5686C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D1440)
#define CLASS_3_7799B94350B5686C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164D1BD0)
#define CLASS_3_7799B94350B5686C__CTOR_OFFSET UNITYSDK_OFFSET(0x164D1410)

inline static constexpr unsigned int Class_3_7799B94350B5686C_TypeDefinitionIndex = 52243;

class Class_3_7799B94350B5686C : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_OverrideVision*>
{
public:
	::Class_2_3F4D673D3F90D12C* FAOEOJJKLLB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_OverrideVision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_OverrideVision*))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7799B94350B5686C_METHOD_3_9765352E01408D38_OFFSET))(this);
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
