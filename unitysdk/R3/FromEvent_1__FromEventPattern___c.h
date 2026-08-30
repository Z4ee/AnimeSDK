#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class FromEvent_1__FromEventPattern___c; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int FromEvent_1__FromEventPattern___c_TypeDefinitionIndex = 35233;

	template <typename TDelegate>
	class FromEvent_1__FromEventPattern___c : public ::System::Object
	{
	public:
		static ::R3::FromEvent_1__FromEventPattern___c<TDelegate>** StaticGet___9()
		{
			return (::R3::FromEvent_1__FromEventPattern___c<TDelegate>**)Il2CppClass::FromTypeDefinitionIndex(FromEvent_1__FromEventPattern___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FromEvent_1__FromEventPattern___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
