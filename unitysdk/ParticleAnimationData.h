#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class PerFrameData;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARTICLEANIMATIONDATA_GETFRAMEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C5A0E70)
#define PARTICLEANIMATIONDATA_GETFRAMEDATA_1_OFFSET UNITYSDK_OFFSET(0x1C5A1020)
#define PARTICLEANIMATIONDATA_GETFRAMEDATA_OFFSET UNITYSDK_OFFSET(0x1C5A0F80)
#define PARTICLEANIMATIONDATA_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1C5A0E50)
#define PARTICLEANIMATIONDATA_GET_PARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C5A0E40)
#define PARTICLEANIMATIONDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C5A1090)
#define PARTICLEANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A10F0)

inline static constexpr unsigned int ParticleAnimationData_TypeDefinitionIndex = 27563;

class ParticleAnimationData : public ::UnityEngine::ScriptableObject
{
public:
	// static const ::System::String* VertexColorPropertyName; // 0x0
	// static const ::System::String* AgePercentPropertyName; // 0x0
	// static const ::System::String* CustomData1PropertyName; // 0x0
	// static const ::System::String* CustomData2PropertyName; // 0x0
	::System::Int32 maxParticleCount; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* allParticleSeeds; // 0x20
	::System::Collections::Generic::List_1<::PerFrameData*>* frameDataList; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA__CTOR_OFFSET))(this);
	}

	::System::Int32 get_ParticleCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA_GET_PARTICLECOUNT_OFFSET))(this);
	}

	::System::Int32 get_FrameCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA_GET_FRAMECOUNT_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Bounds> GetFrameBounds(::System::Int32 frameIndex)
	{
		return ((::System::Nullable_1<::UnityEngine::Bounds>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA_GETFRAMEBOUNDS_OFFSET))(this, frameIndex);
	}

	::PerFrameData* GetFrameData(::System::Int32 frameIndex)
	{
		return ((::PerFrameData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA_GETFRAMEDATA_OFFSET))(this, frameIndex);
	}

	::PerFrameData* GetFrameData_1(::System::Single frame)
	{
		return ((::PerFrameData*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA_GETFRAMEDATA_1_OFFSET))(this, frame);
	}

	::System::Boolean IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA_ISVALID_OFFSET))(this);
	}
};
