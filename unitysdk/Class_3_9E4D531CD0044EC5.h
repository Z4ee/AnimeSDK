#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class SetFilterVolumeEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E4D531CD0044EC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AD9960)
#define CLASS_3_9E4D531CD0044EC5_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10AD98A0)
#define CLASS_3_9E4D531CD0044EC5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AD9730)
#define CLASS_3_9E4D531CD0044EC5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10AD9850)
#define CLASS_3_9E4D531CD0044EC5__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD9700)
#define CLASS_3_9E4D531CD0044EC5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AD9A00)
#define CLASS_3_9E4D531CD0044EC5___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10AD99B0)

inline static constexpr unsigned int Class_3_9E4D531CD0044EC5_TypeDefinitionIndex = 47238;

class Class_3_9E4D531CD0044EC5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFilterVolumeEnable*>
{
public:
	::RPG::Client::Stage* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFilterVolumeEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFilterVolumeEnable*))((::PBYTE)hIl2Cpp + CLASS_3_9E4D531CD0044EC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E4D531CD0044EC5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E4D531CD0044EC5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E4D531CD0044EC5_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E4D531CD0044EC5_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E4D531CD0044EC5___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E4D531CD0044EC5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
