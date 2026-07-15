#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF::Helpers { template <typename T> class PropertyReference___c__27_1; }
namespace System { class Attribute; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace SRF::Helpers
{
	inline static constexpr unsigned int PropertyReference___c__27_1_TypeDefinitionIndex = 33992;

	template <typename T>
	class PropertyReference___c__27_1 : public ::System::Object
	{
	public:
		static ::SRF::Helpers::PropertyReference___c__27_1<T>** StaticGet___9()
		{
			return (::SRF::Helpers::PropertyReference___c__27_1<T>**)Il2CppClass::FromTypeDefinitionIndex(PropertyReference___c__27_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Attribute*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::Attribute*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PropertyReference___c__27_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
