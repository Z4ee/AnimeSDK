#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED6813C3C6A0CA52;
namespace RPG::Client { class ServerDispatchData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0C1B8B2E4F85A50B_GET_LUAREVISION_OFFSET UNITYSDK_OFFSET(0x16F7DAD0)
#define CLASS_1_0C1B8B2E4F85A50B_GET_LUATESTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x16F7DAF0)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x16F7E090)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_4C1A7CE92B89CB7C_OFFSET UNITYSDK_OFFSET(0x16F7E130)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_8F5A2A12B49BDAE5_OFFSET UNITYSDK_OFFSET(0x16F7EED0)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET UNITYSDK_OFFSET(0x16F7E8D0)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16F7EC20)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_EA15CC30BC86B6C7_OFFSET UNITYSDK_OFFSET(0x16F7EF70)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_EA6D328EF56CB9CB_OFFSET UNITYSDK_OFFSET(0x16F7EFE0)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_F7752AE6CC1E4291_OFFSET UNITYSDK_OFFSET(0x16F7E3E0)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_FE12216A0FD81902_OFFSET UNITYSDK_OFFSET(0x16F7ECC0)
#define CLASS_1_0C1B8B2E4F85A50B_SET_LUAREVISION_OFFSET UNITYSDK_OFFSET(0x16F7DAE0)
#define CLASS_1_0C1B8B2E4F85A50B_SET_LUATESTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x16F7DB00)
#define CLASS_1_0C1B8B2E4F85A50B__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F7F0D0)
#define CLASS_1_0C1B8B2E4F85A50B__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7DB10)

inline static constexpr unsigned int Class_1_0C1B8B2E4F85A50B_TypeDefinitionIndex = 65256;

class Class_1_0C1B8B2E4F85A50B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C1B8B2E4F85A50B_TypeDefinitionIndex)->GetStaticField(0x40090);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C1B8B2E4F85A50B_TypeDefinitionIndex)->GetStaticField(0xAB60);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x10
	::System::String* _LuaTestClassName_k__BackingField; // 0x18
	::Class_1_ED6813C3C6A0CA52* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_5; // 0x28
	::System::UInt32 Field_1_6; // 0x30
	::System::Single Field_1_7; // 0x34
	::System::UInt32 Field_1_8; // 0x38
	::System::Int32 _LuaRevision_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B__CCTOR_OFFSET))();
	}

	::System::Int32 get_LuaRevision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_GET_LUAREVISION_OFFSET))(this);
	}

	::System::Void set_LuaRevision(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_SET_LUAREVISION_OFFSET))(this, a1);
	}

	::System::String* get_LuaTestClassName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_GET_LUATESTCLASSNAME_OFFSET))(this);
	}

	::System::Void set_LuaTestClassName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_SET_LUATESTCLASSNAME_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_4C1A7CE92B89CB7C(::RPG::Client::ServerDispatchData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_4C1A7CE92B89CB7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7752AE6CC1E4291(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_F7752AE6CC1E4291_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_FE12216A0FD81902(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_FE12216A0FD81902_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F5A2A12B49BDAE5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_8F5A2A12B49BDAE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA15CC30BC86B6C7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_EA15CC30BC86B6C7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EA6D328EF56CB9CB(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_EA6D328EF56CB9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8FA2BA3B5C0B3B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET))(this, a1);
	}
};
