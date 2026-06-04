#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActiveShotCameraTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3B80DD0F68210F03_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x136B6F40)
#define CLASS_3_3B80DD0F68210F03_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x136B7120)
#define CLASS_3_3B80DD0F68210F03_ONSKIP_OFFSET UNITYSDK_OFFSET(0x136B6F50)
#define CLASS_3_3B80DD0F68210F03_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136B6A70)
#define CLASS_3_3B80DD0F68210F03__CTOR_OFFSET UNITYSDK_OFFSET(0x136B6A40)

inline static constexpr unsigned int Class_3_3B80DD0F68210F03_TypeDefinitionIndex = 54056;

class Class_3_3B80DD0F68210F03 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveShotCameraTemplate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveShotCameraTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveShotCameraTemplate*))((::PBYTE)hIl2Cpp + CLASS_3_3B80DD0F68210F03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B80DD0F68210F03_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B80DD0F68210F03_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B80DD0F68210F03_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B80DD0F68210F03_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}
};
