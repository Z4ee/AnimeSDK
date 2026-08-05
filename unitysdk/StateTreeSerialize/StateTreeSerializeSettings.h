#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Newtonsoft::Json { class JsonSerializerSettings; }

#define STATETREESERIALIZE_STATETREESERIALIZESETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F62F0)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int StateTreeSerializeSettings_TypeDefinitionIndex = 39161;

	class StateTreeSerializeSettings : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::JsonSerializerSettings** StaticGet_Settings()
		{
			return (::Newtonsoft::Json::JsonSerializerSettings**)Il2CppClass::FromTypeDefinitionIndex(StateTreeSerializeSettings_TypeDefinitionIndex)->GetStaticField(0x2A980);
		}
		static ::Unity::Collections::Allocator* StaticGet_DeserializeAllocator()
		{
			return (::Unity::Collections::Allocator*)Il2CppClass::FromTypeDefinitionIndex(StateTreeSerializeSettings_TypeDefinitionIndex)->GetStaticField(0x8F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREESERIALIZESETTINGS__CCTOR_OFFSET))();
		}
	};
}
