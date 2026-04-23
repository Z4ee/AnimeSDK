#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AddFinishMissionData_SelectConsumeItem; }
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_4D5B75824671664C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AD54F0)
#define CLASS_2_4D5B75824671664C_METHOD_2_06758B572F87D831_OFFSET UNITYSDK_OFFSET(0x12AD5D80)
#define CLASS_2_4D5B75824671664C_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12AD6000)
#define CLASS_2_4D5B75824671664C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12AD57F0)
#define CLASS_2_4D5B75824671664C_METHOD_2_697F9204BE674FFE_OFFSET UNITYSDK_OFFSET(0x12AD5F80)
#define CLASS_2_4D5B75824671664C_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x12AD6280)
#define CLASS_2_4D5B75824671664C_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x12AD6330)
#define CLASS_2_4D5B75824671664C_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x12AD60F0)
#define CLASS_2_4D5B75824671664C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AD63E0)
#define CLASS_2_4D5B75824671664C_METHOD_2_E4DDC118595D11DF_OFFSET UNITYSDK_OFFSET(0x12AD5B20)
#define CLASS_2_4D5B75824671664C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AD5650)
#define CLASS_2_4D5B75824671664C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AD58A0)
#define CLASS_2_4D5B75824671664C_TICK_OFFSET UNITYSDK_OFFSET(0x12AD59E0)
#define CLASS_2_4D5B75824671664C__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD5400)

inline static constexpr unsigned int Class_2_4D5B75824671664C_TypeDefinitionIndex = 48296;

class Class_2_4D5B75824671664C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_7; // 0x0
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x20
	::RPG::GameCore::MissionItemConfigList* Field_2_2; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* Field_2_0; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4DDC118595D11DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_E4DDC118595D11DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_B386444429A36A77_OFFSET))(this, a1);
	}

	::System::Void Method_2_697F9204BE674FFE(::RPG::GameCore::SelectMissionItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_697F9204BE674FFE_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Boolean Method_2_06758B572F87D831(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_06758B572F87D831_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5B75824671664C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
