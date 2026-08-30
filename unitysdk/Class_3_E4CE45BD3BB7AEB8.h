#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E4CE45BD3BB7AEB8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CBD900)
#define CLASS_3_E4CE45BD3BB7AEB8__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBD820)

inline static constexpr unsigned int Class_3_E4CE45BD3BB7AEB8_TypeDefinitionIndex = 55009;

class Class_3_E4CE45BD3BB7AEB8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByActionCountDown*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByActionCountDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByActionCountDown*))((::PBYTE)hIl2Cpp + CLASS_3_E4CE45BD3BB7AEB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4CE45BD3BB7AEB8_ONTASKBEGIN_OFFSET))(this);
	}
};
