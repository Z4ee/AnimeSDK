#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int AppContextSwitches_TypeDefinitionIndex = 143;

	class AppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_SetActorAsReferenceWhenCopyingClaimsIdentity()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x1B0);
		}
		static ::System::Boolean* StaticGet_ThrowExceptionIfDisposedCancellationTokenSource()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x1B1);
		}
		static ::System::Boolean* StaticGet_NoAsyncCurrentCulture()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x1B2);
		}
	};
}
