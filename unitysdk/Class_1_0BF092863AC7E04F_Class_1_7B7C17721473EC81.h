#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_0BF092863AC7E04F_CLASS_1_7B7C17721473EC81_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x163534E0)
#define CLASS_1_0BF092863AC7E04F_CLASS_1_7B7C17721473EC81__CTOR_OFFSET UNITYSDK_OFFSET(0x163534D0)

inline static constexpr unsigned int Class_1_0BF092863AC7E04F_Class_1_7B7C17721473EC81_TypeDefinitionIndex = 80073;

class Class_1_0BF092863AC7E04F_Class_1_7B7C17721473EC81 : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x18
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_CLASS_1_7B7C17721473EC81__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_CLASS_1_7B7C17721473EC81_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}
};
