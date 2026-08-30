#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JSONOBJECT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x1EFF9840)
#define JSONOBJECT_GETCMD_OFFSET UNITYSDK_OFFSET(0x1EFF94E0)
#define JSONOBJECT_GETDICTVALUE_OFFSET UNITYSDK_OFFSET(0x1EFF95A0)
#define JSONOBJECT_GETENUM_OFFSET UNITYSDK_OFFSET(0x1EFF9D60)
#define JSONOBJECT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1EFF9AF0)
#define JSONOBJECT_GETINT_OFFSET UNITYSDK_OFFSET(0x1EFF99A0)
#define JSONOBJECT_GETJSONDICT_OFFSET UNITYSDK_OFFSET(0x1EFF96C0)
#define JSONOBJECT_GETJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x1EFF97F0)
#define JSONOBJECT_GETLISTJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x1EFF9EE0)
#define JSONOBJECT_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1EFF9C50)
#define JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EFF93F0)
#define JSONOBJECT_KEYEXIST_OFFSET UNITYSDK_OFFSET(0x1EFF9640)
#define JSONOBJECT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EFF9580)
#define JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EFF9470)
#define JSONOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFF9370)
#define JSONOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EFF93E0)
#define JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF92F0)

inline static constexpr unsigned int JsonObject_TypeDefinitionIndex = 40041;

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
