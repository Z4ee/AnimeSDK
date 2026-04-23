#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMazeBuffBaseTask_1.h"

namespace RPG::GameCore { class AddClientMazeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_2604D2283488A98B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12840710)
#define CLASS_4_2604D2283488A98B__CTOR_OFFSET UNITYSDK_OFFSET(0x128406C0)
#define CLASS_4_2604D2283488A98B___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12840790)

inline static constexpr unsigned int Class_4_2604D2283488A98B_TypeDefinitionIndex = 53351;

class Class_4_2604D2283488A98B : public ::RPG::GameCore::AddMazeBuffBaseTask_1<::RPG::GameCore::AddClientMazeBuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddClientMazeBuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddClientMazeBuff*))((::PBYTE)hIl2Cpp + CLASS_4_2604D2283488A98B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2604D2283488A98B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2604D2283488A98B___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
