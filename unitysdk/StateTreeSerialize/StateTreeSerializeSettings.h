#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Newtonsoft::Json { class JsonSerializerSettings; }

#define STATETREESERIALIZE_STATETREESERIALIZESETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3445D0)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int StateTreeSerializeSettings_TypeDefinitionIndex = 38500;

	class StateTreeSerializeSettings : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::JsonSerializerSettings** StaticGet_Settings()
		{
			return (::Newtonsoft::Json::JsonSerializerSettings**)Il2CppClass::FromTypeDefinitionIndex(StateTreeSerializeSettings_TypeDefinitionIndex)->GetStaticField(0x29050);
		}
		static ::Unity::Collections::Allocator* StaticGet_DeserializeAllocator()
		{
			return (::Unity::Collections::Allocator*)Il2CppClass::FromTypeDefinitionIndex(StateTreeSerializeSettings_TypeDefinitionIndex)->GetStaticField(0x8E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREESERIALIZESETTINGS__CCTOR_OFFSET))();
		}
	};
}
