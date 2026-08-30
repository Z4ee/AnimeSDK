#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int AppContextSwitches_TypeDefinitionIndex = 156;

	class AppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_ThrowExceptionIfDisposedCancellationTokenSource()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x2920);
		}
		static ::System::Boolean* StaticGet_PreserveEventListnerObjectIdentity()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x2921);
		}
		static ::System::Boolean* StaticGet_SetActorAsReferenceWhenCopyingClaimsIdentity()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x2922);
		}
	};
}
