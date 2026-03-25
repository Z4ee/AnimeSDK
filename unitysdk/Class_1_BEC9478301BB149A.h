#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_BEC9478301BB149A_METHOD_1_0181246866A06A6F_OFFSET UNITYSDK_OFFSET(0x113D3E80)
#define CLASS_1_BEC9478301BB149A_METHOD_1_30B183C31DC207F9_OFFSET UNITYSDK_OFFSET(0x113D3CD0)
#define CLASS_1_BEC9478301BB149A_METHOD_1_46A10152DA142E40_OFFSET UNITYSDK_OFFSET(0x113D3790)
#define CLASS_1_BEC9478301BB149A_METHOD_1_57C78B11685475F8_OFFSET UNITYSDK_OFFSET(0x113D41F0)
#define CLASS_1_BEC9478301BB149A_METHOD_1_74505E341CB9A5FE_OFFSET UNITYSDK_OFFSET(0x113D3BE0)
#define CLASS_1_BEC9478301BB149A_METHOD_1_749B2F0B607DB78C_OFFSET UNITYSDK_OFFSET(0x113D3A70)
#define CLASS_1_BEC9478301BB149A_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x113D3B80)
#define CLASS_1_BEC9478301BB149A_METHOD_1_F9F3136523DD73B7_OFFSET UNITYSDK_OFFSET(0x113D4140)
#define CLASS_1_BEC9478301BB149A__CCTOR_OFFSET UNITYSDK_OFFSET(0x113D42C0)
#define CLASS_1_BEC9478301BB149A__CTOR_OFFSET UNITYSDK_OFFSET(0x113D42B0)

inline static constexpr unsigned int Class_1_BEC9478301BB149A_TypeDefinitionIndex = 39952;

class Class_1_BEC9478301BB149A : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEC9478301BB149A_TypeDefinitionIndex)->GetStaticField(0x30550);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_46A10152DA142E40(::UnityEngine::AnimationCurve* a1, ::Il2CppArray<::UnityEngine::Keyframe>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A_METHOD_1_46A10152DA142E40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_749B2F0B607DB78C(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A_METHOD_1_749B2F0B607DB78C_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_DB11C736C0498425(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A_METHOD_1_DB11C736C0498425_OFFSET))(a1);
	}

	static ::System::String* Method_1_74505E341CB9A5FE(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A_METHOD_1_74505E341CB9A5FE_OFFSET))(a1);
	}

	static ::System::String* Method_1_30B183C31DC207F9(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A_METHOD_1_30B183C31DC207F9_OFFSET))(a1);
	}

	static ::System::String* Method_1_0181246866A06A6F(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A_METHOD_1_0181246866A06A6F_OFFSET))(a1);
	}

	static ::System::Void Method_1_F9F3136523DD73B7(::System::Single& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A_METHOD_1_F9F3136523DD73B7_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_57C78B11685475F8(::System::Type* a1, ::System::String* a2, ::System::Reflection::BindingFlags a3)
	{
		return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + CLASS_1_BEC9478301BB149A_METHOD_1_57C78B11685475F8_OFFSET))(a1, a2, a3);
	}
};
