#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/Struct_2_6E1B724B14572104_6.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/PropertyStreamHandle.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace MoleMole::Photo { class PlayableUnitBlendShapeConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }
template <typename T> class Class_0_16E4307DCC419505_655;

#define CLASS_1_3A8CBD6A2FB912AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1012BE20)
#define CLASS_1_3A8CBD6A2FB912AF_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1012C810)
#define CLASS_1_3A8CBD6A2FB912AF_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x1012C2A0)
#define CLASS_1_3A8CBD6A2FB912AF_METHOD_1_5B6CC23D54F693F4_OFFSET UNITYSDK_OFFSET(0x1012C800)
#define CLASS_1_3A8CBD6A2FB912AF_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1012C050)
#define CLASS_1_3A8CBD6A2FB912AF_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1012C040)
#define CLASS_1_3A8CBD6A2FB912AF_METHOD_1_DF0F3FCE2AD94E5D_1_OFFSET UNITYSDK_OFFSET(0x1012C180)
#define CLASS_1_3A8CBD6A2FB912AF_METHOD_1_DF0F3FCE2AD94E5D_OFFSET UNITYSDK_OFFSET(0x1012C060)
#define CLASS_1_3A8CBD6A2FB912AF_METHOD_1_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x1012C3A0)
#define CLASS_1_3A8CBD6A2FB912AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1012B510)

inline static constexpr unsigned int Class_1_3A8CBD6A2FB912AF_TypeDefinitionIndex = 76669;

class Class_1_3A8CBD6A2FB912AF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	::Foundation::NativeMemory* Field_1_8; // 0x10
	::UnityEngine::AvatarMask* Field_1_4; // 0x18
	::MoleMole::Photo::Skeleton* Field_1_7; // 0x20
	::UnityEngine::Animator* Field_1_5; // 0x28
	::UnityEngine::Animations::AnimationScriptPlayable Field_1_1; // 0x30
	::UnityEngine::Playables::PlayableGraph Field_1_3; // 0x40
	::Struct_2_ACD0EF80A5330786 Field_1_6; // 0x50
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_6>> Field_1_2; // 0xE0
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_0; // 0xF0

	::System::Void _ctor(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786 a3, ::MoleMole::Photo::PlayableUnitBlendShapeConfig* a4, ::Foundation::NativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle> a5, ::Foundation::NativeVariableArray_1<::System::Single> a6, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_6>> a7, ::Foundation::NativeVariableArray_1<::System::Single> a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786, ::MoleMole::Photo::PlayableUnitBlendShapeConfig*, ::Foundation::NativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle>, ::Foundation::NativeVariableArray_1<::System::Single>, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_6>>, ::Foundation::NativeVariableArray_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> Method_1_DF0F3FCE2AD94E5D(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_METHOD_1_DF0F3FCE2AD94E5D_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> Method_1_DF0F3FCE2AD94E5D_1(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_METHOD_1_DF0F3FCE2AD94E5D_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Void Method_1_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_METHOD_1_E6451DD1ECA91329_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B6CC23D54F693F4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_METHOD_1_5B6CC23D54F693F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
