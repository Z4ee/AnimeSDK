#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class EventHandler; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine::Events { class UnityEventBase; }

#define CLASS_1_1ED6945164C673C9_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC37A30)
#define CLASS_1_1ED6945164C673C9_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC37AC0)
#define CLASS_1_1ED6945164C673C9_METHOD_1_11A1C4DD280FAD83_OFFSET UNITYSDK_OFFSET(0x1AC379C0)
#define CLASS_1_1ED6945164C673C9_METHOD_1_696069542463DCB7_OFFSET UNITYSDK_OFFSET(0x1AC378B0)
#define CLASS_1_1ED6945164C673C9_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1AC37C10)
#define CLASS_1_1ED6945164C673C9_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1AC37940)
#define CLASS_1_1ED6945164C673C9_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x1AC37930)
#define CLASS_1_1ED6945164C673C9_METHOD_1_BDE09E9911BF904B_OFFSET UNITYSDK_OFFSET(0x1AC37850)
#define CLASS_1_1ED6945164C673C9_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC37B20)
#define CLASS_1_1ED6945164C673C9_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC37BB0)
#define CLASS_1_1ED6945164C673C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC30B00)
#define CLASS_1_1ED6945164C673C9___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1AC37CA0)
#define CLASS_1_1ED6945164C673C9___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1AC37DA0)

inline static constexpr unsigned int Class_1_1ED6945164C673C9_TypeDefinitionIndex = 40617;

class Class_1_1ED6945164C673C9 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::System::EventHandler* _ValueChanged; // 0x18
	::System::Reflection::PropertyInfo* Field_1_2; // 0x20

	::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2, ::UnityEngine::Events::UnityEventBase* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Type* Method_1_BDE09E9911BF904B()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_BDE09E9911BF904B_OFFSET))(this);
	}

	::System::TypeCode Method_1_696069542463DCB7()
	{
		return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_696069542463DCB7_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Object* Method_1_11A1C4DD280FAD83()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ED6945164C673C9_METHOD_1_11A1C4DD280FAD83_OFFSET))(this);
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
