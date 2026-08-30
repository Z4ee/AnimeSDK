#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEnvBuffDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E8F7E4B8272B89B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB47D900)
#define CLASS_2_E8F7E4B8272B89B0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB47DD00)
#define CLASS_2_E8F7E4B8272B89B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB47CF20)
#define CLASS_2_E8F7E4B8272B89B0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB47D8B0)
#define CLASS_2_E8F7E4B8272B89B0_TICK_OFFSET UNITYSDK_OFFSET(0xB47D9D0)
#define CLASS_2_E8F7E4B8272B89B0__CTOR_OFFSET UNITYSDK_OFFSET(0xB47CE90)

inline static constexpr unsigned int Class_2_E8F7E4B8272B89B0_TypeDefinitionIndex = 58787;

class Class_2_E8F7E4B8272B89B0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* CKMKMCAOLOG; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::ShowEnvBuffDialog* OFKGLJOAMLD; // 0x28
	::Il2CppArray<::RPG::GameCore::FixPoint>* NJIDIFMBIOC; // 0x30
	::RPG::Client::UIController* CPIIOIPAAKK; // 0x38
	::RPG::Client::TextID GGEAIODCDFK; // 0x40
	::System::Boolean PAIHBMIGDIO; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEnvBuffDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEnvBuffDialog*))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
