#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1443D71C2B538871;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSetupTwoStateUITrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0BEA316B1FD045B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8A4E30)
#define CLASS_3_0BEA316B1FD045B6_METHOD_3_E8C2225B939C1E40_1_OFFSET UNITYSDK_OFFSET(0xB8A4C30)
#define CLASS_3_0BEA316B1FD045B6_METHOD_3_E8C2225B939C1E40_OFFSET UNITYSDK_OFFSET(0xB8A4A30)
#define CLASS_3_0BEA316B1FD045B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8A4580)
#define CLASS_3_0BEA316B1FD045B6__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A4550)

inline static constexpr unsigned int Class_3_0BEA316B1FD045B6_TypeDefinitionIndex = 58504;

class Class_3_0BEA316B1FD045B6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupTwoStateUITrigger*>
{
public:
	::Class_3_1443D71C2B538871* GALAHGAJODG; // 0x28
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x30
	::RPG::GameCore::PropComponent* PEDKDCGPHAM; // 0x38
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

	::RPG::Client::TextID Method_3_E8C2225B939C1E40()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BEA316B1FD045B6_METHOD_3_E8C2225B939C1E40_OFFSET))(this);
	}

	::RPG::Client::TextID Method_3_E8C2225B939C1E40_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BEA316B1FD045B6_METHOD_3_E8C2225B939C1E40_1_OFFSET))(this);
	}
};
