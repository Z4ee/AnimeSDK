#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_2AAF5619DF8BB0A0_METHOD_1_0181246866A06A6F_OFFSET UNITYSDK_OFFSET(0xBA614C0)
#define CLASS_1_2AAF5619DF8BB0A0_METHOD_1_30B183C31DC207F9_OFFSET UNITYSDK_OFFSET(0xBA612E0)
#define CLASS_1_2AAF5619DF8BB0A0_METHOD_1_46A10152DA142E40_OFFSET UNITYSDK_OFFSET(0xBA60D80)
#define CLASS_1_2AAF5619DF8BB0A0_METHOD_1_749B2F0B607DB78C_OFFSET UNITYSDK_OFFSET(0xBA61050)
#define CLASS_1_2AAF5619DF8BB0A0_METHOD_1_853A2C9CDA92EFA1_OFFSET UNITYSDK_OFFSET(0xBA61810)
#define CLASS_1_2AAF5619DF8BB0A0_METHOD_1_994DF2D990A20287_OFFSET UNITYSDK_OFFSET(0xBA611C0)
#define CLASS_1_2AAF5619DF8BB0A0_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0xBA61160)
#define CLASS_1_2AAF5619DF8BB0A0_METHOD_1_F9F3136523DD73B7_OFFSET UNITYSDK_OFFSET(0xBA61760)
#define CLASS_1_2AAF5619DF8BB0A0__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA618A0)
#define CLASS_1_2AAF5619DF8BB0A0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA61890)

inline static constexpr unsigned int Class_1_2AAF5619DF8BB0A0_TypeDefinitionIndex = 49689;

class Class_1_2AAF5619DF8BB0A0 : public ::System::Object
{
public:
	static ::System::String** StaticGet_FALPBECEDDN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AAF5619DF8BB0A0_TypeDefinitionIndex)->GetStaticField(0x52840);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_46A10152DA142E40(::UnityEngine::AnimationCurve* a1, ::Il2CppArray<::UnityEngine::Keyframe>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0_METHOD_1_46A10152DA142E40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_749B2F0B607DB78C(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0_METHOD_1_749B2F0B607DB78C_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_DB11C736C0498425(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0_METHOD_1_DB11C736C0498425_OFFSET))(a1);
	}

	static ::System::String* Method_1_994DF2D990A20287(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0_METHOD_1_994DF2D990A20287_OFFSET))(a1);
	}

	static ::System::String* Method_1_30B183C31DC207F9(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0_METHOD_1_30B183C31DC207F9_OFFSET))(a1);
	}

	static ::System::String* Method_1_0181246866A06A6F(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0_METHOD_1_0181246866A06A6F_OFFSET))(a1);
	}

	static ::System::Void Method_1_F9F3136523DD73B7(::System::Single& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0_METHOD_1_F9F3136523DD73B7_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_853A2C9CDA92EFA1(::System::Type* a1, ::System::String* a2, ::System::Reflection::BindingFlags a3)
	{
		return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + CLASS_1_2AAF5619DF8BB0A0_METHOD_1_853A2C9CDA92EFA1_OFFSET))(a1, a2, a3);
	}
};
