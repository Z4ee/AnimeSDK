#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class EventHandler; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine::Events { class UnityEventBase; }

#define CLASS_1_1ED6945164C673C9_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D0E9890)
#define CLASS_1_1ED6945164C673C9_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D0E9920)
#define CLASS_1_1ED6945164C673C9_METHOD_1_02E604F83E196B5E_OFFSET UNITYSDK_OFFSET(0x1D0E9550)
#define CLASS_1_1ED6945164C673C9_METHOD_1_47B047590A4850CC_OFFSET UNITYSDK_OFFSET(0x1D0E9690)
#define CLASS_1_1ED6945164C673C9_METHOD_1_5AE65BC66F5834C0_OFFSET UNITYSDK_OFFSET(0x1D0E96D0)
#define CLASS_1_1ED6945164C673C9_METHOD_1_6F7C2263C5F02CBC_OFFSET UNITYSDK_OFFSET(0x1D0E97B0)
#define CLASS_1_1ED6945164C673C9_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1D0E9A70)
#define CLASS_1_1ED6945164C673C9_METHOD_1_DAB8FA6A764B2239_OFFSET UNITYSDK_OFFSET(0x1D0E9490)
#define CLASS_1_1ED6945164C673C9_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D0E9980)
#define CLASS_1_1ED6945164C673C9_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D0E9A10)
#define CLASS_1_1ED6945164C673C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E1E40)
#define CLASS_1_1ED6945164C673C9___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1D0E9B00)
#define CLASS_1_1ED6945164C673C9___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1D0E9C00)

inline static constexpr unsigned int Class_1_1ED6945164C673C9_TypeDefinitionIndex = 41432;

class Class_1_1ED6945164C673C9 : public ::System::Object
{
public:
	::System::EventHandler* _ValueChanged; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::Reflection::PropertyInfo* Field_1_2; // 0x20

	::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2, ::UnityEngine::Events::UnityEventBase* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Type* Method_1_DAB8FA6A764B2239()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_DAB8FA6A764B2239_OFFSET))(this);
	}

	::System::TypeCode Method_1_02E604F83E196B5E()
	{
		return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_02E604F83E196B5E_OFFSET))(this);
	}

	::System::Object* Method_1_47B047590A4850CC()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_47B047590A4850CC_OFFSET))(this);
	}

	::System::Void Method_1_5AE65BC66F5834C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_5AE65BC66F5834C0_OFFSET))(this, a1);
	}

	::System::Object* Method_1_6F7C2263C5F02CBC()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_6F7C2263C5F02CBC_OFFSET))(this);
	}

	::System::Void add_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_ADD_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_REMOVE_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void add__ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_ADD__VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove__ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_REMOVE__VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void __ctor_b__0_0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9___CTOR_B__0_0_OFFSET))(this, a1);
	}

	::System::Void __ctor_b__0_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9___CTOR_B__0_1_OFFSET))(this, a1);
	}
};
