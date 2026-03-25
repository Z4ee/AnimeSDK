#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int AppContextSwitches_TypeDefinitionIndex = 157;

	class AppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_ThrowExceptionIfDisposedCancellationTokenSource()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x2910);
		}
		static ::System::Boolean* StaticGet_SetActorAsReferenceWhenCopyingClaimsIdentity()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x2911);
		}
		static ::System::Boolean* StaticGet_PreserveEventListnerObjectIdentity()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x2912);
		}
	};
}
