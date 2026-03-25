#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83D980B81C9B9AFA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }

#define CLASS_1_A59B7F9F9FB23BBE_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x8D8BDF0)
#define CLASS_1_A59B7F9F9FB23BBE_GET_ELATIONSKILLDATA_OFFSET UNITYSDK_OFFSET(0x8D8BE10)
#define CLASS_1_A59B7F9F9FB23BBE_METHOD_1_C101CD8C5CF89A5A_1_OFFSET UNITYSDK_OFFSET(0x8D8BD80)
#define CLASS_1_A59B7F9F9FB23BBE_METHOD_1_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x8D8BD10)
#define CLASS_1_A59B7F9F9FB23BBE_METHOD_1_E85F4628051F0851_OFFSET UNITYSDK_OFFSET(0x8D8BC20)
#define CLASS_1_A59B7F9F9FB23BBE_METHOD_1_EB2160077B609064_OFFSET UNITYSDK_OFFSET(0x8D8BE30)
#define CLASS_1_A59B7F9F9FB23BBE_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x8D8BE90)
#define CLASS_1_A59B7F9F9FB23BBE_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x8D8BE00)
#define CLASS_1_A59B7F9F9FB23BBE_SET_ELATIONSKILLDATA_OFFSET UNITYSDK_OFFSET(0x8D8BE20)
#define CLASS_1_A59B7F9F9FB23BBE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D8BD00)

inline static constexpr unsigned int Class_1_A59B7F9F9FB23BBE_TypeDefinitionIndex = 59087;

class Class_1_A59B7F9F9FB23BBE : public ::System::Object
{
public:
	::Class_1_83D980B81C9B9AFA* _ElationSkillData_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* _Caster_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE__CTOR_OFFSET))(this);
	}

	static ::Class_1_A59B7F9F9FB23BBE* Method_1_E85F4628051F0851(::RPG::GameCore::GameEntity* a1, ::Class_1_83D980B81C9B9AFA* a2)
	{
		return ((::Class_1_A59B7F9F9FB23BBE*(*)(::RPG::GameCore::GameEntity*, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_METHOD_1_E85F4628051F0851_OFFSET))(a1, a2);
	}

	::System::String* Method_1_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_METHOD_1_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::System::String* Method_1_C101CD8C5CF89A5A_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_METHOD_1_C101CD8C5CF89A5A_1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Caster()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_SET_CASTER_OFFSET))(this, value);
	}

	::Class_1_83D980B81C9B9AFA* get_ElationSkillData()
	{
		return ((::Class_1_83D980B81C9B9AFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_GET_ELATIONSKILLDATA_OFFSET))(this);
	}

	::System::Void set_ElationSkillData(::Class_1_83D980B81C9B9AFA* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_SET_ELATIONSKILLDATA_OFFSET))(this, value);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_EB2160077B609064()
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_METHOD_1_EB2160077B609064_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59B7F9F9FB23BBE_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}
};
