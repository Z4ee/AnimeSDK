#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFIX_ADDITIONALBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12ABCEB0)

namespace IFix
{
	inline static constexpr unsigned int AdditionalBridge_TypeDefinitionIndex = 61269;

	class AdditionalBridge : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_bridge()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AdditionalBridge_TypeDefinitionIndex)->GetStaticField(0x391F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ADDITIONALBRIDGE__CCTOR_OFFSET))();
		}
	};
}
