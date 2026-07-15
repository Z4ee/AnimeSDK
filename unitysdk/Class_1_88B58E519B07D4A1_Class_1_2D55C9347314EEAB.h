#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_GET_CALLBACKS_OFFSET UNITYSDK_OFFSET(0x15EE0DA0)
#define CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x15EE0D90)
#define CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x15EE1190)
#define CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x15EE0DB0)
#define CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x15EE1230)
#define CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE0A20)

inline static constexpr unsigned int Class_1_88B58E519B07D4A1_Class_1_2D55C9347314EEAB_TypeDefinitionIndex = 66190;

class Class_1_88B58E519B07D4A1_Class_1_2D55C9347314EEAB : public ::System::Object
{
public:
	::System::String* _PrefabPath_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4*>* _Callbacks_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4*))((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4*>* get_Callbacks()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_GET_CALLBACKS_OFFSET))(this);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_CLASS_1_2D55C9347314EEAB_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}
};
