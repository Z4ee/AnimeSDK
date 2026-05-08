#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_35B7E50E408923AA.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_D0A3658446FCD9A2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x6E26C0)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_224D6B6433F0D411_OFFSET UNITYSDK_OFFSET(0x6E2890)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x6E27A0)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_6FDE72CACFA8F12A_OFFSET UNITYSDK_OFFSET(0x6E28D0)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_89C1A5C779599670_OFFSET UNITYSDK_OFFSET(0x6E2870)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x6E26B0)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_AC2B82F3D026F3EA_OFFSET UNITYSDK_OFFSET(0x6E2830)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_BCDF1C0553E211C6_OFFSET UNITYSDK_OFFSET(0x6E2850)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x6E26E0)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_C4535F0EE3975627_OFFSET UNITYSDK_OFFSET(0x1009B830)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_CD6A58B30CAF51C3_OFFSET UNITYSDK_OFFSET(0x6E27F0)
#define STRUCT_2_4CBDB11AAF13DED0_METHOD_2_FBC63D7D2D0D1E10_OFFSET UNITYSDK_OFFSET(0x6E27D0)
#define STRUCT_2_4CBDB11AAF13DED0_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x6E2720)
#define STRUCT_2_4CBDB11AAF13DED0_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x6E2760)
#define STRUCT_2_4CBDB11AAF13DED0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1009BB90)
#define STRUCT_2_4CBDB11AAF13DED0__CTOR_OFFSET UNITYSDK_OFFSET(0x6E2620)

inline static constexpr unsigned int Struct_2_4CBDB11AAF13DED0_TypeDefinitionIndex = 75752;

struct alignas(8) Struct_2_4CBDB11AAF13DED0
{
	static ::Struct_2_4CBDB11AAF13DED0* StaticGet_Field_2_5()
	{
		return (::Struct_2_4CBDB11AAF13DED0*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4CBDB11AAF13DED0_TypeDefinitionIndex)->GetStaticField(0xA0F0);
	}
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> Field_2_0; // 0x10
	::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> Field_2_1; // 0x20
	::Foundation::ReadOnlyNativeVariable_1<::Struct_2_D0A3658446FCD9A2> Field_2_2; // 0x30
	::Foundation::ReadOnlyNativeVariable_1<::Struct_2_35B7E50E408923AA> Field_2_3; // 0x40
	::Struct_2_ACD0EF80A5330786 Field_2_4; // 0x50

	::System::Void _ctor(::Struct_2_ACD0EF80A5330786 a1, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> a2, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> a3, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_D0A3658446FCD9A2> a4, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_35B7E50E408923AA> a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_D0A3658446FCD9A2>, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_35B7E50E408923AA>))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_8A2AC7CD7EA66CAC_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_FBC63D7D2D0D1E10(::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_FBC63D7D2D0D1E10_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_CD6A58B30CAF51C3(::UnityEngine::Animations::AnimationStream a1, ::Foundation::Unreal::FTransform3D& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::Foundation::Unreal::FTransform3D&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_CD6A58B30CAF51C3_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	static ::System::Void Method_2_C4535F0EE3975627(::Struct_2_35B7E50E408923AA& a1, ::Struct_2_63DDC2FA7A3D55CD& a2, ::Foundation::Unreal::FTransform3D a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Struct_2_35B7E50E408923AA&, ::Struct_2_63DDC2FA7A3D55CD&, ::Foundation::Unreal::FTransform3D, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_C4535F0EE3975627_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	/*
	::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2> Method_2_AC2B82F3D026F3EA()
	{
		return ((::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_AC2B82F3D026F3EA_OFFSET))(this);
	}
	*/

	/*
	::Foundation::NativeVariable_1<::UnityEngine::Vector3> Method_2_BCDF1C0553E211C6()
	{
		return ((::Foundation::NativeVariable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_BCDF1C0553E211C6_OFFSET))(this);
	}
	*/

	::System::Void Method_2_89C1A5C779599670(::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_89C1A5C779599670_OFFSET))(this, a1);
	}

	/*
	::System::Single Method_2_224D6B6433F0D411(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_224D6B6433F0D411_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> Method_2_6FDE72CACFA8F12A()
	{
		return ((::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4CBDB11AAF13DED0_METHOD_2_6FDE72CACFA8F12A_OFFSET))(this);
	}
	*/
};
