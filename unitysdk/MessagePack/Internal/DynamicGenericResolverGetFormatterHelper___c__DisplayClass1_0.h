#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class ParameterInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4A260)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__DISPLAYCLASS1_0__GETFORMATTER_B__7_OFFSET UNITYSDK_OFFSET(0x15D4B880)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicGenericResolverGetFormatterHelper___c__DisplayClass1_0_TypeDefinitionIndex = 9165;

	class DynamicGenericResolverGetFormatterHelper___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFormatter_b__7(::System::Type* allowedType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__DISPLAYCLASS1_0__GETFORMATTER_B__7_OFFSET))(this, allowedType);
		}
	};
}
