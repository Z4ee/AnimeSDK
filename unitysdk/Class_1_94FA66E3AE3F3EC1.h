#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A81CAE591F78449;
namespace RPG::Client { class ServerDispatchData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_94FA66E3AE3F3EC1_GET_LUAREVISION_OFFSET UNITYSDK_OFFSET(0x8D79940)
#define CLASS_1_94FA66E3AE3F3EC1_GET_LUATESTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x8D79960)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_4C1A7CE92B89CB7C_OFFSET UNITYSDK_OFFSET(0x8D79F60)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x8D79EF0)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_8F5A2A12B49BDAE5_OFFSET UNITYSDK_OFFSET(0x8D7AD80)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_9BEAA89172351168_OFFSET UNITYSDK_OFFSET(0x8D7A210)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET UNITYSDK_OFFSET(0x8D7A750)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_C7DEB74AB4C33E39_OFFSET UNITYSDK_OFFSET(0x8D7AB40)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x8D7AAA0)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_EA15CC30BC86B6C7_OFFSET UNITYSDK_OFFSET(0x8D7AE20)
#define CLASS_1_94FA66E3AE3F3EC1_METHOD_1_EA6D328EF56CB9CB_OFFSET UNITYSDK_OFFSET(0x8D7AE90)
#define CLASS_1_94FA66E3AE3F3EC1_SET_LUAREVISION_OFFSET UNITYSDK_OFFSET(0x8D79950)
#define CLASS_1_94FA66E3AE3F3EC1_SET_LUATESTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x8D79970)
#define CLASS_1_94FA66E3AE3F3EC1__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D7AF80)
#define CLASS_1_94FA66E3AE3F3EC1__CTOR_OFFSET UNITYSDK_OFFSET(0x8D79980)

inline static constexpr unsigned int Class_1_94FA66E3AE3F3EC1_TypeDefinitionIndex = 55747;

class Class_1_94FA66E3AE3F3EC1 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94FA66E3AE3F3EC1_TypeDefinitionIndex)->GetStaticField(0x14340);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94FA66E3AE3F3EC1_TypeDefinitionIndex)->GetStaticField(0x5E70);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_9; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x18
	::System::String* _LuaTestClassName_k__BackingField; // 0x20
	::Class_1_0A81CAE591F78449* Field_1_2; // 0x28
	::System::Single Field_1_8; // 0x30
	::System::UInt32 Field_1_6; // 0x34
	::System::Int32 _LuaRevision_k__BackingField; // 0x38
	::System::UInt32 Field_1_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1__CCTOR_OFFSET))();
	}

	::System::Int32 get_LuaRevision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_GET_LUAREVISION_OFFSET))(this);
	}

	::System::Void set_LuaRevision(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_SET_LUAREVISION_OFFSET))(this, value);
	}

	::System::String* get_LuaTestClassName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_GET_LUATESTCLASSNAME_OFFSET))(this);
	}

	::System::Void set_LuaTestClassName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_SET_LUATESTCLASSNAME_OFFSET))(this, value);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_4C1A7CE92B89CB7C(::RPG::Client::ServerDispatchData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_4C1A7CE92B89CB7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BEAA89172351168(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_9BEAA89172351168_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C7DEB74AB4C33E39(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_C7DEB74AB4C33E39_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F5A2A12B49BDAE5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_8F5A2A12B49BDAE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA15CC30BC86B6C7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_EA15CC30BC86B6C7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EA6D328EF56CB9CB(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_EA6D328EF56CB9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8FA2BA3B5C0B3B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94FA66E3AE3F3EC1_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET))(this, a1);
	}
};
