#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_341F4AA974750170;
class Class_1_8B83CE81FFD7409A;
class Class_2_78CEF5203DD4B7B4;
namespace RPG::Client { class BattleAlertParam; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }

#define CLASS_2_A8EECF54527683EC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x187548C0)
#define CLASS_2_A8EECF54527683EC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18754990)
#define CLASS_2_A8EECF54527683EC_METHOD_2_03F542022B7A94C2_OFFSET UNITYSDK_OFFSET(0x187544E0)
#define CLASS_2_A8EECF54527683EC_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x18753D60)
#define CLASS_2_A8EECF54527683EC_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x18754730)
#define CLASS_2_A8EECF54527683EC_METHOD_2_4CEB2F39F017CBC3_OFFSET UNITYSDK_OFFSET(0x187546E0)
#define CLASS_2_A8EECF54527683EC_METHOD_2_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x18754290)
#define CLASS_2_A8EECF54527683EC_METHOD_2_6FD97A9395ABD2C7_OFFSET UNITYSDK_OFFSET(0x18753FE0)
#define CLASS_2_A8EECF54527683EC_METHOD_2_7CF420530DDAEAB1_OFFSET UNITYSDK_OFFSET(0x18754630)
#define CLASS_2_A8EECF54527683EC_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x18753ED0)
#define CLASS_2_A8EECF54527683EC_METHOD_2_A0B4B1EA299EAC3C_OFFSET UNITYSDK_OFFSET(0x18753F90)
#define CLASS_2_A8EECF54527683EC_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18754400)
#define CLASS_2_A8EECF54527683EC_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x187547C0)
#define CLASS_2_A8EECF54527683EC__CTOR_OFFSET UNITYSDK_OFFSET(0x18754A30)
#define CLASS_2_A8EECF54527683EC__ONBIND_OFFSET UNITYSDK_OFFSET(0x18753F30)

inline static constexpr unsigned int Class_2_A8EECF54527683EC_TypeDefinitionIndex = 68621;

class Class_2_A8EECF54527683EC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_1_341F4AA974750170* Field_2_0; // 0x60
	::Class_2_78CEF5203DD4B7B4* Field_2_1; // 0x68
	::RPG::Client::PrefabLoadMeta* Field_2_2; // 0x70
	::RPG::GameCore::GameEntity* Field_2_3; // 0x78
	::RPG::GameCore::SkillType Field_2_4; // 0x80
	::System::Boolean Field_2_5; // 0x84
	::System::Boolean Field_2_6; // 0x85
	::System::Boolean Field_2_7; // 0x86

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A0B4B1EA299EAC3C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_A0B4B1EA299EAC3C_OFFSET))(this);
	}

	::System::Void Method_2_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_03F542022B7A94C2(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_03F542022B7A94C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7CF420530DDAEAB1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_7CF420530DDAEAB1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4CEB2F39F017CBC3(::RPG::Client::BattleAlertParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_4CEB2F39F017CBC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_6FD97A9395ABD2C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_6FD97A9395ABD2C7_OFFSET))(this);
	}

	::Class_1_8B83CE81FFD7409A* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_8B83CE81FFD7409A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EECF54527683EC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
