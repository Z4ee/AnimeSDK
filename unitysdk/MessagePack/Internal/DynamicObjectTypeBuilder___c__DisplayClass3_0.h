#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1815B460)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_0_TypeDefinitionIndex = 7279;

	class DynamicObjectTypeBuilder___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::FieldBuilder* stringByteKeysField; // 0x10
		::System::Collections::Generic::Dictionary_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Reflection::FieldInfo*>* customFormatterLookup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}
	};
}
