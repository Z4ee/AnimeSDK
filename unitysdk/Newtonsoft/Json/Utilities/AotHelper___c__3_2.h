#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class AotHelper___c__3_2; }
namespace System { class Action; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int AotHelper___c__3_2_TypeDefinitionIndex = 7032;

	template <typename TKey, typename TValue>
	class AotHelper___c__3_2 : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::AotHelper___c__3_2<TKey, TValue>** StaticGet___9()
		{
			return (::Newtonsoft::Json::Utilities::AotHelper___c__3_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(AotHelper___c__3_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AotHelper___c__3_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
