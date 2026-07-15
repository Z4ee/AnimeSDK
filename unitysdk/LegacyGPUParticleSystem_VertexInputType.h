#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LegacyGPUParticleSystem_VertexInputType_TypeDefinitionIndex = 41347;

enum class LegacyGPUParticleSystem_VertexInputType : ::System::Int32
{
	PositionVec3_POSITION_xyz = 0,
	ColorVec4_COLOR_xyzw = 1,
	NormalVec3_NORMAL_xyz = 2,
	TangentVec4_TANGENT_xyzw = 3,
	UV1Vec2_TEXCOORD_xy = 4,
	UV2Vec2_TEXCOORD_xy = 5,
	UV3Vec2_TEXCOORD_xy = 6,
	UV4Vec2_TEXCOORD_xy = 7,
	UV12Vec4_TEXCOORD_xyzw = 8,
	UV34Vec4_TEXCOORD_xyzw = 9,
	Custom1Vec4_TEXCOORD_xyzw = 10,
	Custom2Vec4_TEXCOORD_xyzw = 11,
};
