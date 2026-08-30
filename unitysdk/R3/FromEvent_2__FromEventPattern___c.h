#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T1, typename T2> class FromEvent_2__FromEventPattern___c; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int FromEvent_2__FromEventPattern___c_TypeDefinitionIndex = 35236;

	template <typename TDelegate, typename T>
	class FromEvent_2__FromEventPattern___c : public ::System::Object
	{
	public:
		static ::R3::FromEvent_2__FromEventPattern___c<TDelegate, T>** StaticGet___9()
		{
			return (::R3::FromEvent_2__FromEventPattern___c<TDelegate, T>**)Il2CppClass::FromTypeDefinitionIndex(FromEvent_2__FromEventPattern___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FromEvent_2__FromEventPattern___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
