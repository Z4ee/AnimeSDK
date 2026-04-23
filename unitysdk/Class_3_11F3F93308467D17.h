#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ConsumeActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_11F3F93308467D17_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9527140)
#define CLASS_3_11F3F93308467D17__CTOR_OFFSET UNITYSDK_OFFSET(0x9527110)

inline static constexpr unsigned int Class_3_11F3F93308467D17_TypeDefinitionIndex = 50557;

class Class_3_11F3F93308467D17 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConsumeActionCountDown*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeActionCountDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeActionCountDown*))((::PBYTE)hIl2Cpp + CLASS_3_11F3F93308467D17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11F3F93308467D17_ONTASKBEGIN_OFFSET))(this);
	}
};
