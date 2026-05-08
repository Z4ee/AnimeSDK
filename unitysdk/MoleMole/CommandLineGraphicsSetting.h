#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class CommandLineAnisotropicSampling; }
namespace MoleMole { class CommandLineAntiAlias; }
namespace MoleMole { class CommandLineBloom; }
namespace MoleMole { class CommandLineDOF; }
namespace MoleMole { class CommandLineDistortion; }
namespace MoleMole { class CommandLineDpiFactor; }
namespace MoleMole { class CommandLineExposure; }
namespace MoleMole { class CommandLineFrameRate; }
namespace MoleMole { class CommandLineGlobalIllumination; }
namespace MoleMole { class CommandLineLoopSubdivision; }
namespace MoleMole { class CommandLineMirrorReflection; }
namespace MoleMole { class CommandLineModelQuality; }
namespace MoleMole { class CommandLineMotionBlur; }
namespace MoleMole { class CommandLineParticleQuality; }
namespace MoleMole { class CommandLinePerformanceSetting; }
namespace MoleMole { class CommandLineRenderScale; }
namespace MoleMole { class CommandLineSceneGlare; }
namespace MoleMole { class CommandLineSceneQuality; }
namespace MoleMole { class CommandLineShadingQuality; }
namespace MoleMole { class CommandLineShadowQuality; }
namespace MoleMole { class CommandLineVSync; }
namespace MoleMole { class CommandLineVolumetricCloud; }
namespace MoleMole { class CommandLineVolumetricFog; }
namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineGraphicsSetting_TypeDefinitionIndex = 78760;

	struct alignas(8) CommandLineGraphicsSetting
	{
		::System::String* PerformanceKey; // 0x10
		::MoleMole::CommandLinePerformanceSetting* PerformanceSetting; // 0x18
		::MoleMole::CommandLineFrameRate* FrameRate; // 0x20
		::MoleMole::CommandLineVSync* VSync; // 0x28
		::MoleMole::CommandLineRenderScale* RenderScale; // 0x30
		::MoleMole::CommandLineShadowQuality* ShadowQuality; // 0x38
		::MoleMole::CommandLineAntiAlias* AntiAlias; // 0x40
		::MoleMole::CommandLineMirrorReflection* MirrorReflection; // 0x48
		::MoleMole::CommandLineVolumetricFog* VolumetricFog; // 0x50
		::MoleMole::CommandLineVolumetricCloud* VolumetricCloud; // 0x58
		::MoleMole::CommandLineBloom* Bloom; // 0x60
		::MoleMole::CommandLineExposure* Exposure; // 0x68
		::MoleMole::CommandLineSceneGlare* SceneGlare; // 0x70
		::MoleMole::CommandLineDpiFactor* DpiFactor; // 0x78
		::MoleMole::CommandLineGlobalIllumination* GlobalIllumination; // 0x80
		::MoleMole::CommandLineLoopSubdivision* LoopSubdivision; // 0x88
		::MoleMole::CommandLineAnisotropicSampling* AnisotropicSampling; // 0x90
		::MoleMole::CommandLineParticleQuality* ParticleQuality; // 0x98
		::MoleMole::CommandLineModelQuality* ModelQuality; // 0xA0
		::MoleMole::CommandLineDOF* DOF; // 0xA8
		::MoleMole::CommandLineMotionBlur* MotionBlur; // 0xB0
		::MoleMole::CommandLineDistortion* Distortion; // 0xB8
		::MoleMole::CommandLineShadingQuality* ShadingQuality; // 0xC0
		::MoleMole::CommandLineSceneQuality* SceneQuality; // 0xC8
	};
}
