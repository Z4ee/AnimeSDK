#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_C087FD5579F90736_Enum_3_EDD67E716A1E1B7B.h"
#include "unitysdk/Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A.h"
#include "unitysdk/Struct_2_C087FD5579F90736_Struct_2_861BBAFEDF32B6BD.h"
#include "unitysdk/Struct_2_C087FD5579F90736_Struct_2_EE8984AE4C516C9C.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_C087FD5579F90736_METHOD_2_1BD71C0E8C126251_OFFSET UNITYSDK_OFFSET(0x7D4FE0)
#define STRUCT_2_C087FD5579F90736_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x7D4FF0)
#define STRUCT_2_C087FD5579F90736_METHOD_2_2B4253426965D70F_OFFSET UNITYSDK_OFFSET(0x7D2B30)
#define STRUCT_2_C087FD5579F90736_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x7D4F70)
#define STRUCT_2_C087FD5579F90736_METHOD_2_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x7D2B20)
#define STRUCT_2_C087FD5579F90736_METHOD_2_8918C74415807E0C_OFFSET UNITYSDK_OFFSET(0x7D2B00)
#define STRUCT_2_C087FD5579F90736_METHOD_2_8F1EBB1A4BE775A8_OFFSET UNITYSDK_OFFSET(0x7D5010)
#define STRUCT_2_C087FD5579F90736_METHOD_2_AD36E378507B7451_OFFSET UNITYSDK_OFFSET(0x7D2AE0)
#define STRUCT_2_C087FD5579F90736_METHOD_2_BCBE9387F34A5BD8_OFFSET UNITYSDK_OFFSET(0x7D5020)
#define STRUCT_2_C087FD5579F90736_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x7D4FA0)
#define STRUCT_2_C087FD5579F90736_METHOD_2_C3BAACE736DB8E95_OFFSET UNITYSDK_OFFSET(0x7D2AF0)
#define STRUCT_2_C087FD5579F90736_METHOD_2_CE28E1EA90AF38AD_OFFSET UNITYSDK_OFFSET(0x7D2B10)
#define STRUCT_2_C087FD5579F90736_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x7D2AD0)
#define STRUCT_2_C087FD5579F90736_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x7D4EF0)
#define STRUCT_2_C087FD5579F90736_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x7D4F30)
#define STRUCT_2_C087FD5579F90736__CCTOR_OFFSET UNITYSDK_OFFSET(0x138DF000)
#define STRUCT_2_C087FD5579F90736__CTOR_OFFSET UNITYSDK_OFFSET(0x7D4E80)

inline static constexpr unsigned int Struct_2_C087FD5579F90736_TypeDefinitionIndex = 71240;

struct alignas(8) Struct_2_C087FD5579F90736
{
	static ::Struct_2_C087FD5579F90736* StaticGet_Field_2_9()
	{
		return (::Struct_2_C087FD5579F90736*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C087FD5579F90736_TypeDefinitionIndex)->GetStaticField(0xA9F0);
	}
	::Foundation::NativeVariableArray_1<::Struct_2_C087FD5579F90736_Struct_2_861BBAFEDF32B6BD> Field_2_2; // 0x10
	::Struct_2_C087FD5579F90736_Enum_3_EDD67E716A1E1B7B Field_2_1; // 0x20
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>> Field_2_0; // 0x28
	::System::Single Field_2_7; // 0x38
	::System::Single Field_2_6; // 0x3C
	::System::Single Field_2_5; // 0x40
	::Struct_2_C087FD5579F90736_Struct_2_EE8984AE4C516C9C Field_2_4; // 0x48
	::Struct_2_ACD0EF80A5330786 Field_2_11; // 0x60
	::System::Int32 Field_2_10; // 0xF0

	/*
	::System::Void _ctor(::Struct_2_ACD0EF80A5330786 a1, ::Foundation::NativeVariableArray_1<::Struct_2_C087FD5579F90736_Struct_2_861BBAFEDF32B6BD> a2, ::Foundation::NativeVariableArray_1<::Struct_2_C087FD5579F90736_Struct_2_4527D0B46532D415> a3, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>> a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786, ::Foundation::NativeVariableArray_1<::Struct_2_C087FD5579F90736_Struct_2_861BBAFEDF32B6BD>, ::Foundation::NativeVariableArray_1<::Struct_2_C087FD5579F90736_Struct_2_4527D0B46532D415>, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>>))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736__CCTOR_OFFSET))();
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_1BD71C0E8C126251()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_1BD71C0E8C126251_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	::System::Int32 Method_2_8F1EBB1A4BE775A8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_8F1EBB1A4BE775A8_OFFSET))(this);
	}

	::Struct_2_C087FD5579F90736_Struct_2_861BBAFEDF32B6BD Method_2_BCBE9387F34A5BD8(::System::Int32 a1)
	{
		return ((::Struct_2_C087FD5579F90736_Struct_2_861BBAFEDF32B6BD(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_BCBE9387F34A5BD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_AD36E378507B7451()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_AD36E378507B7451_OFFSET))(this);
	}

	/*
	::System::Void Method_2_C3BAACE736DB8E95(::Struct_2_63DDC2FA7A3D55CD& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_63DDC2FA7A3D55CD&, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_C3BAACE736DB8E95_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Void Method_2_8918C74415807E0C(::Struct_2_63DDC2FA7A3D55CD& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_63DDC2FA7A3D55CD&))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_8918C74415807E0C_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_CE28E1EA90AF38AD(::Struct_2_63DDC2FA7A3D55CD& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_63DDC2FA7A3D55CD&))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_CE28E1EA90AF38AD_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>> Method_2_2B4253426965D70F()
	{
		return ((::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_METHOD_2_2B4253426965D70F_OFFSET))(this);
	}
};
