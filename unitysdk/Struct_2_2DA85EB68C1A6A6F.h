#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/Struct_2_477156017493A5B9.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_D0A3658446FCD9A2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_006E258B22EA43C8_OFFSET UNITYSDK_OFFSET(0x12946C50)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x7B7C80)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_222592086BA83928_OFFSET UNITYSDK_OFFSET(0x7B7C70)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_224D6B6433F0D411_OFFSET UNITYSDK_OFFSET(0x7B7DC0)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x7B7C00)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_89C1A5C779599670_OFFSET UNITYSDK_OFFSET(0x69BAD0)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_AC2B82F3D026F3EA_1_OFFSET UNITYSDK_OFFSET(0x7B7E00)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_AC2B82F3D026F3EA_OFFSET UNITYSDK_OFFSET(0x7B7CA0)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_BCDF1C0553E211C6_OFFSET UNITYSDK_OFFSET(0x7B7E20)
#define STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x7B7C30)
#define STRUCT_2_2DA85EB68C1A6A6F_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x7B7B80)
#define STRUCT_2_2DA85EB68C1A6A6F_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x7B7BC0)
#define STRUCT_2_2DA85EB68C1A6A6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x12947400)
#define STRUCT_2_2DA85EB68C1A6A6F__CTOR_OFFSET UNITYSDK_OFFSET(0x7B7B10)

inline static constexpr unsigned int Struct_2_2DA85EB68C1A6A6F_TypeDefinitionIndex = 86954;

struct alignas(8) Struct_2_2DA85EB68C1A6A6F
{
	static ::Struct_2_2DA85EB68C1A6A6F* StaticGet_Field_2_6()
	{
		return (::Struct_2_2DA85EB68C1A6A6F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_2DA85EB68C1A6A6F_TypeDefinitionIndex)->GetStaticField(0xEAF0);
	}
	::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> Field_2_2; // 0x10
	::Struct_2_ACD0EF80A5330786 Field_2_1; // 0x20
	::Foundation::ReadOnlyNativeVariable_1<::Struct_2_477156017493A5B9> Field_2_0; // 0xB0
	::Foundation::ReadOnlyNativeVariable_1<::Struct_2_D0A3658446FCD9A2> Field_2_7; // 0xC0

	::System::Void _ctor(::Struct_2_ACD0EF80A5330786 a1, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> a2, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_D0A3658446FCD9A2> a3, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_477156017493A5B9> a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_D0A3658446FCD9A2>, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_477156017493A5B9>))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F__CCTOR_OFFSET))();
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_222592086BA83928()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_222592086BA83928_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2> Method_2_AC2B82F3D026F3EA()
	{
		return ((::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_AC2B82F3D026F3EA_OFFSET))(this);
	}
	*/

	/*
	static ::System::Void Method_2_006E258B22EA43C8(::Struct_2_477156017493A5B9& a1, ::Struct_2_63DDC2FA7A3D55CD& a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Struct_2_477156017493A5B9&, ::Struct_2_63DDC2FA7A3D55CD&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_006E258B22EA43C8_OFFSET))(a1, a2, a3, a4);
	}
	*/

	/*
	::System::Single Method_2_224D6B6433F0D411(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_224D6B6433F0D411_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_89C1A5C779599670(::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_89C1A5C779599670_OFFSET))(this, a1);
	}

	/*
	::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2> Method_2_AC2B82F3D026F3EA_1()
	{
		return ((::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_AC2B82F3D026F3EA_1_OFFSET))(this);
	}
	*/

	/*
	::Foundation::NativeVariable_1<::UnityEngine::Vector3> Method_2_BCDF1C0553E211C6()
	{
		return ((::Foundation::NativeVariable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2DA85EB68C1A6A6F_METHOD_2_BCDF1C0553E211C6_OFFSET))(this);
	}
	*/
};
