#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_5.h"

namespace RPG::Client { class CloudPlayerPrefs_Data; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CLIENT_CLOUDPLAYERPREFS_DELETEKEY_OFFSET UNITYSDK_OFFSET(0xA0A9F30)
#define RPG_CLIENT_CLOUDPLAYERPREFS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0A9380)
#define RPG_CLIENT_CLOUDPLAYERPREFS_FLUSH_OFFSET UNITYSDK_OFFSET(0xA0AA000)
#define RPG_CLIENT_CLOUDPLAYERPREFS_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0xA0AA9B0)
#define RPG_CLIENT_CLOUDPLAYERPREFS_LOAD_OFFSET UNITYSDK_OFFSET(0xA0A9630)
#define RPG_CLIENT_CLOUDPLAYERPREFS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0A9300)
#define RPG_CLIENT_CLOUDPLAYERPREFS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0AA9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CloudPlayerPrefs_TypeDefinitionIndex = 54677;

	class CloudPlayerPrefs : public ::Class_1_43BD383C98B4C0C5_5
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

		::System::Void Deserialize(::System::String* serializeString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_DESERIALIZE_OFFSET))(this, serializeString);
		}

		::System::Void Load(::System::String* key, ::System::Type* type, ::System::Object*& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_LOAD_OFFSET))(this, key, type, value);
		}

		::System::Void DeleteKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_DELETEKEY_OFFSET))(this, key);
		}

		::System::Void Flush(::System::String* key, ::System::Type* type, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_FLUSH_OFFSET))(this, key, type, value);
		}

		::System::Boolean get_IsPartialSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_GET_ISPARTIALSAVE_OFFSET))(this);
		}
	};
}
