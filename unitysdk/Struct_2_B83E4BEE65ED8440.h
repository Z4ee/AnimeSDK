#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_D0A3658446FCD9A2.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B83E4BEE65ED8440_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x715360)
#define STRUCT_2_B83E4BEE65ED8440_METHOD_2_3F6DD32D583A9FCF_OFFSET UNITYSDK_OFFSET(0x715350)
#define STRUCT_2_B83E4BEE65ED8440_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x715380)
#define STRUCT_2_B83E4BEE65ED8440_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x715310)
#define STRUCT_2_B83E4BEE65ED8440_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x715290)
#define STRUCT_2_B83E4BEE65ED8440_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x7152D0)
#define STRUCT_2_B83E4BEE65ED8440__CCTOR_OFFSET UNITYSDK_OFFSET(0x113CEFB0)
#define STRUCT_2_B83E4BEE65ED8440__CTOR_OFFSET UNITYSDK_OFFSET(0x715240)

inline static constexpr unsigned int Struct_2_B83E4BEE65ED8440_TypeDefinitionIndex = 78489;

struct alignas(8) Struct_2_B83E4BEE65ED8440
{
	static ::Struct_2_B83E4BEE65ED8440* StaticGet_Field_2_4()
	{
		return (::Struct_2_B83E4BEE65ED8440*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B83E4BEE65ED8440_TypeDefinitionIndex)->GetStaticField(0xBCE0);
	}
	// static const ::System::Int32 Field_2_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x1; // 0x0
	::Struct_2_ACD0EF80A5330786 Field_2_2; // 0x10
	::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2> Field_2_3; // 0xA0

	::System::Void _ctor(::Struct_2_ACD0EF80A5330786 a1, ::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786, ::Foundation::NativeVariable_1<::Struct_2_D0A3658446FCD9A2>))((::PBYTE)hIl2Cpp + STRUCT_2_B83E4BEE65ED8440__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B83E4BEE65ED8440__CCTOR_OFFSET))();
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_B83E4BEE65ED8440_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_B83E4BEE65ED8440_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_B83E4BEE65ED8440_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_3F6DD32D583A9FCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B83E4BEE65ED8440_METHOD_2_3F6DD32D583A9FCF_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B83E4BEE65ED8440_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_B83E4BEE65ED8440_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/
};
