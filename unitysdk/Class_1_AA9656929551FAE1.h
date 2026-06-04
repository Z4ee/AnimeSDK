#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_487;
class Class_1_43BD383C98B4C0C5_118;
namespace RPG::GameCore { class AIStepperDecisionGroupConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_AA9656929551FAE1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA01E80)
#define CLASS_1_AA9656929551FAE1_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xAA02290)
#define CLASS_1_AA9656929551FAE1_METHOD_1_3FB7F35DDD567C82_OFFSET UNITYSDK_OFFSET(0xAA01C10)
#define CLASS_1_AA9656929551FAE1_METHOD_1_461FC188460DEE92_OFFSET UNITYSDK_OFFSET(0xAA01FE0)
#define CLASS_1_AA9656929551FAE1_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0xAA02210)
#define CLASS_1_AA9656929551FAE1_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xAA023E0)
#define CLASS_1_AA9656929551FAE1_METHOD_1_B34A6620985286D8_OFFSET UNITYSDK_OFFSET(0xAA02610)
#define CLASS_1_AA9656929551FAE1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAA01BC0)
#define CLASS_1_AA9656929551FAE1_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xAA025B0)
#define CLASS_1_AA9656929551FAE1_METHOD_1_F54DE4640CE99063_OFFSET UNITYSDK_OFFSET(0xAA01E20)
#define CLASS_1_AA9656929551FAE1_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0xAA024C0)
#define CLASS_1_AA9656929551FAE1__CTOR_OFFSET UNITYSDK_OFFSET(0xAA01A10)

inline static constexpr unsigned int Class_1_AA9656929551FAE1_TypeDefinitionIndex = 50832;

class Class_1_AA9656929551FAE1 : public ::System::Object
{
public:
	::RPG::GameCore::AIStepperDecisionGroupConfig* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_487* Field_1_1; // 0x18
	::Class_1_43BD383C98B4C0C5_118* Field_1_2; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_487*>* Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 Field_1_6; // 0x38

	::System::Void _ctor(::RPG::GameCore::AIStepperDecisionGroupConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIStepperDecisionGroupConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_3FB7F35DDD567C82()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_3FB7F35DDD567C82_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_DISPOSE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_487* Method_1_461FC188460DEE92(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_461FC188460DEE92_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F54DE4640CE99063(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_F54DE4640CE99063_OFFSET))(this, a1);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_1_B34A6620985286D8()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA9656929551FAE1_METHOD_1_B34A6620985286D8_OFFSET))(this);
	}
};
