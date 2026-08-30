#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_DEFORMATIONCASTERTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xCC9C340)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterMonoPlugin_DeformationCasterTransform_TypeDefinitionIndex = 70234;

	class DeformationCharacterCasterMonoPlugin_DeformationCasterTransform : public ::System::Object
	{
	public:
		::System::String* AttatchedBone; // 0x10
		::UnityEngine::Vector3 CachedT; // 0x18
		::UnityEngine::Vector3 CachedS; // 0x24
		::UnityEngine::Quaternion CachedR; // 0x30
		::UnityEngine::Mesh* CasterMesh; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_DEFORMATIONCASTERTRANSFORM__CTOR_OFFSET))(this);
		}
	};
}
