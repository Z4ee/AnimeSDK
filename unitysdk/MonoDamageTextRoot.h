#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define MONODAMAGETEXTROOT_START_OFFSET UNITYSDK_OFFSET(0x113419F0)
#define MONODAMAGETEXTROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x11341B30)

inline static constexpr unsigned int MonoDamageTextRoot_TypeDefinitionIndex = 41112;

class MonoDamageTextRoot : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Mesh* mesh; // 0x18
	::UnityEngine::Material* material; // 0x20
	::UnityEngine::Mesh* effMesh; // 0x28
	::UnityEngine::Material* effMaterial; // 0x30
	::System::String* text; // 0x38
	::UnityEngine::Vector3 pos; // 0x40
	::System::Single scale; // 0x4C
	::System::Single fadeinInterval; // 0x50
	::System::Single fadeoutInterval; // 0x54
	::System::Single showTime; // 0x58
	::System::Single fadeinTime; // 0x5C
	::System::Single fadeoutTime; // 0x60
	::System::Single faceIndex; // 0x64
	::System::Boolean isFlash; // 0x68
	::System::Single effectColorIndex; // 0x6C
	::System::Boolean isCombineText; // 0x70
	::System::Single ComebineTextShowTime; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODAMAGETEXTROOT__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODAMAGETEXTROOT_START_OFFSET))(this);
	}
};
