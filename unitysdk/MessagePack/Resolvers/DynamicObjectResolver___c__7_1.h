#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackObjectAttribute; }
namespace MessagePack::Resolvers { template <typename T> class DynamicObjectResolver___c__7_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver___c__7_1_TypeDefinitionIndex = 7220;

	template <typename T>
	class DynamicObjectResolver___c__7_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicObjectResolver___c__7_1<T>** StaticGet___9()
		{
			return (::MessagePack::Resolvers::DynamicObjectResolver___c__7_1<T>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::MessagePack::MessagePackObjectAttribute*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::MessagePack::MessagePackObjectAttribute*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
