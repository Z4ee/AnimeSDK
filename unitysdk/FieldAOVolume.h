#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IAssetOperation; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture3D; }

#define FIELDAOVOLUME_METHOD_5_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x118854E0)
#define FIELDAOVOLUME_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11884F50)
#define FIELDAOVOLUME_METHOD_5_7995D2033C97D105_OFFSET UNITYSDK_OFFSET(0x118859E0)
#define FIELDAOVOLUME_METHOD_5_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x118850C0)
#define FIELDAOVOLUME_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x11884E40)
#define FIELDAOVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11885900)
#define FIELDAOVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x118855F0)
#define FIELDAOVOLUME_START_OFFSET UNITYSDK_OFFSET(0x11885040)
#define FIELDAOVOLUME_UPDATEMATRIX_OFFSET UNITYSDK_OFFSET(0x118856D0)
#define FIELDAOVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x11885E00)

inline static constexpr unsigned int FieldAOVolume_TypeDefinitionIndex = 44254;

class FieldAOVolume : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Material** StaticGet_Field_5_19()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(FieldAOVolume_TypeDefinitionIndex)->GetStaticField(0x191D0);
	}
	::UnityEngine::Vector3 volumeScale; // 0x18
	::System::Int32 cubeSize; // 0x24
	::System::Single cutFarPlane; // 0x28
	::UnityEngine::Vector3 BoundsExpand; // 0x2C
	::UnityEngine::Color AOColor; // 0x38
	::System::Single AOStrength; // 0x48
	::System::Single AOBias; // 0x4C
	::System::Single AlphaWidthEdge; // 0x50
	::System::Boolean ShowOnlyAO; // 0x54
	::System::Boolean UseVisualization; // 0x55
	::System::Single arrowScale; // 0x58
	::UnityEngine::Vector2 widthRemapped; // 0x5C
	::UnityEngine::GameObject* AODecal; // 0x68
	::UnityEngine::Vector3 _FieldStartPoint; // 0x70
	::UnityEngine::Vector3 _FieldScale; // 0x7C
	::UnityEngine::Texture3D* volumeTex; // 0x88
	::UnityEngine::Cubemap* testCube; // 0x90
	::UnityEngine::Material* matDecal; // 0x98
	::UnityEngine::MaterialPropertyBlock* Field_5_18; // 0xA0
	::UnityEngine::Renderer* Field_5_20; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_5_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_METHOD_5_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_ONDISABLE_OFFSET))(this);
	}

	::System::Void UpdateMatrix()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_UPDATEMATRIX_OFFSET))(this);
	}

	::System::Boolean Method_5_7995D2033C97D105(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_METHOD_5_7995D2033C97D105_OFFSET))(this, a1);
	}

	::System::Void Method_5_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_METHOD_5_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_5_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_METHOD_5_1290EA767C459179_1_OFFSET))(this);
	}
};
