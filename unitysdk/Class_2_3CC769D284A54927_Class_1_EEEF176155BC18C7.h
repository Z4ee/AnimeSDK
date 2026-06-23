#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927_Class_1_4AC1ED4185BCAD50;
namespace MoleMole { class FishMoveParam; }

#define CLASS_2_3CC769D284A54927_CLASS_1_EEEF176155BC18C7_METHOD_1_C1E503D1801B3D3D_OFFSET UNITYSDK_OFFSET(0x17FDB220)
#define CLASS_2_3CC769D284A54927_CLASS_1_EEEF176155BC18C7__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDB210)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Class_1_EEEF176155BC18C7_TypeDefinitionIndex = 65371;

class Class_2_3CC769D284A54927_Class_1_EEEF176155BC18C7 : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig Field_1_5; // 0x10
	::MoleMole::FishMoveParam* Field_1_1; // 0x38
	::Class_2_3CC769D284A54927_Class_1_4AC1ED4185BCAD50* Field_1_6; // 0x40
	::MoleMole::FishCameraConfig Field_1_4; // 0x48
	::System::Single Field_1_2; // 0x70
	::System::Single Field_1_0; // 0x74
	::System::Single Field_1_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_EEEF176155BC18C7__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_C1E503D1801B3D3D()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_EEEF176155BC18C7_METHOD_1_C1E503D1801B3D3D_OFFSET))(this);
	}
};
