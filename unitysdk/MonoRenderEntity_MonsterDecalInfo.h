#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MONORENDERENTITY_MONSTERDECALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EC5D0)

inline static constexpr unsigned int MonoRenderEntity_MonsterDecalInfo_TypeDefinitionIndex = 27245;

class MonoRenderEntity_MonsterDecalInfo : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* renderers; // 0x10
	::UnityEngine::RenderTexture* decalDilationDecalLUT; // 0x18
	::UnityEngine::Material* decalMaterial; // 0x20
	::System::Int32 cellResolution; // 0x28
	::UnityEngine::Vector3 hitNormal; // 0x2C
	::System::Int32 decalCellIndex; // 0x38
	::UnityEngine::Matrix4x4 decalMatrix; // 0x3C
	::System::Boolean rtCleared; // 0x7C
	::System::Boolean isHit; // 0x7D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_MONSTERDECALINFO__CTOR_OFFSET))(this);
	}
};
