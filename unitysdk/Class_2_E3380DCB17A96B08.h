#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"

class Class_1_43B0AF86156D9901;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSkill; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E3380DCB17A96B08_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162A1C30)
#define CLASS_2_E3380DCB17A96B08_METHOD_2_169EC9D1EEF7B1CE_OFFSET UNITYSDK_OFFSET(0x162A2160)
#define CLASS_2_E3380DCB17A96B08_METHOD_2_71C65FBF3C554E6C_OFFSET UNITYSDK_OFFSET(0x162A2920)
#define CLASS_2_E3380DCB17A96B08_METHOD_2_7DE6CFC02F305A54_OFFSET UNITYSDK_OFFSET(0x162A2DF0)
#define CLASS_2_E3380DCB17A96B08_METHOD_2_F748C80BF81B510B_OFFSET UNITYSDK_OFFSET(0x162A2B50)
#define CLASS_2_E3380DCB17A96B08_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162A1C80)
#define CLASS_2_E3380DCB17A96B08_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162A2D40)
#define CLASS_2_E3380DCB17A96B08_TICK_OFFSET UNITYSDK_OFFSET(0x162A2D90)
#define CLASS_2_E3380DCB17A96B08__CTOR_OFFSET UNITYSDK_OFFSET(0x162A1BC0)

inline static constexpr unsigned int Class_2_E3380DCB17A96B08_TypeDefinitionIndex = 54610;

class Class_2_E3380DCB17A96B08 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_43B0AF86156D9901* AIJGGLCAEON; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::UseSkill* OFKGLJOAMLD; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DJBFCJCGGKD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSkill*))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_71C65FBF3C554E6C(::System::Int32 a1, ::RPG::GameCore::ControlSkillType a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_METHOD_2_71C65FBF3C554E6C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F748C80BF81B510B(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_METHOD_2_F748C80BF81B510B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_169EC9D1EEF7B1CE(::System::Int32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_METHOD_2_169EC9D1EEF7B1CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DE6CFC02F305A54(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_METHOD_2_7DE6CFC02F305A54_OFFSET))(this, a1, a2);
	}
};
