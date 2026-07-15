#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int JigsawEditorHelper_JigsawPoseType_TypeDefinitionIndex = 65455;

	enum class JigsawEditorHelper_JigsawPoseType : ::System::Int32
	{
		None = 0,
		H1_1M2_0 = 1,
		H2_1M2_10 = 2,
		H3_1M2_N10 = 3,
		H4_0M7_15 = 4,
		H5_0M7_25 = 5,
		V1_0M7_0 = 6,
		V2_0M7_10 = 7,
		V3_0M7_N10 = 8,
		V4_0M7_15 = 9,
		V5_0M7_N5 = 10,
	};
}
