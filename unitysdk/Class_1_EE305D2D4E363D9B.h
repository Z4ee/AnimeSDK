#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_404;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EE305D2D4E363D9B_METHOD_1_8B22921FA004CEE8_OFFSET UNITYSDK_OFFSET(0xD956C00)
#define CLASS_1_EE305D2D4E363D9B_METHOD_1_A62E9B343D66A958_OFFSET UNITYSDK_OFFSET(0xD956970)
#define CLASS_1_EE305D2D4E363D9B_METHOD_1_C4697BD0C46DB624_OFFSET UNITYSDK_OFFSET(0xD956E20)
#define CLASS_1_EE305D2D4E363D9B_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xD956BB0)
#define CLASS_1_EE305D2D4E363D9B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD957080)
#define CLASS_1_EE305D2D4E363D9B__CTOR_OFFSET UNITYSDK_OFFSET(0xD956960)

inline static constexpr unsigned int Class_1_EE305D2D4E363D9B_TypeDefinitionIndex = 47722;

class Class_1_EE305D2D4E363D9B : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraTrackBlending* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_404* Field_1_0; // 0x18
	::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A62E9B343D66A958(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_A62E9B343D66A958_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_404* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_404*))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B22921FA004CEE8(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_8B22921FA004CEE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C4697BD0C46DB624(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_C4697BD0C46DB624_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE305D2D4E363D9B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
