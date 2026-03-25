#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6BA34772501795D1_Class_1_DAFDA1094F16A2EB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define CLASS_1_6BA34772501795D1_METHOD_1_0B34AA51B95C62BE_OFFSET UNITYSDK_OFFSET(0x8A28840)
#define CLASS_1_6BA34772501795D1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x8A288C0)
#define CLASS_1_6BA34772501795D1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8A288B0)
#define CLASS_1_6BA34772501795D1_METHOD_1_5ADE4FAA998EDA7E_OFFSET UNITYSDK_OFFSET(0x8A28640)
#define CLASS_1_6BA34772501795D1_METHOD_1_D6F8AD270782B8B6_1_OFFSET UNITYSDK_OFFSET(0x8A285A0)
#define CLASS_1_6BA34772501795D1_METHOD_1_D6F8AD270782B8B6_OFFSET UNITYSDK_OFFSET(0x8A282C0)
#define CLASS_1_6BA34772501795D1_METHOD_1_EE5D71FBB4261BF2_OFFSET UNITYSDK_OFFSET(0x8A288D0)
#define CLASS_1_6BA34772501795D1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A28360)
#define CLASS_1_6BA34772501795D1___INIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x8A288E0)

inline static constexpr unsigned int Class_1_6BA34772501795D1_TypeDefinitionIndex = 59871;

class Class_1_6BA34772501795D1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_6BA34772501795D1_Class_1_DAFDA1094F16A2EB*>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_1; // 0x30

	::System::Void _ctor(::XLua::LuaTable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_6BA34772501795D1* Method_1_D6F8AD270782B8B6(::XLua::LuaTable* a1)
	{
		return ((::Class_1_6BA34772501795D1*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_METHOD_1_D6F8AD270782B8B6_OFFSET))(a1);
	}

	static ::Class_1_6BA34772501795D1* Method_1_D6F8AD270782B8B6_1(::XLua::LuaTable* a1)
	{
		return ((::Class_1_6BA34772501795D1*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_METHOD_1_D6F8AD270782B8B6_1_OFFSET))(a1);
	}

	::System::Void Method_1_5ADE4FAA998EDA7E(::XLua::LuaTable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_METHOD_1_5ADE4FAA998EDA7E_OFFSET))(this, a1);
	}

	::System::String* Method_1_0B34AA51B95C62BE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_METHOD_1_0B34AA51B95C62BE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_6BA34772501795D1_Class_1_DAFDA1094F16A2EB*>* Method_1_EE5D71FBB4261BF2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_6BA34772501795D1_Class_1_DAFDA1094F16A2EB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_METHOD_1_EE5D71FBB4261BF2_OFFSET))(this);
	}

	::System::Void __Init_b__3_0(::System::Object* k, ::System::Object* v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1___INIT_B__3_0_OFFSET))(this, k, v);
	}
};
