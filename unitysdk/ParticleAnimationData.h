#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class PerFrameData;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARTICLEANIMATIONDATA_GETFRAMEBOUNDS_OFFSET UNITYSDK_OFFSET(0x19277550)
#define PARTICLEANIMATIONDATA_GETFRAMEDATA_1_OFFSET UNITYSDK_OFFSET(0x19277700)
#define PARTICLEANIMATIONDATA_GETFRAMEDATA_OFFSET UNITYSDK_OFFSET(0x19277660)
#define PARTICLEANIMATIONDATA_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x19277530)
#define PARTICLEANIMATIONDATA_GET_PARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x19277520)
#define PARTICLEANIMATIONDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x19277770)
#define PARTICLEANIMATIONDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x192778E0)
#define PARTICLEANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x192777D0)

inline static constexpr unsigned int ParticleAnimationData_TypeDefinitionIndex = 29502;

class ParticleAnimationData : public ::UnityEngine::ScriptableObject
{
public:
	static ::System::Int32* StaticGet_AgePercentPropertyName()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParticleAnimationData_TypeDefinitionIndex)->GetStaticField(0x5A40);
	}
	static ::System::Int32* StaticGet_CustomData2PropertyName()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParticleAnimationData_TypeDefinitionIndex)->GetStaticField(0x5A44);
	}
	static ::System::Int32* StaticGet_VertexColorPropertyName()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParticleAnimationData_TypeDefinitionIndex)->GetStaticField(0x5A48);
	}
	static ::System::Int32* StaticGet_CustomData1PropertyName()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParticleAnimationData_TypeDefinitionIndex)->GetStaticField(0x5A4C);
	}
	::System::Int32 maxParticleCount; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* allParticleSeeds; // 0x20
	::System::Collections::Generic::List_1<::PerFrameData*>* frameDataList; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARTICLEANIMATIONDATA__CCTOR_OFFSET))();
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
