#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1EA40FB8AEC6742C_Class_1_6469DDA2D7BA7DE8;
namespace RPG::Client { class RoadRashGameModifier_AbilityCooldown; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_1EA40FB8AEC6742C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E15670)
#define CLASS_3_1EA40FB8AEC6742C_METHOD_3_01DFA41099112099_OFFSET UNITYSDK_OFFSET(0x17E156E0)
#define CLASS_3_1EA40FB8AEC6742C_METHOD_3_57D799D0D210B521_OFFSET UNITYSDK_OFFSET(0x17E15020)
#define CLASS_3_1EA40FB8AEC6742C_METHOD_3_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x17E15380)
#define CLASS_3_1EA40FB8AEC6742C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E14DE0)
#define CLASS_3_1EA40FB8AEC6742C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17E15330)
#define CLASS_3_1EA40FB8AEC6742C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E15870)
#define CLASS_3_1EA40FB8AEC6742C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E14DB0)

inline static constexpr unsigned int Class_3_1EA40FB8AEC6742C_TypeDefinitionIndex = 58561;

class Class_3_1EA40FB8AEC6742C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameModifier_AbilityCooldown*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*, ::Class_3_1EA40FB8AEC6742C_Class_1_6469DDA2D7BA7DE8*>** StaticGet_FEDCFHONDGL()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*, ::Class_3_1EA40FB8AEC6742C_Class_1_6469DDA2D7BA7DE8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1EA40FB8AEC6742C_TypeDefinitionIndex)->GetStaticField(0x62B50);
	}
	// static const ::System::Single JICIBKFAMEG; // 0x0
	::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown* NIOILPJCNCB; // 0x28
	::System::Boolean AMBLEJEBOIA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_AbilityCooldown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_AbilityCooldown*))((::PBYTE)hIl2Cpp + CLASS_3_1EA40FB8AEC6742C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1EA40FB8AEC6742C__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EA40FB8AEC6742C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EA40FB8AEC6742C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EA40FB8AEC6742C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_57D799D0D210B521(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1EA40FB8AEC6742C_METHOD_3_57D799D0D210B521_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EA40FB8AEC6742C_METHOD_3_9F8F6511E8EF1235_OFFSET))(this);
	}

	static ::System::Void Method_3_01DFA41099112099(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown* a1, ::Class_3_1EA40FB8AEC6742C_Class_1_6469DDA2D7BA7DE8* a2)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*, ::Class_3_1EA40FB8AEC6742C_Class_1_6469DDA2D7BA7DE8*))((::PBYTE)hIl2Cpp + CLASS_3_1EA40FB8AEC6742C_METHOD_3_01DFA41099112099_OFFSET))(a1, a2);
	}
};
