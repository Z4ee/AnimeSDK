#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_7E0DCA9D208905FE;
class Class_3_DA947530FE358084_Class_0_16E7307DCC43CB2C_6;
namespace RPG::GameCore { class ST_Side_Hipplen_Set_Neck_IK; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DA947530FE358084_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B567D0)
#define CLASS_3_DA947530FE358084_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8B56770)
#define CLASS_3_DA947530FE358084_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B563C0)
#define CLASS_3_DA947530FE358084_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8B566F0)
#define CLASS_3_DA947530FE358084_TICK_OFFSET UNITYSDK_OFFSET(0x8B565D0)
#define CLASS_3_DA947530FE358084__CTOR_OFFSET UNITYSDK_OFFSET(0x8B56270)
#define CLASS_3_DA947530FE358084___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B56860)
#define CLASS_3_DA947530FE358084___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8B56850)

inline static constexpr unsigned int Class_3_DA947530FE358084_TypeDefinitionIndex = 42315;

class Class_3_DA947530FE358084 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*>
{
public:
	::Class_3_DA947530FE358084_Class_0_16E7307DCC43CB2C_6* Field_3_1; // 0x28
	::Class_1_7E0DCA9D208905FE* Field_3_0; // 0x30

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

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
