#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_RemoveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_72BFB09D7A0EC3EC_METHOD_3_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x153FDD40)
#define CLASS_3_72BFB09D7A0EC3EC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153FDCD0)
#define CLASS_3_72BFB09D7A0EC3EC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153FDF30)
#define CLASS_3_72BFB09D7A0EC3EC__CTOR_OFFSET UNITYSDK_OFFSET(0x153FDCA0)

inline static constexpr unsigned int Class_3_72BFB09D7A0EC3EC_TypeDefinitionIndex = 52531;

class Class_3_72BFB09D7A0EC3EC : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_RemoveEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RemoveEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RemoveEffect*))((::PBYTE)hIl2Cpp + CLASS_3_72BFB09D7A0EC3EC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72BFB09D7A0EC3EC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72BFB09D7A0EC3EC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72BFB09D7A0EC3EC_METHOD_3_21886A8411E71157_OFFSET))(this);
	}
};
