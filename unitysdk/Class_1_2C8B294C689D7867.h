#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2C8B294C689D7867_Class_1_BC907A4E05DDB04A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define CLASS_1_2C8B294C689D7867_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0x179AB750)
#define CLASS_1_2C8B294C689D7867_METHOD_1_0B34AA51B95C62BE_OFFSET UNITYSDK_OFFSET(0x179AB660)
#define CLASS_1_2C8B294C689D7867_METHOD_1_5ADE4FAA998EDA7E_OFFSET UNITYSDK_OFFSET(0x179AB450)
#define CLASS_1_2C8B294C689D7867_METHOD_1_D6F8AD270782B8B6_1_OFFSET UNITYSDK_OFFSET(0x179AB3B0)
#define CLASS_1_2C8B294C689D7867_METHOD_1_D6F8AD270782B8B6_OFFSET UNITYSDK_OFFSET(0x179AB0D0)
#define CLASS_1_2C8B294C689D7867_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x179AB710)
#define CLASS_1_2C8B294C689D7867_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x179AB6D0)
#define CLASS_1_2C8B294C689D7867__CTOR_OFFSET UNITYSDK_OFFSET(0x179AB170)
#define CLASS_1_2C8B294C689D7867___INIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x179AB790)

inline static constexpr unsigned int Class_1_2C8B294C689D7867_TypeDefinitionIndex = 72964;

class Class_1_2C8B294C689D7867 : public ::System::Object
{
public:
	::System::String* HAMGKGDFKFK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_2C8B294C689D7867_Class_1_BC907A4E05DDB04A*>* BLICIKDLKOC; // 0x18
	::System::String* AJDOEJPFFBF; // 0x20
	::System::String* JDIEAOBPPGL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* EKEIGOABEJN; // 0x30

	::System::Void _ctor(::XLua::LuaTable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_2C8B294C689D7867* Method_1_D6F8AD270782B8B6(::XLua::LuaTable* a1)
	{
		return ((::Class_1_2C8B294C689D7867*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_METHOD_1_D6F8AD270782B8B6_OFFSET))(a1);
	}

	static ::Class_1_2C8B294C689D7867* Method_1_D6F8AD270782B8B6_1(::XLua::LuaTable* a1)
	{
		return ((::Class_1_2C8B294C689D7867*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_METHOD_1_D6F8AD270782B8B6_1_OFFSET))(a1);
	}

	::System::Void Method_1_5ADE4FAA998EDA7E(::XLua::LuaTable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_METHOD_1_5ADE4FAA998EDA7E_OFFSET))(this, a1);
	}

	::System::String* Method_1_0B34AA51B95C62BE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_METHOD_1_0B34AA51B95C62BE_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_METHOD_1_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_2C8B294C689D7867_Class_1_BC907A4E05DDB04A*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2C8B294C689D7867_Class_1_BC907A4E05DDB04A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	::System::Void __Init_b__3_0(::System::Object* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867___INIT_B__3_0_OFFSET))(this, a1, a2);
	}
};
