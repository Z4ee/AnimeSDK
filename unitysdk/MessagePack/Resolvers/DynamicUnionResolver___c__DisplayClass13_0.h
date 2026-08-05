#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack { class UnionAttribute; }
namespace System::Reflection::Emit { class ILGenerator; }
template <typename T1, typename T2> class __f__AnonymousType0_2;

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS13_0__BUILDDESERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1EF90330)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF90320)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver___c__DisplayClass13_0_TypeDefinitionIndex = 29956;

	class DynamicUnionResolver___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>* _BuildDeserialize_b__0(::MessagePack::UnionAttribute* x)
		{
			return ((::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*(*)(::PVOID, ::MessagePack::UnionAttribute*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS13_0__BUILDDESERIALIZE_B__0_OFFSET))(this, x);
		}
	};
}
