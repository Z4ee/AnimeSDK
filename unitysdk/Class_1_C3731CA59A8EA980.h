#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class SkinMapAnimationClipData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }

#define CLASS_1_C3731CA59A8EA980_METHOD_1_11CCB148E7603C47_OFFSET UNITYSDK_OFFSET(0x18086520)
#define CLASS_1_C3731CA59A8EA980_METHOD_1_1A7E4F2AB3720D6E_OFFSET UNITYSDK_OFFSET(0x18086B10)
#define CLASS_1_C3731CA59A8EA980_METHOD_1_8C1351449838A709_OFFSET UNITYSDK_OFFSET(0x180869A0)
#define CLASS_1_C3731CA59A8EA980_METHOD_1_9F88E35FE931B81A_OFFSET UNITYSDK_OFFSET(0x180867D0)
#define CLASS_1_C3731CA59A8EA980_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x18086410)
#define CLASS_1_C3731CA59A8EA980__CCTOR_OFFSET UNITYSDK_OFFSET(0x18086370)
#define CLASS_1_C3731CA59A8EA980__CTOR_OFFSET UNITYSDK_OFFSET(0x18086360)

inline static constexpr unsigned int Class_1_C3731CA59A8EA980_TypeDefinitionIndex = 40181;

class Class_1_C3731CA59A8EA980 : public ::System::Object
{
public:
	static ::MoleMole::SkinMapAnimationClipData** StaticGet_Field_1_0()
	{
		return (::MoleMole::SkinMapAnimationClipData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3731CA59A8EA980_TypeDefinitionIndex)->GetStaticField(0x3D6C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle>>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3731CA59A8EA980_TypeDefinitionIndex)->GetStaticField(0x3D6C8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_9F88E35FE931B81A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_METHOD_1_9F88E35FE931B81A_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_8C1351449838A709(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_METHOD_1_8C1351449838A709_OFFSET))(a1);
	}

	static ::System::Void Method_1_11CCB148E7603C47(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_METHOD_1_11CCB148E7603C47_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationClip* Method_1_1A7E4F2AB3720D6E(::System::String* a1)
	{
		return ((::UnityEngine::AnimationClip*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_METHOD_1_1A7E4F2AB3720D6E_OFFSET))(a1);
	}
};
