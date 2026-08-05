#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_5_768A3918946D2F06___C_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0x12DAE720)
#define CLASS_5_768A3918946D2F06___C_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x12DAEE20)
#define CLASS_5_768A3918946D2F06___C_METHOD_1_6660E692D9A5BA8C_OFFSET UNITYSDK_OFFSET(0x12DAE830)
#define CLASS_5_768A3918946D2F06___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DAE6D0)
#define CLASS_5_768A3918946D2F06___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12DAE710)

inline static constexpr unsigned int Class_5_768A3918946D2F06___c_TypeDefinitionIndex = 46035;

class Class_5_768A3918946D2F06___c : public ::System::Object
{
public:
	static ::Class_5_768A3918946D2F06___c** StaticGet___9()
	{
		return (::Class_5_768A3918946D2F06___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_768A3918946D2F06___c_TypeDefinitionIndex)->GetStaticField(0x420E0);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_768A3918946D2F06___c_TypeDefinitionIndex)->GetStaticField(0x420E8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_768A3918946D2F06___c_TypeDefinitionIndex)->GetStaticField(0x420F0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__1_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_5_768A3918946D2F06___c_TypeDefinitionIndex)->GetStaticField(0x420F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06___C_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_6660E692D9A5BA8C()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06___C_METHOD_1_6660E692D9A5BA8C_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06___C_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}
};
