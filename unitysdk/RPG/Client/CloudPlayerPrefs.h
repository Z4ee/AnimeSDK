#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_15.h"

namespace RPG::Client { class CloudPlayerPrefs_Data; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CLIENT_CLOUDPLAYERPREFS_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1AE111C0)
#define RPG_CLIENT_CLOUDPLAYERPREFS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AE10480)
#define RPG_CLIENT_CLOUDPLAYERPREFS_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AE112D0)
#define RPG_CLIENT_CLOUDPLAYERPREFS_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1AE11CD0)
#define RPG_CLIENT_CLOUDPLAYERPREFS_LOAD_OFFSET UNITYSDK_OFFSET(0x1AE10730)
#define RPG_CLIENT_CLOUDPLAYERPREFS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AE103D0)
#define RPG_CLIENT_CLOUDPLAYERPREFS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE11CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CloudPlayerPrefs_TypeDefinitionIndex = 56641;

	class CloudPlayerPrefs : public ::Class_1_43BD383C98B4C0C5_15
	{
	public:
		::RPG::Client::CloudPlayerPrefs_Data* _data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS__CTOR_OFFSET))(this);
		}

		::System::String* Serialize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_SERIALIZE_OFFSET))(this);
		}

		::System::Void Deserialize(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_LOAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_DELETEKEY_OFFSET))(this, a1);
		}

		::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_FLUSH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsPartialSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_GET_ISPARTIALSAVE_OFFSET))(this);
		}
	};
}
