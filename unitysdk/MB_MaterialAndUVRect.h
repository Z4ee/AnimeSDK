#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureTilingTreatment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MB_MATERIALANDUVRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB7AE40)
#define MB_MATERIALANDUVRECT_GETENCAPSULATINGRECT_OFFSET UNITYSDK_OFFSET(0x1FB7AF70)
#define MB_MATERIALANDUVRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB7AD20)
#define MB_MATERIALANDUVRECT_GETMATERIALTILINGRECT_OFFSET UNITYSDK_OFFSET(0x1FB7AF90)
#define MB_MATERIALANDUVRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7ACC0)

inline static constexpr unsigned int MB_MaterialAndUVRect_TypeDefinitionIndex = 94461;

class MB_MaterialAndUVRect : public ::System::Object
{
public:
	::UnityEngine::Material* material; // 0x10
	::UnityEngine::Rect atlasRect; // 0x18
	::System::String* srcObjName; // 0x28
	::System::Int32 textureArraySliceIdx; // 0x30
	::System::Boolean allPropsUseSameTiling; // 0x34
	::UnityEngine::Rect allPropsUseSameTiling_sourceMaterialTiling; // 0x38
	::UnityEngine::Rect allPropsUseSameTiling_samplingEncapsulatinRect; // 0x48
	::UnityEngine::Rect propsUseDifferntTiling_srcUVsamplingRect; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objectsThatUse; // 0x68
	::DigitalOpus::MB::Core::MB_TextureTilingTreatment tilingTreatment; // 0x70

	::System::Void _ctor(::UnityEngine::Material* mat, ::UnityEngine::Rect destRect, ::System::Boolean allPropsUseSameTiling, ::UnityEngine::Rect sourceMaterialTiling, ::UnityEngine::Rect samplingEncapsulatingRect, ::UnityEngine::Rect srcUVsamplingRect, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment treatment, ::System::String* objName)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Rect, ::System::Boolean, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment, ::System::String*))((::PBYTE)hIl2Cpp + MB_MATERIALANDUVRECT__CTOR_OFFSET))(this, mat, destRect, allPropsUseSameTiling, sourceMaterialTiling, samplingEncapsulatingRect, srcUVsamplingRect, treatment, objName);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_MATERIALANDUVRECT_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MB_MATERIALANDUVRECT_EQUALS_OFFSET))(this, obj);
	}

	::UnityEngine::Rect GetEncapsulatingRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_MATERIALANDUVRECT_GETENCAPSULATINGRECT_OFFSET))(this);
	}

	::UnityEngine::Rect GetMaterialTilingRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_MATERIALANDUVRECT_GETMATERIALTILINGRECT_OFFSET))(this);
	}
};
