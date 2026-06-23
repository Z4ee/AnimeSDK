#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder_DeserializeInfo; }
namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass9_0; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_1__BUILDDESERIALIZE_B__4_OFFSET UNITYSDK_OFFSET(0x1D408620)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D408610)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass9_1_TypeDefinitionIndex = 29295;

	class DynamicObjectTypeBuilder___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* intKeyMap; // 0x10
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass9_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* _BuildDeserialize_b__4(::System::Int32 x)
		{
			return ((::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_1__BUILDDESERIALIZE_B__4_OFFSET))(this, x);
		}
	};
}
