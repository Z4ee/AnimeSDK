#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { template <typename T> class DelegateFormatter_1___c; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DelegateFormatter_1___c_TypeDefinitionIndex = 7452;

	template <typename T>
	class DelegateFormatter_1___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::DelegateFormatter_1___c<T>** StaticGet___9()
		{
			return (::Sirenix::Serialization::DelegateFormatter_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(DelegateFormatter_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateFormatter_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateFormatter_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
