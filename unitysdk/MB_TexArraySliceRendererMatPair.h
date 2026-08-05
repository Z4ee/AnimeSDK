#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MB_TEXARRAYSLICERENDERERMATPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F63B1F0)

inline static constexpr unsigned int MB_TexArraySliceRendererMatPair_TypeDefinitionIndex = 94454;

class MB_TexArraySliceRendererMatPair : public ::System::Object
{
public:
	::UnityEngine::Material* sourceMaterial; // 0x10
	::UnityEngine::GameObject* renderer; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_TEXARRAYSLICERENDERERMATPAIR__CTOR_OFFSET))(this);
	}
};
