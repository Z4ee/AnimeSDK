#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF4B5A5883D64888_Class_1_BC907A4E05DDB04A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define CLASS_1_BF4B5A5883D64888_METHOD_1_0B34AA51B95C62BE_OFFSET UNITYSDK_OFFSET(0x136D4000)
#define CLASS_1_BF4B5A5883D64888_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x136D4080)
#define CLASS_1_BF4B5A5883D64888_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x136D4070)
#define CLASS_1_BF4B5A5883D64888_METHOD_1_5ADE4FAA998EDA7E_OFFSET UNITYSDK_OFFSET(0x136D3DF0)
#define CLASS_1_BF4B5A5883D64888_METHOD_1_D6F8AD270782B8B6_1_OFFSET UNITYSDK_OFFSET(0x136D3D50)
#define CLASS_1_BF4B5A5883D64888_METHOD_1_D6F8AD270782B8B6_OFFSET UNITYSDK_OFFSET(0x136D3A70)
#define CLASS_1_BF4B5A5883D64888_METHOD_1_EE5D71FBB4261BF2_OFFSET UNITYSDK_OFFSET(0x136D4090)
#define CLASS_1_BF4B5A5883D64888__CTOR_OFFSET UNITYSDK_OFFSET(0x136D3B10)
#define CLASS_1_BF4B5A5883D64888___INIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x136D40A0)

inline static constexpr unsigned int Class_1_BF4B5A5883D64888_TypeDefinitionIndex = 68220;

class Class_1_BF4B5A5883D64888 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BF4B5A5883D64888_Class_1_BC907A4E05DDB04A*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30

	::System::Void _ctor(::XLua::LuaTable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_BF4B5A5883D64888* Method_1_D6F8AD270782B8B6(::XLua::LuaTable* a1)
	{
		return ((::Class_1_BF4B5A5883D64888*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_METHOD_1_D6F8AD270782B8B6_OFFSET))(a1);
	}

	static ::Class_1_BF4B5A5883D64888* Method_1_D6F8AD270782B8B6_1(::XLua::LuaTable* a1)
	{
		return ((::Class_1_BF4B5A5883D64888*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_METHOD_1_D6F8AD270782B8B6_1_OFFSET))(a1);
	}

	::System::Void Method_1_5ADE4FAA998EDA7E(::XLua::LuaTable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_METHOD_1_5ADE4FAA998EDA7E_OFFSET))(this, a1);
	}

	::System::String* Method_1_0B34AA51B95C62BE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_METHOD_1_0B34AA51B95C62BE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_BF4B5A5883D64888_Class_1_BC907A4E05DDB04A*>* Method_1_EE5D71FBB4261BF2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BF4B5A5883D64888_Class_1_BC907A4E05DDB04A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_METHOD_1_EE5D71FBB4261BF2_OFFSET))(this);
	}

	::System::Void __Init_b__3_0(::System::Object* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888___INIT_B__3_0_OFFSET))(this, a1, a2);
	}
};
