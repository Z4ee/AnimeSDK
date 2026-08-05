#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927_Class_1_0DFB2C0A6BD54BBA_1;
namespace MoleMole { class FishMoveParam; }

#define CLASS_2_3CC769D284A54927_CLASS_1_EEEF176155BC18C7_1_METHOD_1_C1E503D1801B3D3D_OFFSET UNITYSDK_OFFSET(0x15427BB0)
#define CLASS_2_3CC769D284A54927_CLASS_1_EEEF176155BC18C7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15427BA0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Class_1_EEEF176155BC18C7_1_TypeDefinitionIndex = 76693;

class Class_2_3CC769D284A54927_Class_1_EEEF176155BC18C7_1 : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig Field_1_4; // 0x10
	::Class_2_3CC769D284A54927_Class_1_0DFB2C0A6BD54BBA_1* Field_1_11; // 0x38
	::MoleMole::FishCameraConfig Field_1_5; // 0x40
	::MoleMole::FishMoveParam* Field_1_0; // 0x68
	::System::Single Field_1_1; // 0x70
	::System::Single Field_1_6; // 0x74
	::System::Single Field_1_7; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_EEEF176155BC18C7_1__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_C1E503D1801B3D3D()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_EEEF176155BC18C7_1_METHOD_1_C1E503D1801B3D3D_OFFSET))(this);
	}
};
