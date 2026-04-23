#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E970EC5EEB7EA2D9;
namespace System { class String; }
namespace System { class Type; }

#define RPG_CLIENT_PREF_CHANGEPREFSWRAPPER_OFFSET UNITYSDK_OFFSET(0x19D9A380)
#define RPG_CLIENT_PREF_CHANGETOSERVERPREFS_OFFSET UNITYSDK_OFFSET(0x19D9A310)
#define RPG_CLIENT_PREF_CLEAR_OFFSET UNITYSDK_OFFSET(0x19D9A2C0)
#define RPG_CLIENT_PREF_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x19D9A3E0)
#define RPG_CLIENT_PREF_GET_KEY_OFFSET UNITYSDK_OFFSET(0x19D9A3D0)
#define RPG_CLIENT_PREF_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x19D9A300)
#define RPG_CLIENT_PREF_TRYSETSERVERPERFRELOAD_OFFSET UNITYSDK_OFFSET(0x19D9A390)
#define RPG_CLIENT_PREF__CTOR_OFFSET UNITYSDK_OFFSET(0x19D9A660)

namespace RPG::Client
{
	inline static constexpr unsigned int Pref_TypeDefinitionIndex = 9747;

	class Pref : public ::System::Object
	{
	public:
		::System::Object* _DefaultValue; // 0x10
		::System::Object* _Value; // 0x18
		::System::String* _Key; // 0x20
		::System::Type* _ValueType; // 0x28
		::Class_1_E970EC5EEB7EA2D9* _PlayerPrefs; // 0x30
		::System::Boolean _Loaded; // 0x38
		::System::Boolean _Dirty; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_CLEAR_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_SETDIRTY_OFFSET))(this);
		}

		::System::Void ChangeToServerPrefs(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_CHANGETOSERVERPREFS_OFFSET))(this, name);
		}

		::System::Void ChangePrefsWrapper(::Class_1_E970EC5EEB7EA2D9* wrapper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E970EC5EEB7EA2D9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_CHANGEPREFSWRAPPER_OFFSET))(this, wrapper);
		}

		::System::Void TrySetServerPerfReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_TRYSETSERVERPERFRELOAD_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_GET_KEY_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_GET_ISDIRTY_OFFSET))(this);
		}
	};
}
