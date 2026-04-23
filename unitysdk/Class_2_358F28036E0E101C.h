#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItem; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_358F28036E0E101C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124A8E60)
#define CLASS_2_358F28036E0E101C_METHOD_2_06758B572F87D831_OFFSET UNITYSDK_OFFSET(0x124A9990)
#define CLASS_2_358F28036E0E101C_METHOD_2_09A7FCE6953F2B3E_OFFSET UNITYSDK_OFFSET(0x124A9CE0)
#define CLASS_2_358F28036E0E101C_METHOD_2_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x124A9180)
#define CLASS_2_358F28036E0E101C_METHOD_2_14245B339C99E5FA_OFFSET UNITYSDK_OFFSET(0x124A95E0)
#define CLASS_2_358F28036E0E101C_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x124A9C10)
#define CLASS_2_358F28036E0E101C_METHOD_2_697F9204BE674FFE_OFFSET UNITYSDK_OFFSET(0x124A9B90)
#define CLASS_2_358F28036E0E101C_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x124AA2D0)
#define CLASS_2_358F28036E0E101C_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x124AA090)
#define CLASS_2_358F28036E0E101C_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x124AA380)
#define CLASS_2_358F28036E0E101C_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x124AA140)
#define CLASS_2_358F28036E0E101C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124A8FE0)
#define CLASS_2_358F28036E0E101C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124A9360)
#define CLASS_2_358F28036E0E101C_TICK_OFFSET UNITYSDK_OFFSET(0x124A94A0)
#define CLASS_2_358F28036E0E101C__CTOR_OFFSET UNITYSDK_OFFSET(0x124A8D00)

inline static constexpr unsigned int Class_2_358F28036E0E101C_TypeDefinitionIndex = 49066;

class Class_2_358F28036E0E101C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_7; // 0x0
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x18
	::RPG::GameCore::MissionItemConfigList* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x38
	::RPG::GameCore::SelectMissionItem* Field_2_0; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectMissionItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectMissionItem*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_14245B339C99E5FA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_14245B339C99E5FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_09A7FCE6953F2B3E(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_09A7FCE6953F2B3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_697F9204BE674FFE(::RPG::GameCore::SelectMissionItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_697F9204BE674FFE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_B386444429A36A77_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Void Method_2_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Boolean Method_2_06758B572F87D831(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_06758B572F87D831_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}
};
