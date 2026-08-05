#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_733;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EE305D2D4E363D9B_METHOD_1_1D2E0D34E5B80FE9_OFFSET UNITYSDK_OFFSET(0x14E2D950)
#define CLASS_1_EE305D2D4E363D9B_METHOD_1_A62E9B343D66A958_OFFSET UNITYSDK_OFFSET(0x14E2DDB0)
#define CLASS_1_EE305D2D4E363D9B_METHOD_1_C4697BD0C46DB624_OFFSET UNITYSDK_OFFSET(0x14E2DB60)
#define CLASS_1_EE305D2D4E363D9B_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x14E2E030)
#define CLASS_1_EE305D2D4E363D9B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E2DFE0)
#define CLASS_1_EE305D2D4E363D9B__CTOR_OFFSET UNITYSDK_OFFSET(0x14E2D940)

inline static constexpr unsigned int Class_1_EE305D2D4E363D9B_TypeDefinitionIndex = 84152;

class Class_1_EE305D2D4E363D9B : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraTrackBlending* Field_1_0; // 0x10
	::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_733* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1D2E0D34E5B80FE9(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_1D2E0D34E5B80FE9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C4697BD0C46DB624(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_C4697BD0C46DB624_OFFSET))(this, a1);
	}

	::System::Void Method_1_A62E9B343D66A958(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_A62E9B343D66A958_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_733* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_733*))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}
};
