#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/BVH8_CWNode.h"
#include "unitysdk/SWRTAsset_RTMaterial.h"
#include "unitysdk/SWRTAsset_RTTriangle.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define SWRTASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F312F0)
#define SWRTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18F314F0)

inline static constexpr unsigned int SWRTAsset_TypeDefinitionIndex = 35153;

class SWRTAsset : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _IndicesList; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _PositionList; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _NormalList; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _TangentList; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _UVList; // 0x38
	::System::Collections::Generic::List_1<::SWRT::BVH8_CWNode>* _BVHNodes8; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* _TriangleIndex8; // 0x48
	::System::Collections::Generic::List_1<::SWRTAsset_RTTriangle>* _Triangle8; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* _BlasOffsets8; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* _RendererIndex8; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* _BlasIndex; // 0x68
	::System::Collections::Generic::List_1<::SWRTAsset_RTMaterial>* _Materials; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Texture*>* _TexAlbedos; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Texture*>* _TexNormals; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _LocalToWorlds; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _WorldToLocals; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRTASSET__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRTASSET_CLEAR_OFFSET))(this);
	}
};
