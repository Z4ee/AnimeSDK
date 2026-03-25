#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Pref; }
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client { template <typename T> class PrefList_1; }
namespace RPG::Client { template <typename T> class Pref_1; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PREFGROUP_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x18344CD0)
#define RPG_CLIENT_PREFGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x18344AC0)
#define RPG_CLIENT_PREFGROUP_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x18344C40)
#define RPG_CLIENT_PREFGROUP_FLUSH_OFFSET UNITYSDK_OFFSET(0x18344960)
#define RPG_CLIENT_PREFGROUP_GETPREFKEY_OFFSET UNITYSDK_OFFSET(0x18344F40)
#define RPG_CLIENT_PREFGROUP_HASPREF_OFFSET UNITYSDK_OFFSET(0x18344EC0)
#define RPG_CLIENT_PREFGROUP_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x183446B0)
#define RPG_CLIENT_PREFGROUP_SETSERVERPREFRELOAD_OFFSET UNITYSDK_OFFSET(0x18344DA0)
#define RPG_CLIENT_PREFGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x183448E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PrefGroup_TypeDefinitionIndex = 9554;

	class PrefGroup : public ::System::Object
	{
	public:
		::System::String* _Name; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Pref*>* _Prefs; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP__CTOR_OFFSET))(this, name);
		}

		::System::Boolean IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_ISDIRTY_OFFSET))(this);
		}

		::System::Boolean Flush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_FLUSH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_CLEAR_OFFSET))(this);
		}

		::System::Void Flush_1(::System::String* prefName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_FLUSH_1_OFFSET))(this, prefName);
		}

		::System::Void Clear_1(::System::String* prefName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_CLEAR_1_OFFSET))(this, prefName);
		}

		::System::Void SetServerPrefReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_SETSERVERPREFRELOAD_OFFSET))(this);
		}

		::System::Boolean HasPref(::System::String* prefName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_HASPREF_OFFSET))(this, prefName);
		}

		::System::String* GetPrefKey(::System::String* prefName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_GETPREFKEY_OFFSET))(this, prefName);
		}
	};
}
