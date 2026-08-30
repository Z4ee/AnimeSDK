#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED6813C3C6A0CA52;
namespace RPG::Client { class ServerDispatchData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0C1B8B2E4F85A50B_GET_LUAREVISION_OFFSET UNITYSDK_OFFSET(0x1591EA10)
#define CLASS_1_0C1B8B2E4F85A50B_GET_LUATESTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1591EA30)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x1591EFF0)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_4C1A7CE92B89CB7C_OFFSET UNITYSDK_OFFSET(0x1591F090)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_5F90D86F03B598EE_OFFSET UNITYSDK_OFFSET(0x1591FE40)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET UNITYSDK_OFFSET(0x1591F840)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1591FB90)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_EA15CC30BC86B6C7_OFFSET UNITYSDK_OFFSET(0x1591FF00)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_EA6D328EF56CB9CB_OFFSET UNITYSDK_OFFSET(0x1591FF70)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_F7752AE6CC1E4291_OFFSET UNITYSDK_OFFSET(0x1591F350)
#define CLASS_1_0C1B8B2E4F85A50B_METHOD_1_FE12216A0FD81902_OFFSET UNITYSDK_OFFSET(0x1591FC30)
#define CLASS_1_0C1B8B2E4F85A50B_SET_LUAREVISION_OFFSET UNITYSDK_OFFSET(0x1591EA20)
#define CLASS_1_0C1B8B2E4F85A50B_SET_LUATESTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1591EA40)
#define CLASS_1_0C1B8B2E4F85A50B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15920060)
#define CLASS_1_0C1B8B2E4F85A50B__CTOR_OFFSET UNITYSDK_OFFSET(0x1591EA50)

inline static constexpr unsigned int Class_1_0C1B8B2E4F85A50B_TypeDefinitionIndex = 68268;

class Class_1_0C1B8B2E4F85A50B : public ::System::Object
{
public:
	static ::System::String** StaticGet_LBIJBILPPDE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C1B8B2E4F85A50B_TypeDefinitionIndex)->GetStaticField(0x64240);
	}
	static ::System::Boolean* StaticGet_NNDDLEMBIDP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C1B8B2E4F85A50B_TypeDefinitionIndex)->GetStaticField(0x14690);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* HGBMIPAEMOJ; // 0x10
	::System::String* _LuaTestClassName_k__BackingField; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* GLBHIKPFIHH; // 0x20
	::Class_1_ED6813C3C6A0CA52* LCGHJKFMIBI; // 0x28
	::System::UInt32 CLCNHJFFNNH; // 0x30
	::System::UInt32 ODBEEJHGNMN; // 0x34
	::System::Single MPLIIBHPGLG; // 0x38
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

	::System::Void Method_1_5F90D86F03B598EE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C1B8B2E4F85A50B_METHOD_1_5F90D86F03B598EE_OFFSET))(this, a1);
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
