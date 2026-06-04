#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F713D8ADA87F44A;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentEditorData; }

#define CLASS_1_F7432A305877DE65_METHOD_1_7A1E094A4B7A7A25_OFFSET UNITYSDK_OFFSET(0xAA6B6A0)
#define CLASS_1_F7432A305877DE65_METHOD_1_7C180935D65F08F6_OFFSET UNITYSDK_OFFSET(0xAA6BAA0)
#define CLASS_1_F7432A305877DE65_METHOD_1_D848AD813A4E4561_OFFSET UNITYSDK_OFFSET(0xAA6BA00)

inline static constexpr unsigned int Class_1_F7432A305877DE65_TypeDefinitionIndex = 50045;

class Class_1_F7432A305877DE65 : public ::System::Object
{
public:
	static ::Class_1_8F713D8ADA87F44A* Method_1_7A1E094A4B7A7A25(::RPG::GameCore::StageVolumeComponentData* a1)
	{
		return ((::Class_1_8F713D8ADA87F44A*(*)(::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_F7432A305877DE65_METHOD_1_7A1E094A4B7A7A25_OFFSET))(a1);
	}

	static ::RPG::GameCore::StreamingBlockVolumeComponentData* Method_1_D848AD813A4E4561(::RPG::GameCore::StreamingBlockVolumeComponentEditorData* a1)
	{
		return ((::RPG::GameCore::StreamingBlockVolumeComponentData*(*)(::RPG::GameCore::StreamingBlockVolumeComponentEditorData*))((::PBYTE)hIl2Cpp + CLASS_1_F7432A305877DE65_METHOD_1_D848AD813A4E4561_OFFSET))(a1);
	}

	static ::RPG::GameCore::StreamingBlockVolumeComponentEditorData* Method_1_7C180935D65F08F6(::RPG::GameCore::StreamingBlockVolumeComponentData* a1)
	{
		return ((::RPG::GameCore::StreamingBlockVolumeComponentEditorData*(*)(::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_F7432A305877DE65_METHOD_1_7C180935D65F08F6_OFFSET))(a1);
	}
};
