#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }
template <typename T> class Class_0_16E4307DCC41950C_29;

#define CLASS_1_AB394946F84AC2D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169D8900)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x169D9160)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x169D9100)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0x169D9330)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x169D8C60)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x169D8C10)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_B9FF35A3178C41D6_OFFSET UNITYSDK_OFFSET(0x169D91C0)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_BB6A5E3D7932B0D5_1_OFFSET UNITYSDK_OFFSET(0x169D8E20)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_BB6A5E3D7932B0D5_OFFSET UNITYSDK_OFFSET(0x169D8CB0)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x169D8F90)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x169D9050)
#define CLASS_1_AB394946F84AC2D3__CTOR_OFFSET UNITYSDK_OFFSET(0x169D85E0)

inline static constexpr unsigned int Class_1_AB394946F84AC2D3_TypeDefinitionIndex = 76513;

class Class_1_AB394946F84AC2D3 : public ::System::Object
{
public:
	::UnityEngine::Animator* Field_1_7; // 0x10
	::MoleMole::Photo::Skeleton* Field_1_6; // 0x18
	::Foundation::NativeMemory* Field_1_5; // 0x20
	::Foundation::NativeVariableArray_1<::System::Single> Field_1_2; // 0x28
	::UnityEngine::Playables::PlayableGraph Field_1_1; // 0x38
	::UnityEngine::Animations::AnimationScriptPlayable Field_1_3; // 0x48
	::Struct_2_ACD0EF80A5330786 Field_1_0; // 0x58

	::System::Void _ctor(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786 a3, ::UnityEngine::Animations::AnimationScriptPlayable a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786, ::UnityEngine::Animations::AnimationScriptPlayable))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> Method_1_BB6A5E3D7932B0D5(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_BB6A5E3D7932B0D5_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> Method_1_BB6A5E3D7932B0D5_1(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_BB6A5E3D7932B0D5_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_B9FF35A3178C41D6(::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>>))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_B9FF35A3178C41D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_63EDAB3EFF913F92(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_63EDAB3EFF913F92_OFFSET))(this, a1);
	}
};
