#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_349FFE7FFEC1E3D1;
class Class_3_DA947530FE358084_Class_0_16E7307DCC43CB2C_9;
namespace RPG::GameCore { class ST_Side_Hipplen_Set_Neck_IK; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DA947530FE358084_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAD03E0)
#define CLASS_3_DA947530FE358084_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBAD0380)
#define CLASS_3_DA947530FE358084_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBACFF30)
#define CLASS_3_DA947530FE358084_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAD0300)
#define CLASS_3_DA947530FE358084_TICK_OFFSET UNITYSDK_OFFSET(0xBAD0190)
#define CLASS_3_DA947530FE358084__CTOR_OFFSET UNITYSDK_OFFSET(0xBACFDE0)

inline static constexpr unsigned int Class_3_DA947530FE358084_TypeDefinitionIndex = 52573;

class Class_3_DA947530FE358084 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*>
{
public:
	::Class_3_DA947530FE358084_Class_0_16E7307DCC43CB2C_9* CBECKJGOCPH; // 0x28
	::Class_1_349FFE7FFEC1E3D1* JPMDHLLOGBD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}
};
