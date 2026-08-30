#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class SO_SendMessage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9235484105D5E882_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153A6130)
#define CLASS_3_9235484105D5E882_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153A61A0)
#define CLASS_3_9235484105D5E882__CTOR_OFFSET UNITYSDK_OFFSET(0x153A60E0)

inline static constexpr unsigned int Class_3_9235484105D5E882_TypeDefinitionIndex = 52410;

class Class_3_9235484105D5E882 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_SendMessage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_SendMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_SendMessage*))((::PBYTE)hIl2Cpp + CLASS_3_9235484105D5E882__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9235484105D5E882_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9235484105D5E882_ONTASKRESET_OFFSET))(this);
	}
};
