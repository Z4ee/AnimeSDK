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
template <typename T> class Class_0_16E4307DCC41950C_17;

#define CLASS_1_AB394946F84AC2D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF530DB0)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF5319B0)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_70E3E19E871830C9_OFFSET UNITYSDK_OFFSET(0xF531A10)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xF531900)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xF531100)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF5310B0)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_BB6A5E3D7932B0D5_1_OFFSET UNITYSDK_OFFSET(0xF5312C0)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_BB6A5E3D7932B0D5_OFFSET UNITYSDK_OFFSET(0xF531150)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_C3E4F3CB916E5633_OFFSET UNITYSDK_OFFSET(0xF531550)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_CDFCB4F1AB271783_OFFSET UNITYSDK_OFFSET(0xF5314F0)
#define CLASS_1_AB394946F84AC2D3_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0xF531430)
#define CLASS_1_AB394946F84AC2D3__CTOR_OFFSET UNITYSDK_OFFSET(0xF530A90)

inline static constexpr unsigned int Class_1_AB394946F84AC2D3_TypeDefinitionIndex = 39364;

class Class_1_AB394946F84AC2D3 : public ::System::Object
{
public:
	::MoleMole::Photo::Skeleton* Field_1_5; // 0x10
	::Foundation::NativeMemory* Field_1_6; // 0x18
	::UnityEngine::Animator* Field_1_4; // 0x20
	::Foundation::NativeVariableArray_1<::System::Single> Field_1_1; // 0x28
	::UnityEngine::Animations::AnimationScriptPlayable Field_1_0; // 0x38
	::Struct_2_ACD0EF80A5330786 Field_1_3; // 0x48
	::UnityEngine::Playables::PlayableGraph Field_1_2; // 0xD8

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

	::System::Void Method_1_CDFCB4F1AB271783(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_CDFCB4F1AB271783_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3E4F3CB916E5633(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_C3E4F3CB916E5633_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_70E3E19E871830C9(::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>>))((::PBYTE)hIl2Cpp + CLASS_1_AB394946F84AC2D3_METHOD_1_70E3E19E871830C9_OFFSET))(this, a1);
	}
};
