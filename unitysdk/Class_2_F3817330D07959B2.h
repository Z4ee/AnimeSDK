#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddFinishMissionData_SelectConsumeItem; }
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_F3817330D07959B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3ABE80)
#define CLASS_2_F3817330D07959B2_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA3ACA00)
#define CLASS_2_F3817330D07959B2_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA3AC1C0)
#define CLASS_2_F3817330D07959B2_METHOD_2_3D93676A6C74538B_OFFSET UNITYSDK_OFFSET(0xA3AC780)
#define CLASS_2_F3817330D07959B2_METHOD_2_55A0BC7D9C6DC377_OFFSET UNITYSDK_OFFSET(0xA3AC980)
#define CLASS_2_F3817330D07959B2_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0xA3ACCB0)
#define CLASS_2_F3817330D07959B2_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xA3ACD60)
#define CLASS_2_F3817330D07959B2_METHOD_2_A10DADB5B6A4C8AC_OFFSET UNITYSDK_OFFSET(0xA3ACAF0)
#define CLASS_2_F3817330D07959B2_METHOD_2_AD52E5051C13C465_OFFSET UNITYSDK_OFFSET(0xA3AC4E0)
#define CLASS_2_F3817330D07959B2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA3ACE10)
#define CLASS_2_F3817330D07959B2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3AC010)
#define CLASS_2_F3817330D07959B2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA3AC260)
#define CLASS_2_F3817330D07959B2_TICK_OFFSET UNITYSDK_OFFSET(0xA3AC3A0)
#define CLASS_2_F3817330D07959B2__CTOR_OFFSET UNITYSDK_OFFSET(0xA3ABD90)

inline static constexpr unsigned int Class_2_F3817330D07959B2_TypeDefinitionIndex = 48922;

class Class_2_F3817330D07959B2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x18
	::RPG::GameCore::MissionItemConfigList* Field_2_2; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x38
	::RPG::GameCore::TaskContext* Field_2_6; // 0x40
	::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* Field_2_7; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD52E5051C13C465(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_AD52E5051C13C465_OFFSET))(this, a1);
	}

	::System::Void Method_2_A10DADB5B6A4C8AC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_A10DADB5B6A4C8AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_55A0BC7D9C6DC377(::RPG::GameCore::SelectMissionItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_55A0BC7D9C6DC377_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Boolean Method_2_3D93676A6C74538B(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_3D93676A6C74538B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3817330D07959B2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
