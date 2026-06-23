#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MdbEditor { class MdbDebugDrawConstrains; }

#define MDBEDITOR_MDBDEBUGDRAWSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x11A64D00)

namespace MdbEditor
{
	inline static constexpr unsigned int MdbDebugDrawSettings_TypeDefinitionIndex = 91430;

	class MdbDebugDrawSettings : public ::System::Object
	{
	public:
		::System::Boolean DebugDrawEnabled; // 0x10
		::System::Boolean DrawSolideMeshEnabled; // 0x11
		::System::Boolean DrawBackFaceEnabled; // 0x12
		::System::Boolean ZTestDisabled; // 0x13
		::UnityEngine::Vector3 DebugDrawOffset; // 0x14
		::System::Boolean DrawCapsuleCollider; // 0x20
		::System::Boolean DrawPlaneCollider; // 0x21
		::System::Boolean DrawMeshCollider; // 0x22
		::System::Boolean DrawParticleSimPose; // 0x23
		::System::Boolean DrawChain; // 0x24
		::System::Boolean DrawChainAnimPose; // 0x25
		::System::Boolean DrawParticleAnimPose; // 0x26
		::System::Boolean DrawParticleNorm; // 0x27
		::System::Boolean DrawSimFix; // 0x28
		::System::Boolean DrawFullyBones; // 0x29
		::System::Boolean DrawClothWind; // 0x2A
		::System::Boolean DrawVEdge; // 0x2B
		::System::Boolean DrawHEdge; // 0x2C
		::MdbEditor::MdbDebugDrawConstrains* ConstrainSetting; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBDEBUGDRAWSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
