#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape_EmitFromMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_EMITSHAPE_GET_SHAPETOOBJSPACEM_OFFSET UNITYSDK_OFFSET(0x150EF590)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_EMITSHAPE_GET_SHAPETOOBJSPACENOSCALEM_OFFSET UNITYSDK_OFFSET(0x150F3E00)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_EMITSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x150F0330)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape_TypeDefinitionIndex = 67327;

	class Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::UnityEngine::Vector3 Scale; // 0x2C
		::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape_EmitFromMode EmitFrom; // 0x38
		::System::UInt32 ScatterPointNum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_EMITSHAPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_ShapeToObjSpaceM()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_EMITSHAPE_GET_SHAPETOOBJSPACEM_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_ShapeToObjSpaceNoScaleM()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_EMITSHAPE_GET_SHAPETOOBJSPACENOSCALEM_OFFSET))(this);
		}
	};
}
