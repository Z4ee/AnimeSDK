#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture3D; }

#define RPG_CUSTOMRP_CLOUDTRANSITION_KEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1812DA10)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CloudTransition_KeyFrame_TypeDefinitionIndex = 35118;

	class CloudTransition_KeyFrame : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::UnityEngine::Texture3D* sdfTexture; // 0x18
		::UnityEngine::Vector4 sdfScale; // 0x20
		::UnityEngine::Vector4 sdfAdd; // 0x30
		::System::Int32 index; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_KEYFRAME__CTOR_OFFSET))(this);
		}
	};
}
