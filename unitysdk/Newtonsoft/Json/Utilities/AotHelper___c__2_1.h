#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T> class AotHelper___c__2_1; }
namespace System { class Action; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int AotHelper___c__2_1_TypeDefinitionIndex = 7031;

	template <typename T>
	class AotHelper___c__2_1 : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>** StaticGet___9()
		{
			return (::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>**)Il2CppClass::FromTypeDefinitionIndex(AotHelper___c__2_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AotHelper___c__2_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
