#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { template <typename T> class Helper___c__97_1; }
namespace System { class Delegate; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Helper___c__97_1_TypeDefinitionIndex = 42734;

	template <typename TCallback>
	class Helper___c__97_1 : public ::System::Object
	{
	public:
		static ::Epic::OnlineServices::Helper___c__97_1<TCallback>** StaticGet___9()
		{
			return (::Epic::OnlineServices::Helper___c__97_1<TCallback>**)Il2CppClass::FromTypeDefinitionIndex(Helper___c__97_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Delegate*, ::System::Boolean>** StaticGet___9__97_0()
		{
			return (::System::Func_2<::System::Delegate*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Helper___c__97_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
