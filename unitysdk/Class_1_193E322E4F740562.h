#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_423695772F3F2AA9;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentEditorData; }

#define CLASS_1_193E322E4F740562_METHOD_1_183A95A810F1AA80_OFFSET UNITYSDK_OFFSET(0xC0C35A0)
#define CLASS_1_193E322E4F740562_METHOD_1_7C180935D65F08F6_OFFSET UNITYSDK_OFFSET(0xC0C3990)
#define CLASS_1_193E322E4F740562_METHOD_1_D848AD813A4E4561_OFFSET UNITYSDK_OFFSET(0xC0C38F0)

inline static constexpr unsigned int Class_1_193E322E4F740562_TypeDefinitionIndex = 49378;

class Class_1_193E322E4F740562 : public ::System::Object
{
public:
	static ::Class_1_423695772F3F2AA9* Method_1_183A95A810F1AA80(::RPG::GameCore::StageVolumeComponentData* a1)
	{
		return ((::Class_1_423695772F3F2AA9*(*)(::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_193E322E4F740562_METHOD_1_183A95A810F1AA80_OFFSET))(a1);
	}

	static ::RPG::GameCore::StreamingBlockVolumeComponentData* Method_1_D848AD813A4E4561(::RPG::GameCore::StreamingBlockVolumeComponentEditorData* a1)
	{
		return ((::RPG::GameCore::StreamingBlockVolumeComponentData*(*)(::RPG::GameCore::StreamingBlockVolumeComponentEditorData*))((::PBYTE)hIl2Cpp + CLASS_1_193E322E4F740562_METHOD_1_D848AD813A4E4561_OFFSET))(a1);
	}

	static ::RPG::GameCore::StreamingBlockVolumeComponentEditorData* Method_1_7C180935D65F08F6(::RPG::GameCore::StreamingBlockVolumeComponentData* a1)
	{
		return ((::RPG::GameCore::StreamingBlockVolumeComponentEditorData*(*)(::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_193E322E4F740562_METHOD_1_7C180935D65F08F6_OFFSET))(a1);
	}
};
