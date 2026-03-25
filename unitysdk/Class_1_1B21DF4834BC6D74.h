#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class EventHandler; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine::Events { class UnityEventBase; }

#define CLASS_1_1B21DF4834BC6D74_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x18389480)
#define CLASS_1_1B21DF4834BC6D74_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x18389510)
#define CLASS_1_1B21DF4834BC6D74_METHOD_1_11A1C4DD280FAD83_OFFSET UNITYSDK_OFFSET(0x18389410)
#define CLASS_1_1B21DF4834BC6D74_METHOD_1_696069542463DCB7_OFFSET UNITYSDK_OFFSET(0x18389300)
#define CLASS_1_1B21DF4834BC6D74_METHOD_1_8CCB07639A05D95D_OFFSET UNITYSDK_OFFSET(0x18389660)
#define CLASS_1_1B21DF4834BC6D74_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x18389390)
#define CLASS_1_1B21DF4834BC6D74_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x18389380)
#define CLASS_1_1B21DF4834BC6D74_METHOD_1_BDE09E9911BF904B_OFFSET UNITYSDK_OFFSET(0x183892A0)
#define CLASS_1_1B21DF4834BC6D74_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x18389570)
#define CLASS_1_1B21DF4834BC6D74_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x18389600)
#define CLASS_1_1B21DF4834BC6D74__CTOR_OFFSET UNITYSDK_OFFSET(0x183890A0)
#define CLASS_1_1B21DF4834BC6D74___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x183896E0)
#define CLASS_1_1B21DF4834BC6D74___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x183897E0)

inline static constexpr unsigned int Class_1_1B21DF4834BC6D74_TypeDefinitionIndex = 33985;

class Class_1_1B21DF4834BC6D74 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::System::EventHandler* _ValueChanged; // 0x18
	::System::Reflection::PropertyInfo* Field_1_1; // 0x20

	::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2, ::UnityEngine::Events::UnityEventBase* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Type* Method_1_BDE09E9911BF904B()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_METHOD_1_BDE09E9911BF904B_OFFSET))(this);
	}

	::System::TypeCode Method_1_696069542463DCB7()
	{
		return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_METHOD_1_696069542463DCB7_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Object* Method_1_11A1C4DD280FAD83()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_METHOD_1_11A1C4DD280FAD83_OFFSET))(this);
	}

	::System::Void add_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_ADD_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_REMOVE_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CCB07639A05D95D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_METHOD_1_8CCB07639A05D95D_OFFSET))(this);
	}

	::System::Void add__ValueChanged(::System::EventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_ADD__VALUECHANGED_OFFSET))(this, value);
	}

	::System::Void remove__ValueChanged(::System::EventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74_REMOVE__VALUECHANGED_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0(::System::String* arg)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74___CTOR_B__0_0_OFFSET))(this, arg);
	}

	::System::Void __ctor_b__0_1(::System::Single arg)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B21DF4834BC6D74___CTOR_B__0_1_OFFSET))(this, arg);
	}
};
