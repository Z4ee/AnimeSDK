#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class Effect_PathDeformBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_PATHDEFORMMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8E3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PathDeformMonoPlugin_TypeDefinitionIndex = 70493;

	class Effect_PathDeformMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_PathDeformBehavior*>
	{
	public:
		::UnityEngine::Mesh* InstanceMesh; // 0x30
		::UnityEngine::Material* InstanceMat; // 0x38
		::System::UInt32 InstanceNum; // 0x40
		::UnityEngine::Bounds AxisAlignBound; // 0x44
		::System::Boolean BoundDebug; // 0x5C
		::System::Boolean DebugMode; // 0x5D
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* MatrixList; // 0x60
		::System::Boolean IsKeyMatProperty; // 0x68
		::System::Single StartAt; // 0x6C
		::System::Single EndAt; // 0x70
		::System::Single TwistScale; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
