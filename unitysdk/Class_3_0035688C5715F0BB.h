#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

namespace RPG::GameCore { class ST_RtMain_TransmitToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0035688C5715F0BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA616670)
#define CLASS_3_0035688C5715F0BB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA616930)
#define CLASS_3_0035688C5715F0BB_TICK_OFFSET UNITYSDK_OFFSET(0xA6168D0)
#define CLASS_3_0035688C5715F0BB__CTOR_OFFSET UNITYSDK_OFFSET(0xA616640)
#define CLASS_3_0035688C5715F0BB___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA616980)

inline static constexpr unsigned int Class_3_0035688C5715F0BB_TypeDefinitionIndex = 50594;

class Class_3_0035688C5715F0BB : public ::RPG::GameCore::ST_RtTask_1<::RPG::GameCore::ST_RtMain_TransmitToTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtMain_TransmitToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtMain_TransmitToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_0035688C5715F0BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0035688C5715F0BB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0035688C5715F0BB_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0035688C5715F0BB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0035688C5715F0BB___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
