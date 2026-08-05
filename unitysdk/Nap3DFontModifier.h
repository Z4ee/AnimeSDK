#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class TextMesh; }

#define NAP3DFONTMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0x1D5DEB50)
#define NAP3DFONTMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D5DE830)
#define NAP3DFONTMODIFIER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1D5DEA40)
#define NAP3DFONTMODIFIER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1D5DE9B0)
#define NAP3DFONTMODIFIER_START_OFFSET UNITYSDK_OFFSET(0x1D5DEB00)
#define NAP3DFONTMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D5DF6B0)
#define NAP3DFONTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DFE10)

inline static constexpr unsigned int Nap3DFontModifier_TypeDefinitionIndex = 27903;

class Nap3DFontModifier : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Material* newMat; // 0x18
	::UnityEngine::Material* oldMat; // 0x20
	::UnityEngine::Font* ft; // 0x28
	::UnityEngine::Material* m_CachedMaterial; // 0x30
	::UnityEngine::TextMesh* m_TextMesh; // 0x38
	::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP3DFONTMODIFIER__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP3DFONTMODIFIER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP3DFONTMODIFIER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP3DFONTMODIFIER_START_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP3DFONTMODIFIER_INIT_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP3DFONTMODIFIER_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP3DFONTMODIFIER_UPDATE_OFFSET))(this);
	}
};
