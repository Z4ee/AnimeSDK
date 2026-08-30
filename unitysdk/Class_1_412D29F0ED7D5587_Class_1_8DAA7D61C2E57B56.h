#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_GET_CALLBACKS_OFFSET UNITYSDK_OFFSET(0x17052FB0)
#define CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x17052FA0)
#define CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x17053380)
#define CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x17052FC0)
#define CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x170533F0)
#define CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56__CTOR_OFFSET UNITYSDK_OFFSET(0x17052C90)

inline static constexpr unsigned int Class_1_412D29F0ED7D5587_Class_1_8DAA7D61C2E57B56_TypeDefinitionIndex = 69232;

class Class_1_412D29F0ED7D5587_Class_1_8DAA7D61C2E57B56 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4*>* _Callbacks_k__BackingField; // 0x10
	::System::String* _PrefabPath_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4*))((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4*>* get_Callbacks()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_GET_CALLBACKS_OFFSET))(this);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_CLASS_1_8DAA7D61C2E57B56_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}
};
