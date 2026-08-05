#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITJSON_UNITYTYPEBINDINGS_REGISTER_OFFSET UNITYSDK_OFFSET(0x1EF4D6A0)

namespace LitJson
{
	inline static constexpr unsigned int UnityTypeBindings_TypeDefinitionIndex = 8331;

	class UnityTypeBindings : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_registerd()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings_TypeDefinitionIndex)->GetStaticField(0x3AC0);
		}

		static ::System::Void Register()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS_REGISTER_OFFSET))();
		}
	};
}
