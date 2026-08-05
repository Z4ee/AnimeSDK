#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9EAEB75332026AC.h"
#include "unitysdk/Enum_3_4E7B8E0B6291DEBC.h"

namespace MoleMole::Project::Config { class ControlPointData; }
namespace MoleMole::Project::Config { class CurvePointData; }
namespace MoleMole::Project::Config { class CurvySplineData; }
namespace MoleMole::Project::Config { class DetectionPointData; }
namespace MoleMole::Project::Config { class LevelData; }
namespace MoleMole::Project::Config { class NoDetectionZoneData; }
namespace MoleMole::Project::Config { class TargetPointData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5150DA9365F978D4_METHOD_3_1913E238E72DC26E_1_OFFSET UNITYSDK_OFFSET(0x19D21170)
#define CLASS_3_5150DA9365F978D4_METHOD_3_1913E238E72DC26E_OFFSET UNITYSDK_OFFSET(0x19D20AC0)
#define CLASS_3_5150DA9365F978D4_METHOD_3_3FE1A95DC05EDC68_OFFSET UNITYSDK_OFFSET(0x19D20090)
#define CLASS_3_5150DA9365F978D4_METHOD_3_4E45834556360335_OFFSET UNITYSDK_OFFSET(0x19D22C70)
#define CLASS_3_5150DA9365F978D4_METHOD_3_555F1ECF3305CD1B_1_OFFSET UNITYSDK_OFFSET(0x19D22650)
#define CLASS_3_5150DA9365F978D4_METHOD_3_555F1ECF3305CD1B_OFFSET UNITYSDK_OFFSET(0x19D22100)
#define CLASS_3_5150DA9365F978D4_METHOD_3_87209452B4E86410_1_OFFSET UNITYSDK_OFFSET(0x19D22020)
#define CLASS_3_5150DA9365F978D4_METHOD_3_87209452B4E86410_2_OFFSET UNITYSDK_OFFSET(0x19D22B90)
#define CLASS_3_5150DA9365F978D4_METHOD_3_87209452B4E86410_3_OFFSET UNITYSDK_OFFSET(0x19D236F0)
#define CLASS_3_5150DA9365F978D4_METHOD_3_87209452B4E86410_OFFSET UNITYSDK_OFFSET(0x19D1F9F0)
#define CLASS_3_5150DA9365F978D4_METHOD_3_A8A4537FF4C50CEC_OFFSET UNITYSDK_OFFSET(0x19D23950)
#define CLASS_3_5150DA9365F978D4_METHOD_3_B12B136156DD1036_OFFSET UNITYSDK_OFFSET(0x19D237D0)
#define CLASS_3_5150DA9365F978D4_METHOD_3_B2DE2E5527FD4D56_OFFSET UNITYSDK_OFFSET(0x19D22D50)
#define CLASS_3_5150DA9365F978D4_METHOD_3_B8AEE4298B8CE38E_OFFSET UNITYSDK_OFFSET(0x19D21820)
#define CLASS_3_5150DA9365F978D4_METHOD_3_FCA9A927A4C8A0C0_OFFSET UNITYSDK_OFFSET(0x19D1FAD0)
#define CLASS_3_5150DA9365F978D4__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1F9E0)

inline static constexpr unsigned int Class_3_5150DA9365F978D4_TypeDefinitionIndex = 12862;

class Class_3_5150DA9365F978D4 : public ::Class_2_C9EAEB75332026AC
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>* Field_3_13; // 0x20
	::MoleMole::Project::Config::DetectionPointData* Field_3_14; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>* Field_3_15; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* Field_3_9; // 0x38
	::MoleMole::Project::Config::CurvySplineData* Field_3_12; // 0x40
	::System::String* Field_3_6; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* Field_3_10; // 0x50
	::MoleMole::Project::Config::CurvySplineData* Field_3_19; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>* Field_3_8; // 0x60
	::System::Int32 Field_3_11; // 0x68
	::Enum_3_4E7B8E0B6291DEBC Field_3_4; // 0x6C
	::System::Byte Field_3_1; // 0x70
	::System::Byte Field_3_2; // 0x71
	::System::Int32 Field_3_5; // 0x74
	::System::Int32 Field_3_7; // 0x78
	::System::Int32 Field_3_0; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_87209452B4E86410_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>* Method_3_FCA9A927A4C8A0C0()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_FCA9A927A4C8A0C0_OFFSET))(this);
	}

	::MoleMole::Project::Config::DetectionPointData* Method_3_3FE1A95DC05EDC68()
	{
		return ((::MoleMole::Project::Config::DetectionPointData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_3FE1A95DC05EDC68_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* Method_3_1913E238E72DC26E()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_1913E238E72DC26E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* Method_3_1913E238E72DC26E_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_1913E238E72DC26E_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>* Method_3_B8AEE4298B8CE38E()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_B8AEE4298B8CE38E_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_87209452B4E86410_1_OFFSET))(this);
	}

	::MoleMole::Project::Config::CurvySplineData* Method_3_555F1ECF3305CD1B()
	{
		return ((::MoleMole::Project::Config::CurvySplineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_555F1ECF3305CD1B_OFFSET))(this);
	}

	::MoleMole::Project::Config::CurvySplineData* Method_3_555F1ECF3305CD1B_1()
	{
		return ((::MoleMole::Project::Config::CurvySplineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_555F1ECF3305CD1B_1_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_87209452B4E86410_2_OFFSET))(this);
	}

	::Enum_3_4E7B8E0B6291DEBC Method_3_4E45834556360335()
	{
		return ((::Enum_3_4E7B8E0B6291DEBC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_4E45834556360335_OFFSET))(this);
	}

	::MoleMole::Project::Config::LevelData* Method_3_B2DE2E5527FD4D56()
	{
		return ((::MoleMole::Project::Config::LevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_B2DE2E5527FD4D56_OFFSET))(this);
	}

	::System::String* Method_3_B12B136156DD1036()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_B12B136156DD1036_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>* Method_3_A8A4537FF4C50CEC()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_A8A4537FF4C50CEC_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5150DA9365F978D4_METHOD_3_87209452B4E86410_3_OFFSET))(this);
	}
};
