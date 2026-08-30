#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_MESSAGEPACKSERIALIZEROPTIONSDEFAULTSETTINGSLAZYINITIALIZATIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D568390)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializerOptions_MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper_TypeDefinitionIndex = 7177;

	class MessagePackSerializerOptions_MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Standard()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializerOptions_MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper_TypeDefinitionIndex)->GetStaticField(0x18CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_MESSAGEPACKSERIALIZEROPTIONSDEFAULTSETTINGSLAZYINITIALIZATIONHELPER__CCTOR_OFFSET))();
		}
	};
}
