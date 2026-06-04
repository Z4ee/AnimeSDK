#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JSONOBJECT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x187FA770)
#define JSONOBJECT_GETCMD_OFFSET UNITYSDK_OFFSET(0x187FA410)
#define JSONOBJECT_GETDICTVALUE_OFFSET UNITYSDK_OFFSET(0x187FA4D0)
#define JSONOBJECT_GETENUM_OFFSET UNITYSDK_OFFSET(0x187FAAF0)
#define JSONOBJECT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x187FA950)
#define JSONOBJECT_GETINT_OFFSET UNITYSDK_OFFSET(0x187FA860)
#define JSONOBJECT_GETJSONDICT_OFFSET UNITYSDK_OFFSET(0x187FA5F0)
#define JSONOBJECT_GETJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x187FA720)
#define JSONOBJECT_GETLISTJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x187FAC70)
#define JSONOBJECT_GETSTRING_OFFSET UNITYSDK_OFFSET(0x187FAA40)
#define JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x187FA320)
#define JSONOBJECT_KEYEXIST_OFFSET UNITYSDK_OFFSET(0x187FA570)
#define JSONOBJECT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x187FA4B0)
#define JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x187FA3A0)
#define JSONOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187FA2A0)
#define JSONOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x187FA310)
#define JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x187FA220)

inline static constexpr unsigned int JsonObject_TypeDefinitionIndex = 38374;

class JsonObject : public ::UnityEngine::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* objectDict; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONOBJECT__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + JSONOBJECT__CTOR_2_OFFSET))(this, a1);
	}

	::System::Object* get_Item(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GET_ITEM_OFFSET))(this, a1);
	}

	::System::Void set_Item(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + JSONOBJECT_SET_ITEM_OFFSET))(this, a1, a2);
	}

	::System::String* getCmd()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONOBJECT_GETCMD_OFFSET))(this);
	}

	::System::String* Serialize()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONOBJECT_SERIALIZE_OFFSET))(this);
	}

	::System::Object* GetDictValue(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETDICTVALUE_OFFSET))(this, a1);
	}

	::System::Boolean KeyExist(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_KEYEXIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GetJsonDict(::System::String* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETJSONDICT_OFFSET))(this, a1);
	}

	::JsonObject* GetJsonObject(::System::String* a1)
	{
		return ((::JsonObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETJSONOBJECT_OFFSET))(this, a1);
	}

	::System::Boolean GetBool(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETBOOL_OFFSET))(this, a1);
	}

	::System::Int32 GetInt(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETINT_OFFSET))(this, a1);
	}

	::System::Single GetFloat(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETFLOAT_OFFSET))(this, a1);
	}

	::System::String* GetString(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETSTRING_OFFSET))(this, a1);
	}

	::System::Object* GetEnum(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETENUM_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::JsonObject*>* GetListJsonObject(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::JsonObject*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETLISTJSONOBJECT_OFFSET))(this, a1);
	}
};
