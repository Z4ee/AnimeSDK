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

#define RPG_CLIENT_PREFGROUP_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1D2CDF20)
#define RPG_CLIENT_PREFGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D2CDCB0)
#define RPG_CLIENT_PREFGROUP_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x1D2CDEA0)
#define RPG_CLIENT_PREFGROUP_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D2CDB50)
#define RPG_CLIENT_PREFGROUP_GETPREFKEY_OFFSET UNITYSDK_OFFSET(0x1D2CE1F0)
#define RPG_CLIENT_PREFGROUP_HASPREF_OFFSET UNITYSDK_OFFSET(0x1D2CE170)
#define RPG_CLIENT_PREFGROUP_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1D2CD8B0)
#define RPG_CLIENT_PREFGROUP_SETSERVERPREFRELOAD_OFFSET UNITYSDK_OFFSET(0x1D2CE050)
#define RPG_CLIENT_PREFGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CDAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PrefGroup_TypeDefinitionIndex = 33891;

	class PrefGroup : public ::System::Object
	{
	public:
		::System::String* _Name; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Pref*>* _Prefs; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP__CTOR_OFFSET))(this, a1);
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

		::System::Void Flush_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_FLUSH_1_OFFSET))(this, a1);
		}

		::System::Void Clear_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_CLEAR_1_OFFSET))(this, a1);
		}

		::System::Void SetServerPrefReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_SETSERVERPREFRELOAD_OFFSET))(this);
		}

		::System::Boolean HasPref(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_HASPREF_OFFSET))(this, a1);
		}

		::System::String* GetPrefKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFGROUP_GETPREFKEY_OFFSET))(this, a1);
		}
	};
}
