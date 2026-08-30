#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define BLOODFLOWDRAWINSTANCE_GET_MAXNUMINSTANCES_OFFSET UNITYSDK_OFFSET(0x1A07F9B0)
#define BLOODFLOWDRAWINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A07FEF0)
#define BLOODFLOWDRAWINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07FA00)

inline static constexpr unsigned int BloodFlowDrawInstance_TypeDefinitionIndex = 47910;

class BloodFlowDrawInstance : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::UnityEngine::Keyframe>** StaticGet_frames()
	{
		return (::Il2CppArray<::UnityEngine::Keyframe>**)Il2CppClass::FromTypeDefinitionIndex(BloodFlowDrawInstance_TypeDefinitionIndex)->GetStaticField(0x601D0);
	}
	::System::Single Opacity; // 0x18
	::System::Single FlowTime; // 0x1C
	::System::Int32 NumInstances; // 0x20
	::System::Int32 RandomSeed; // 0x24
	::System::Single RandomOffsetOffsetBeforeSelect; // 0x28
	::UnityEngine::AnimationCurve* OpacityCurve; // 0x30
	::UnityEngine::AnimationCurve* FlowCurve; // 0x38
	::System::Boolean IsAffectOtherGO; // 0x40
	::UnityEngine::Renderer* OtherRender; // 0x48
	::System::String* OtherShaderProperty; // 0x50
	::Il2CppArray<::UnityEngine::Vector3>* ScatterPos; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* DrawMatrixs; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* PerInsProperties; // 0x68
	::Il2CppArray<::System::Int32>* SelectedScatterPosIndex; // 0x70
	::UnityEngine::MaterialPropertyBlock* _MB; // 0x78
	::UnityEngine::MaterialPropertyBlock* _OtherGOMB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOODFLOWDRAWINSTANCE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLOODFLOWDRAWINSTANCE__CCTOR_OFFSET))();
	}

	::System::Int32 get_MaxNumInstances()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOODFLOWDRAWINSTANCE_GET_MAXNUMINSTANCES_OFFSET))(this);
	}
};
