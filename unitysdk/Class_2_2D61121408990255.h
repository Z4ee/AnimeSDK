#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A59080F652920B7A;
namespace RPG::Client { class RoadRashGameModifier_Decelerate; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2D61121408990255_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FAFC80)
#define CLASS_2_2D61121408990255_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x18FB0500)
#define CLASS_2_2D61121408990255_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x18FAFCD0)
#define CLASS_2_2D61121408990255_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x18FB01F0)
#define CLASS_2_2D61121408990255_METHOD_2_57E9EA809B95083F_OFFSET UNITYSDK_OFFSET(0x18FB0540)
#define CLASS_2_2D61121408990255_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x18FAFF30)
#define CLASS_2_2D61121408990255_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x18FB0330)
#define CLASS_2_2D61121408990255_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FAFE90)
#define CLASS_2_2D61121408990255_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FB03E0)
#define CLASS_2_2D61121408990255_TICK_OFFSET UNITYSDK_OFFSET(0x18FB0440)
#define CLASS_2_2D61121408990255__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAFC70)

inline static constexpr unsigned int Class_2_2D61121408990255_TypeDefinitionIndex = 58567;

class Class_2_2D61121408990255 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* FMMKACNPLLK; // 0x20
	::RPG::Client::RoadRashGameModifier_Decelerate* OFKGLJOAMLD; // 0x28
	::System::Single BPAIDCADMDO; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_Decelerate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_Decelerate*))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_GETCONFIG_OFFSET))(this);
	}

	::Class_2_A59080F652920B7A* Method_2_57E9EA809B95083F()
	{
		return ((::Class_2_A59080F652920B7A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_METHOD_2_57E9EA809B95083F_OFFSET))(this);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D61121408990255_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}
};
