#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1443D71C2B538871;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSetupTwoStateUITrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0BEA316B1FD045B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB719330)
#define CLASS_3_0BEA316B1FD045B6_METHOD_3_87BD14BAFA89EB07_1_OFFSET UNITYSDK_OFFSET(0xB719120)
#define CLASS_3_0BEA316B1FD045B6_METHOD_3_87BD14BAFA89EB07_OFFSET UNITYSDK_OFFSET(0xB718F10)
#define CLASS_3_0BEA316B1FD045B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB718A60)
#define CLASS_3_0BEA316B1FD045B6__CTOR_OFFSET UNITYSDK_OFFSET(0xB718A30)

inline static constexpr unsigned int Class_3_0BEA316B1FD045B6_TypeDefinitionIndex = 58355;

class Class_3_0BEA316B1FD045B6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupTwoStateUITrigger*>
{
public:
	::RPG::GameCore::PropComponent* PEDKDCGPHAM; // 0x28
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x30
	::Class_3_1443D71C2B538871* GALAHGAJODG; // 0x38
	::System::Boolean OMOOBJJFMFH; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupTwoStateUITrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupTwoStateUITrigger*))((::PBYTE)hIl2Cpp + CLASS_3_0BEA316B1FD045B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BEA316B1FD045B6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BEA316B1FD045B6_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::TextID Method_3_87BD14BAFA89EB07()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BEA316B1FD045B6_METHOD_3_87BD14BAFA89EB07_OFFSET))(this);
	}

	::RPG::Client::TextID Method_3_87BD14BAFA89EB07_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BEA316B1FD045B6_METHOD_3_87BD14BAFA89EB07_1_OFFSET))(this);
	}
};
